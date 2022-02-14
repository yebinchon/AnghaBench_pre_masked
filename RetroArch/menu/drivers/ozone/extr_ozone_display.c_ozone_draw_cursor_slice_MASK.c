
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int height; int width; } ;
typedef TYPE_3__ video_frame_info_t ;
struct TYPE_11__ {int cursor_border; int cursor_alpha; } ;
struct TYPE_13__ {int * textures; TYPE_2__ theme_dynamic; TYPE_1__* theme; } ;
typedef TYPE_4__ ozone_handle_t ;
struct TYPE_10__ {int * textures; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int,int,int,int,unsigned int,unsigned int,int ,int ,int ,int,double,int ) ;
 int FUNC_3 (int ,float) ;

__attribute__((used)) static void FUNC_4(ozone_handle_t *VAR_2,
      video_frame_info_t *VAR_3,
      int VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      size_t VAR_7, float VAR_8)
{
   FUNC_3(VAR_2->theme_dynamic.cursor_alpha, VAR_8);
   FUNC_3(VAR_2->theme_dynamic.cursor_border, VAR_8);

   FUNC_0(VAR_3);


   FUNC_2(
      VAR_3,
      VAR_4 - 14,
      (int)(VAR_7 + 8),
      80, 80,
      VAR_5 + 3 + 28 - 4,
      VAR_6 + 20,
      VAR_3->width, VAR_3->height,
      VAR_2->theme_dynamic.cursor_alpha,
      20, 1.0,
      VAR_2->theme->textures[VAR_1]
   );


   FUNC_2(
      VAR_3,
      VAR_4 - 14,
      (int)(VAR_7 + 8),
      80, 80,
      VAR_5 + 3 + 28 - 4,
      VAR_6 + 20,
      VAR_3->width, VAR_3->height,
      VAR_2->theme_dynamic.cursor_border,
      20, 1.0,
      VAR_2->textures[VAR_0]
   );

   FUNC_1(VAR_3);
}
