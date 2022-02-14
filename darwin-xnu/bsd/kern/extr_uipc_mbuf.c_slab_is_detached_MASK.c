
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tqe_prev; scalar_t__ tqe_next; } ;
struct TYPE_5__ {int sl_flags; TYPE_1__ sl_link; } ;
typedef TYPE_2__ mcl_slab_t ;
typedef int boolean_t ;


 int VAR_0 ;

__attribute__((used)) static boolean_t
FUNC_0(mcl_slab_t *VAR_1)
{
 return ((intptr_t)VAR_1->sl_link.tqe_next == -1 &&
     (intptr_t)VAR_1->sl_link.tqe_prev == -1 &&
     (VAR_1->sl_flags & VAR_0));
}
