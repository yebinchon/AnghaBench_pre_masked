
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MS_DRIVER_VER ;
typedef int KAKUSHI ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,int ,char*,int *) ;
 scalar_t__ FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;

void FUNC_10(UINT VAR_2, char **VAR_3)
{
 KAKUSHI *VAR_4 = ((void*)0);
 MS_DRIVER_VER VAR_5;
 bool VAR_6;
 if (VAR_2 < 1)
 {
  return;
 }

 FUNC_4(L"VPN", FUNC_8("DEFAULT_FONT"), FUNC_7("DEFAULT_FONT_SIZE"));

 if (FUNC_6())
 {
  VAR_4 = FUNC_3();
 }

 FUNC_0(&VAR_5);

 VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_3[0], &VAR_5);

 FUNC_1(VAR_4);

 FUNC_2();

 if (VAR_6 == 0)
 {
  FUNC_9(1);
 }
 else
 {
  FUNC_9(0);
 }
}
