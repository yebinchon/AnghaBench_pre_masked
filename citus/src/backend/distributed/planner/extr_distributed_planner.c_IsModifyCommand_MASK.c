
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ commandType; } ;
typedef TYPE_1__ Query ;
typedef scalar_t__ CmdType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool
FUNC_0(Query *VAR_3)
{
 CmdType VAR_4 = VAR_3->commandType;

 if (VAR_4 == VAR_1 || VAR_4 == VAR_2 ||
  VAR_4 == VAR_0)
 {
  return 1;
 }

 return 0;
}
