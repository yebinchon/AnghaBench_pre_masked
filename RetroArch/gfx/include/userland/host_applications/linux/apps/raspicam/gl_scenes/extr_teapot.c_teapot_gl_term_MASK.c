
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* scene_state; } ;
struct TYPE_6__ {scalar_t__ model; } ;
typedef TYPE_1__ TEAPOT_STATE_T ;
typedef TYPE_2__ RASPITEX_STATE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(RASPITEX_STATE *VAR_1)
{
   FUNC_3("%s:", VAR_0);

   TEAPOT_STATE_T *VAR_2 = VAR_1->scene_state;
   if (VAR_2)
   {
      if (VAR_2->model)
         FUNC_2(VAR_2->model);
      FUNC_1(VAR_1);
      FUNC_0(VAR_1->scene_state);
      VAR_1->scene_state = ((void*)0);
   }
}
