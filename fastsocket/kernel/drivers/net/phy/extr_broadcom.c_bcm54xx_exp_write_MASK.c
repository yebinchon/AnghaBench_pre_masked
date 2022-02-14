
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_4);


 FUNC_0(VAR_2, VAR_1, 0);

 return VAR_5;
}
