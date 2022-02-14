
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * font; } ;
struct TYPE_10__ {int * font; } ;
struct TYPE_9__ {int * font; } ;
struct TYPE_12__ {TYPE_4__ hint; TYPE_3__ list; TYPE_2__ title; } ;
struct TYPE_8__ {int * list; } ;
struct TYPE_13__ {TYPE_5__ font_data; TYPE_1__ textures; } ;
typedef TYPE_6__ materialui_handle_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
   materialui_handle_t *VAR_2 = (materialui_handle_t*)VAR_1;
   unsigned VAR_3;

   if (!VAR_2)
      return;


   for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
      FUNC_3(&VAR_2->textures.list[VAR_3]);


   if (VAR_2->font_data.title.font)
      FUNC_2(VAR_2->font_data.title.font);
   VAR_2->font_data.title.font = ((void*)0);

   if (VAR_2->font_data.list.font)
      FUNC_2(VAR_2->font_data.list.font);
   VAR_2->font_data.list.font = ((void*)0);

   if (VAR_2->font_data.hint.font)
      FUNC_2(VAR_2->font_data.hint.font);
   VAR_2->font_data.hint.font = ((void*)0);


   FUNC_1();


   FUNC_0(VAR_2);
}
