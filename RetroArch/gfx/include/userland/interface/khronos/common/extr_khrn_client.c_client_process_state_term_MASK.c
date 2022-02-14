
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int inited; int global_image_egl_images; int syncs; int windows; int surfaces; int contexts; } ;
typedef TYPE_1__ CLIENT_PROCESS_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(CLIENT_PROCESS_STATE_T *VAR_2)
{
   if (VAR_2->inited) {
      FUNC_4(&VAR_2->contexts, VAR_0, ((void*)0));
      FUNC_5(&VAR_2->contexts);

      FUNC_4(&VAR_2->surfaces, VAR_1, ((void*)0));
      FUNC_5(&VAR_2->surfaces);

      FUNC_5(&VAR_2->windows);
      VAR_2->inited = 0;
   }
}
