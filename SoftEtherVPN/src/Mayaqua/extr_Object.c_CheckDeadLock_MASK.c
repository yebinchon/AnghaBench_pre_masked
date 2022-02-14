
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int msg ;
typedef int c ;
typedef int UINT ;
struct TYPE_4__ {int Unlocked; int Timeout; int * Lock; } ;
typedef int THREAD ;
typedef int LOCK ;
typedef TYPE_1__ DEADCHECK ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;

void FUNC_7(LOCK *VAR_3, UINT VAR_4, char *VAR_5)
{
 DEADCHECK VAR_6;
 THREAD *VAR_7;
 char VAR_8[VAR_2];

 if (VAR_3 == ((void*)0))
 {
  return;
 }
 if (VAR_5 == ((void*)0))
 {
  VAR_5 = "Unknown";
 }

 FUNC_1(VAR_8, sizeof(VAR_8), "error: CheckDeadLock() Failed: %s\n", VAR_5);

 FUNC_6(&VAR_6, sizeof(VAR_6));
 VAR_6.Lock = VAR_3;
 VAR_6.Timeout = VAR_4;
 VAR_6.Unlocked = 0;

 VAR_7 = FUNC_2(VAR_0, &VAR_6);
 FUNC_5(VAR_7);
 if (FUNC_4(VAR_7, VAR_4) == 0)
 {
  if (VAR_6.Unlocked == 0)
  {

   FUNC_0(VAR_8);
  }
  else
  {
   FUNC_4(VAR_7, VAR_1);
  }
 }

 FUNC_3(VAR_7);
}
