
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int function ;
struct TYPE_17__ {int* addr; } ;
struct TYPE_19__ {TYPE_1__ LocalIP; int ref; } ;
struct TYPE_18__ {TYPE_3__* s; } ;
typedef int THREAD ;
typedef TYPE_2__ TCP_ACCEPTED_PARAM ;
typedef TYPE_3__ SOCK ;
typedef int PACK ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_1 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int * FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,char*,int ) ;
 scalar_t__ FUNC_18 (int *,char*,char*,int) ;
 int * FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 int FUNC_23 (int ) ;

void FUNC_24(THREAD *VAR_2, void *VAR_3)
{
 TCP_ACCEPTED_PARAM *VAR_4 = (TCP_ACCEPTED_PARAM *)VAR_3;
 SOCK *VAR_5;
 PACK *VAR_6;

 if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }






 VAR_5 = VAR_4->s;
 FUNC_0(VAR_5->ref);
 FUNC_16(VAR_2);

 if (VAR_5->LocalIP.addr[0] == 127)
 {
  VAR_6 = FUNC_19(VAR_5);

  if (VAR_6 != ((void*)0))
  {
   char VAR_7[VAR_1];

   if (FUNC_18(VAR_6, "function", VAR_7, sizeof(VAR_7)))
   {
    if (FUNC_22(VAR_7, "status_printer") == 0)
    {
     FUNC_9(VAR_5, VAR_6);
    }
    else if (FUNC_22(VAR_7, "connecterror_dialog") == 0)
    {
     FUNC_2(VAR_5, VAR_6);
    }
    else if (FUNC_22(VAR_7, "msg_dialog") == 0)
    {
     FUNC_4(VAR_5, VAR_6);
    }
    else if (FUNC_22(VAR_7, "nicinfo") == 0)
    {
     FUNC_5(VAR_5, VAR_6);
    }
    else if (FUNC_22(VAR_7, "password_dialog") == 0)
    {
     FUNC_6(VAR_5, VAR_6);
    }
    else if (FUNC_22(VAR_7, "secure_sign") == 0)
    {
     FUNC_8(VAR_5, VAR_6);
    }
    else if (FUNC_22(VAR_7, "check_cert") == 0)
    {
     FUNC_1(VAR_5, VAR_6);
    }
    else if (FUNC_22(VAR_7, "exit") == 0)
    {



     FUNC_23(0);

    }
    else if (FUNC_22(VAR_7, "get_session_id") == 0)
    {
     PACK *VAR_8 = FUNC_15();



     FUNC_21(VAR_5, VAR_8);
     FUNC_11(VAR_8);
    }
    else if (FUNC_22(VAR_7, "exec_driver_installer") == 0)
    {
     FUNC_3(VAR_5, VAR_6);
    }
    else if (FUNC_22(VAR_7, "release_socket") == 0)
    {

     FUNC_7(VAR_5, VAR_6);
    }
   }

   FUNC_11(VAR_6);
  }
 }

 FUNC_10(VAR_5);
 FUNC_20(VAR_5);
}
