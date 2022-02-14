
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_3)
{
 int VAR_4;

 if(VAR_3->interrupts == VAR_2)
  VAR_4 = FUNC_0(VAR_3, VAR_0,
    VAR_1);
 else
  VAR_4 = FUNC_0(VAR_3, VAR_0, 0);

 return VAR_4;
}
