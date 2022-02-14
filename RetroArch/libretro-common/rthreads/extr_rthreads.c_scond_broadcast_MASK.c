
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ waiters; scalar_t__ wakens; int cond; int hot_potato; int event; } ;
typedef TYPE_1__ scond_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(scond_t *VAR_0)
{
   return FUNC_1(&VAR_0->cond);

}
