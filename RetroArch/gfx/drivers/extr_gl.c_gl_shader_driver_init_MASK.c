
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {void* shader_data; TYPE_4__* shader; int path; int data; int shader_type; } ;
typedef TYPE_2__ video_shader_ctx_init_t ;
struct TYPE_7__ {int menu_driver; } ;
struct TYPE_9__ {TYPE_1__ arrays; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {int (* init_menu_shaders ) (void*) ;void* (* init ) (int ,int ) ;} ;


 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 () ;
 TYPE_4__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static bool FUNC_6(video_shader_ctx_init_t *VAR_0)
{
   void *VAR_1 = ((void*)0);
   settings_t *VAR_2 = FUNC_1();

   if (!VAR_0->shader || !VAR_0->shader->init)
   {
      VAR_0->shader = FUNC_2(VAR_0->shader_type);

      if (!VAR_0->shader)
         return 0;
   }

   VAR_1 = VAR_0->shader->init(VAR_0->data, VAR_0->path);

   if (!VAR_1)
      return 0;

   if (FUNC_3(VAR_2->arrays.menu_driver, "xmb")
         && VAR_0->shader->init_menu_shaders)
   {
      FUNC_0("Setting up menu pipeline shaders for XMB ... \n");
      VAR_0->shader->init_menu_shaders(VAR_1);
   }

   VAR_0->shader_data = VAR_1;

   return 1;
}
