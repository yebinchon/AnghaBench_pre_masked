
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pgConn; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef TYPE_1__ MultiConnection ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;

PGresult *
FUNC_6(MultiConnection *VAR_2, bool VAR_3)
{
 PGconn *VAR_4 = VAR_2->pgConn;
 PGresult *VAR_5 = ((void*)0);






 if (!FUNC_3(VAR_4))
 {
  return FUNC_2(VAR_2->pgConn);
 }

 if (!FUNC_1(VAR_2, VAR_3))
 {

  if (FUNC_5(VAR_4) == VAR_0)
  {
   return FUNC_4(VAR_4, VAR_1);
  }

  return ((void*)0);
 }


 FUNC_0(!FUNC_3(VAR_4));

 VAR_5 = FUNC_2(VAR_2->pgConn);

 return VAR_5;
}
