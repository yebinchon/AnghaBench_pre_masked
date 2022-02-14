
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_4)
{
 int VAR_5;
 int VAR_6;


 VAR_5 = FUNC_0(VAR_4, VAR_2);

 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5 & ~(VAR_3));

 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_0);

 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_2);

 if (VAR_5 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5 | 0x0008);

 return VAR_6;
}
