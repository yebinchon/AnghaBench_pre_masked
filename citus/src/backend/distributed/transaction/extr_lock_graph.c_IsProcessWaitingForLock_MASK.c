
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ waitStatus; } ;
typedef TYPE_1__ PGPROC ;


 scalar_t__ VAR_0 ;

bool
FUNC_0(PGPROC *VAR_1)
{
 return VAR_1->waitStatus == VAR_0;
}
