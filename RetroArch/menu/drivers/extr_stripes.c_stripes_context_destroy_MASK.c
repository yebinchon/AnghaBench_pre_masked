
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * list; } ;
struct TYPE_6__ {int * font2; int * font; int savestate_thumbnail; int left_thumbnail; int thumbnail; TYPE_1__ textures; } ;
typedef TYPE_2__ stripes_handle_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
   unsigned VAR_2;
   stripes_handle_t *VAR_3 = (stripes_handle_t*)VAR_1;

   if (!VAR_3)
      return;

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
      FUNC_3(&VAR_3->textures.list[VAR_2]);

   FUNC_3(&VAR_3->thumbnail);
   FUNC_3(&VAR_3->left_thumbnail);
   FUNC_3(&VAR_3->savestate_thumbnail);

   FUNC_2(VAR_3);
   FUNC_1(VAR_3);

   FUNC_0(VAR_3->font);
   FUNC_0(VAR_3->font2);

   VAR_3->font = ((void*)0);
   VAR_3->font2 = ((void*)0);
}
