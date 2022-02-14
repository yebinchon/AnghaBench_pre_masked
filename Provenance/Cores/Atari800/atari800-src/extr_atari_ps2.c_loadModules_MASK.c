
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int *) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_8(void)
{
 int VAR_8;


 VAR_8 = FUNC_5("rom0:SIO2MAN", 0, ((void*)0));
 if (VAR_8 < 0) {
  FUNC_0("Sio2man loading failed: %d", VAR_8);
  FUNC_6();
 }


 FUNC_5("rom0:MCMAN", 0, ((void*)0));


 FUNC_5("rom0:MCSERV", 0, ((void*)0));


 VAR_8 = FUNC_5("rom0:PADMAN", 0, ((void*)0));
 if (VAR_8 < 0) {
  FUNC_0("Padman loading failed: %d", VAR_8);
  FUNC_6();
 }

 FUNC_7(VAR_0);


 FUNC_4(0);

 FUNC_3(VAR_7, VAR_6, 0, ((void*)0), &VAR_8);
 FUNC_3(VAR_3, VAR_5, 0, ((void*)0), &VAR_8);

 if (FUNC_1() == 0) {
  FUNC_0("Failed to Init Keyboard.");
 }
 FUNC_2(VAR_1);







}
