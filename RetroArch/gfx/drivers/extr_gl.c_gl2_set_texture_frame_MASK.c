
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ menu_linear_filter; } ;
struct TYPE_7__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {float menu_texture_alpha; size_t tex_index; int * texture; int menu_texture; } ;
typedef TYPE_3__ gl_t ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int ,int,int ,unsigned int,unsigned int,void const*,unsigned int) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(void *VAR_4,
      const void *VAR_5, bool VAR_6, unsigned VAR_7, unsigned VAR_8,
      float VAR_9)
{
   enum texture_filter_type VAR_10;
   settings_t *VAR_11 = FUNC_0();
   unsigned VAR_12 = VAR_6 ? sizeof(uint32_t) : sizeof(uint16_t);
   gl_t *VAR_13 = (gl_t*)VAR_4;
   if (!VAR_13)
      return;

   FUNC_1(VAR_13, 0);

   VAR_10 = VAR_11->bools.menu_linear_filter ? VAR_2 : VAR_3;

   if (!VAR_13->menu_texture)
      FUNC_3(1, &VAR_13->menu_texture);

   FUNC_4(VAR_13->menu_texture,
         VAR_1, VAR_10,
         FUNC_5(VAR_7 * VAR_12),
         VAR_7, VAR_8, VAR_5,
         VAR_12);

   VAR_13->menu_texture_alpha = VAR_9;
   FUNC_2(VAR_0, VAR_13->texture[VAR_13->tex_index]);

   FUNC_1(VAR_13, 1);
}
