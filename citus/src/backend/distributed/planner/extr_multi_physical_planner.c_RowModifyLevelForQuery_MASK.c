
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ commandType; int * onConflict; } ;
typedef int RowModifyLevel ;
typedef TYPE_1__ Query ;
typedef scalar_t__ CmdType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

RowModifyLevel
FUNC_0(Query *VAR_8)
{
 CmdType VAR_9 = VAR_8->commandType;

 if (VAR_9 == VAR_2)
 {
  return VAR_7;
 }

 if (VAR_9 == VAR_1)
 {
  if (VAR_8->onConflict == ((void*)0))
  {
   return VAR_4;
  }
  else
  {
   return VAR_5;
  }
 }

 if (VAR_9 == VAR_3 ||
  VAR_9 == VAR_0)
 {
  return VAR_5;
 }

 return VAR_6;
}
