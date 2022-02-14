
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int texture; scalar_t__ scene_state; } ;
struct TYPE_4__ {int model; } ;
typedef TYPE_1__ TEAPOT_STATE_T ;
typedef TYPE_2__ RASPITEX_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(RASPITEX_STATE *VAR_3)
{
   TEAPOT_STATE_T *VAR_4 = (TEAPOT_STATE_T *) VAR_3->scene_state;


   FUNC_2(VAR_0 | VAR_1);


   FUNC_1(VAR_2, VAR_3->texture);
   FUNC_0(VAR_4->model, VAR_3->texture);
   return 0;
}
