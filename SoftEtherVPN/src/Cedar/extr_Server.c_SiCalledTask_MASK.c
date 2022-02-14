
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Server; } ;
typedef int SERVER ;
typedef int PACK ;
typedef TYPE_1__ FARM_CONTROLLER ;


 int FUNC_0 (char*,char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int * FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,int *) ;
 int * FUNC_13 (int *,int *) ;
 int * FUNC_14 (int *,int *) ;
 int * FUNC_15 (int *,int *) ;
 int * FUNC_16 (int *,int *) ;
 int * FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 scalar_t__ FUNC_19 (char*,char*) ;

PACK *FUNC_20(FARM_CONTROLLER *VAR_0, PACK *VAR_1, char *VAR_2)
{
 PACK *VAR_3;
 SERVER *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = ((void*)0);
 VAR_4 = VAR_0->Server;

 if (FUNC_19(VAR_2, "noop") == 0)
 {

  VAR_3 = FUNC_1();
 }
 else
 {
  FUNC_0("Task Called: [%s].\n", VAR_2);
  if (FUNC_19(VAR_2, "createhub") == 0)
  {
   FUNC_2(VAR_4, VAR_1);
   VAR_3 = FUNC_1();
  }
  else if (FUNC_19(VAR_2, "deletehub") == 0)
  {
   FUNC_4(VAR_4, VAR_1);
   VAR_3 = FUNC_1();
  }
  else if (FUNC_19(VAR_2, "enumhub") == 0)
  {
   VAR_3 = FUNC_1();
   FUNC_9(VAR_4, VAR_3, VAR_1);
  }
  else if (FUNC_19(VAR_2, "updatehub") == 0)
  {
   FUNC_18(VAR_4, VAR_1);
   VAR_3 = FUNC_1();
  }
  else if (FUNC_19(VAR_2, "createticket") == 0)
  {
   VAR_3 = FUNC_3(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "enumnat") == 0)
  {
   VAR_3 = FUNC_13(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "enumdhcp") == 0)
  {
   VAR_3 = FUNC_8(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "getnatstatus") == 0)
  {
   VAR_3 = FUNC_15(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "enumsession") == 0)
  {
   VAR_3 = FUNC_14(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "deletesession") == 0)
  {
   FUNC_7(VAR_4, VAR_1);
   VAR_3 = FUNC_1();
  }
  else if (FUNC_19(VAR_2, "deletemactable") == 0)
  {
   FUNC_6(VAR_4, VAR_1);
   VAR_3 = FUNC_1();
  }
  else if (FUNC_19(VAR_2, "deleteiptable") == 0)
  {
   FUNC_5(VAR_4, VAR_1);
   VAR_3 = FUNC_1();
  }
  else if (FUNC_19(VAR_2, "enummactable") == 0)
  {
   VAR_3 = FUNC_12(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "enumiptable") == 0)
  {
   VAR_3 = FUNC_10(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "getsessionstatus") == 0)
  {
   VAR_3 = FUNC_16(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "enumlogfilelist") == 0)
  {
   VAR_3 = FUNC_11(VAR_4, VAR_1);
  }
  else if (FUNC_19(VAR_2, "readlogfile") == 0)
  {
   VAR_3 = FUNC_17(VAR_4, VAR_1);
  }
 }

 return VAR_3;
}
