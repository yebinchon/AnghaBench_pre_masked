
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int * br; } ;
struct binder_thread {TYPE_2__ stats; } ;
struct TYPE_4__ {int * br; } ;
struct binder_proc {TYPE_1__ stats; } ;
struct TYPE_6__ {int * br; } ;


 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (int ) ;
 TYPE_3__ VAR_0 ;

void FUNC_2(struct binder_proc *VAR_1, struct binder_thread *VAR_2,
      uint32_t VAR_3)
{
 if (FUNC_1(VAR_3) < FUNC_0(VAR_0.br)) {
  VAR_0.br[FUNC_1(VAR_3)]++;
  VAR_1->stats.br[FUNC_1(VAR_3)]++;
  VAR_2->stats.br[FUNC_1(VAR_3)]++;
 }
}
