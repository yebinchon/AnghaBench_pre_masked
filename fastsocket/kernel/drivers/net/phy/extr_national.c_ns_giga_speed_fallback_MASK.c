
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct phy_device *VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_0(VAR_6, VAR_2);

 FUNC_1(VAR_6, VAR_2, (VAR_8 | VAR_0));


 FUNC_1(VAR_6, VAR_4, 0);
 FUNC_1(VAR_6, VAR_3, 0x1C0);
 FUNC_1(VAR_6, VAR_5, 0x0008);
 FUNC_1(VAR_6, VAR_2, (VAR_8 & ~VAR_0));
 FUNC_1(VAR_6, VAR_1, VAR_7);
 return;
}
