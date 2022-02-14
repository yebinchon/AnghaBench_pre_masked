
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_2, 0x16, 0x0002);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_2, 0x15, 0x1070);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_2, 0x16, 0x0003);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_2, 0x10, 0x021e);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_2, 0x16, 0x0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
