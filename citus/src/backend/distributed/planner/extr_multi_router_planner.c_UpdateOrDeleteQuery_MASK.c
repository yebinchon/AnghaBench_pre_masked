
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ commandType; } ;
typedef TYPE_1__ Query ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool
FUNC_0(Query *VAR_2)
{
 return VAR_2->commandType == VAR_1 ||
     VAR_2->commandType == VAR_0;
}
