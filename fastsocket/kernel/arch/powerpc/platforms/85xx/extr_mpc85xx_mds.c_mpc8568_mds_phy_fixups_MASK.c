
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int FUNC_0 (struct phy_device*,int) ;
 int FUNC_1 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_0)
{
 int VAR_1;
 int VAR_2;


 VAR_2 = FUNC_1(VAR_0,29, 0x0006);

 if (VAR_2)
  return VAR_2;

 VAR_1 = FUNC_0(VAR_0, 30);

 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = (VAR_1 & (~0x8000)) | 0x4000;
 VAR_2 = FUNC_1(VAR_0,30, VAR_1);

 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0,29, 0x000a);

 if (VAR_2)
  return VAR_2;

 VAR_1 = FUNC_0(VAR_0, 30);

 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, 30);

 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 &= ~0x0020;

 VAR_2 = FUNC_1(VAR_0,30,VAR_1);

 if (VAR_2)
  return VAR_2;


 VAR_1 = FUNC_0(VAR_0, 16);

 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 &= ~0x0060;
 VAR_2 = FUNC_1(VAR_0,16,VAR_1);

 return VAR_2;
}
