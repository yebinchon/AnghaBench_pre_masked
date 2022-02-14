
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ commandType; } ;
typedef TYPE_1__ Query ;
typedef int Node ;
typedef int List ;
typedef scalar_t__ CmdType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;

bool
FUNC_3(Query *VAR_5)
{
 List *VAR_6 = VAR_4;
 CmdType VAR_7 = VAR_5->commandType;

 if (!FUNC_0())
 {
  return 0;
 }

 if (VAR_7 != VAR_2 && VAR_7 != VAR_1 &&
  VAR_7 != VAR_3 && VAR_7 != VAR_0)
 {
  return 0;
 }

 FUNC_1((Node *) VAR_5, &VAR_6);

 return FUNC_2(VAR_6);
}
