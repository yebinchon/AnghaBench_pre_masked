
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_4, u16 VAR_5, u32 VAR_6)
{
 u32 VAR_7;

 FUNC_0(VAR_5 % 4 != 0);

 VAR_7 = FUNC_1(VAR_4, VAR_1);
 if (VAR_7 & VAR_0)
  VAR_6 = FUNC_4(VAR_6);

 FUNC_2(VAR_4, VAR_2, VAR_5);
 FUNC_3();
 FUNC_2(VAR_4, VAR_3, VAR_6);
}
