
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe {int * lock; int sc; } ;
struct TYPE_4__ {TYPE_1__* locking; } ;
struct TYPE_3__ {int (* unlock ) (int *) ;} ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct stripe *VAR_0)
{
 FUNC_0(VAR_0->sc)->locking->unlock(VAR_0->lock);
 VAR_0->lock = ((void*)0);
}
