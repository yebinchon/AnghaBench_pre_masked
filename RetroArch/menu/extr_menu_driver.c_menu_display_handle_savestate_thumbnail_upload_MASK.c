
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void texture_image ;
typedef int retro_task_t ;
struct TYPE_3__ {int type; void* data; } ;
typedef TYPE_1__ menu_ctx_load_image_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(retro_task_t *VAR_1,
      void *VAR_2,
      void *VAR_3, const char *VAR_4)
{
   menu_ctx_load_image_t VAR_5;
   struct texture_image *VAR_6 = (struct texture_image*)VAR_2;

   VAR_5.data = VAR_6;
   VAR_5.type = VAR_0;

   FUNC_2(&VAR_5);

   FUNC_1(VAR_6);
   FUNC_0(VAR_6);
   FUNC_0(VAR_3);
}
