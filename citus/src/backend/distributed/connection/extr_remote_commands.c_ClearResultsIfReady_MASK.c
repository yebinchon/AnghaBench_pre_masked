
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pgConn; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef TYPE_1__ MultiConnection ;
typedef scalar_t__ ExecStatusType ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 () ;

bool
FUNC_10(MultiConnection *VAR_6)
{
 PGconn *VAR_7 = VAR_6->pgConn;

 if (FUNC_8(VAR_7) != VAR_0)
 {
  return 0;
 }

 FUNC_0(FUNC_6(VAR_7));

 while (1)
 {
  PGresult *VAR_8 = ((void*)0);
  ExecStatusType VAR_9;






  if (FUNC_5(VAR_7))
  {
   if (FUNC_3(VAR_7) == -1)
   {

    return 0;
   }
   if (FUNC_2(VAR_7) == 0)
   {

    return 0;
   }
  }


  if (FUNC_5(VAR_7))
  {
   return 0;
  }

  VAR_8 = FUNC_4(VAR_7);
  if (VAR_8 == ((void*)0))
  {

   return 1;
  }

  VAR_9 = FUNC_7(VAR_8);


  FUNC_1(VAR_8);

  if (VAR_9 == VAR_2 || VAR_9 == VAR_3)
  {

   return 0;
  }

  if (!(VAR_9 == VAR_4 || VAR_9 == VAR_5 ||
     VAR_9 == VAR_1))
  {

   return 0;
  }


 }

 FUNC_9();
}
