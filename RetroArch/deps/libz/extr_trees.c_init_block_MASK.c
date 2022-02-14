
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {long opt_len; long static_len; scalar_t__ matches; scalar_t__ last_lit; TYPE_3__* dyn_ltree; TYPE_2__* bl_tree; TYPE_1__* dyn_dtree; } ;
typedef TYPE_4__ deflate_state ;
struct TYPE_8__ {int Freq; } ;
struct TYPE_7__ {scalar_t__ Freq; } ;
struct TYPE_6__ {scalar_t__ Freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(deflate_state *VAR_4)
{
   int VAR_5;


   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) VAR_4->dyn_ltree[VAR_5].Freq = 0;
   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) VAR_4->dyn_dtree[VAR_5].Freq = 0;
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) VAR_4->bl_tree[VAR_5].Freq = 0;

   VAR_4->dyn_ltree[VAR_2].Freq = 1;
   VAR_4->opt_len = VAR_4->static_len = 0L;
   VAR_4->last_lit = VAR_4->matches = 0;
}
