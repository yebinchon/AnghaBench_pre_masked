
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__** tqe_prev; TYPE_2__* tqe_next; } ;
struct TYPE_5__ {int sl_flags; TYPE_1__ sl_link; } ;
typedef TYPE_2__ mcl_slab_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(mcl_slab_t *VAR_1)
{
 VAR_1->sl_link.tqe_next = (mcl_slab_t *)-1;
 VAR_1->sl_link.tqe_prev = (mcl_slab_t **)-1;
 VAR_1->sl_flags |= VAR_0;
}
