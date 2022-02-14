
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
typedef TYPE_1__ slock_t ;
struct TYPE_8__ {int cond; } ;
typedef TYPE_2__ scond_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(scond_t *VAR_1, slock_t *VAR_2)
{



   FUNC_1(&VAR_1->cond, &VAR_2->lock);

}
