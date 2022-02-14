
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int label_alpha; int alpha; } ;
typedef TYPE_1__ xmb_node_t ;
struct TYPE_6__ {float target_value; uintptr_t tag; int * subject; int * cb; int easing_enum; int duration; } ;
typedef TYPE_2__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(xmb_node_t *VAR_2,
      uintptr_t VAR_3, float VAR_4, float VAR_5)
{
   menu_animation_ctx_entry_t VAR_6;

   VAR_6.duration = VAR_1;
   VAR_6.target_value = VAR_4;
   VAR_6.subject = &VAR_2->alpha;
   VAR_6.easing_enum = VAR_0;
   VAR_6.tag = VAR_3;
   VAR_6.cb = ((void*)0);

   FUNC_0(&VAR_6);

   VAR_6.subject = &VAR_2->label_alpha;

   FUNC_0(&VAR_6);

   VAR_6.target_value = VAR_5;
   VAR_6.subject = &VAR_2->x;

   FUNC_0(&VAR_6);
}
