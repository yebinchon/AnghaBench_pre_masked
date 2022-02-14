
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ idx; TYPE_1__* visit; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_iter_t ;
struct TYPE_4__ {scalar_t__ size; } ;



int FUNC_0(ccv_nnc_symbolic_graph_iter_t* const VAR_0)
{
 ++VAR_0->idx;
 return (VAR_0->idx < VAR_0->visit->size);
}
