
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ServerName; char* HubName; int Msg; } ;
typedef TYPE_1__ UI_MSG_DLG ;
typedef int SOCK ;
typedef int PACK ;


 int * FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,char*,int ) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*) ;

SOCK *FUNC_9(UI_MSG_DLG *VAR_0)
{
 SOCK *VAR_1;
 PACK *VAR_2;
 char *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0(200);
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_4();
 FUNC_6(VAR_2, "function", "msg_dialog");
 FUNC_6(VAR_2, "ServerName", VAR_0->ServerName);
 FUNC_6(VAR_2, "HubName", VAR_0->HubName);
 VAR_3 = FUNC_1(VAR_0->Msg);
 FUNC_5(VAR_2, "Msg", VAR_3, FUNC_8(VAR_3));
 FUNC_2(VAR_3);

 FUNC_7(VAR_1, VAR_2);
 FUNC_3(VAR_2);

 return VAR_1;
}
