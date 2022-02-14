
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int t ;
typedef int a ;
struct TYPE_9__ {int ServerAdmin; int * Server; } ;
typedef int SERVER ;
typedef TYPE_1__ RPC_SESSION_STATUS ;
typedef int PACK ;
typedef TYPE_1__ ADMIN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

PACK *FUNC_6(SERVER *VAR_1, PACK *VAR_2)
{
 RPC_SESSION_STATUS VAR_3;
 ADMIN VAR_4;
 PACK *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_5(&VAR_3, sizeof(VAR_3));
 FUNC_1(&VAR_3, VAR_2);

 FUNC_5(&VAR_4, sizeof(VAR_4));
 VAR_4.Server = VAR_1;
 VAR_4.ServerAdmin = 1;

 if (FUNC_4(&VAR_4, &VAR_3) != VAR_0)
 {
  FUNC_0(&VAR_3);
  return ((void*)0);
 }

 VAR_5 = FUNC_2();

 FUNC_3(VAR_5, &VAR_3);

 FUNC_0(&VAR_3);

 return VAR_5;
}
