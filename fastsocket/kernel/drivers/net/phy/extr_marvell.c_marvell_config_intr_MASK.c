
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_4)
{
 int VAR_5;

 if (VAR_4->interrupts == VAR_3)
  VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_2);
 else
  VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_1);

 return VAR_5;
}
