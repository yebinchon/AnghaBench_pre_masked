
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int height; int width; } ;
typedef TYPE_4__ video_frame_info_t ;
struct TYPE_14__ {int footer; } ;
struct TYPE_13__ {scalar_t__ sidebar_entry_icon_size; } ;
struct TYPE_17__ {TYPE_3__* theme; TYPE_2__ fonts; int * icons_textures; TYPE_1__ dimensions; } ;
typedef TYPE_5__ ozone_handle_t ;
struct TYPE_15__ {int text_rgba; int entries_icon; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,float) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,unsigned int,unsigned int,int ,unsigned int,unsigned int,int ,int,int ,int,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int ,unsigned int,unsigned int,int ,int ,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(ozone_handle_t *VAR_4,
      video_frame_info_t *VAR_5,
      unsigned VAR_6,
      unsigned VAR_7,
      unsigned VAR_8)
{
   unsigned VAR_9 = VAR_2;
   unsigned VAR_10 = (unsigned)((float)VAR_4->dimensions.sidebar_entry_icon_size * 1.5f);
   unsigned VAR_11 = FUNC_0(VAR_4->fonts.footer, 1.0f);

   FUNC_1(VAR_5);
   FUNC_4(VAR_5,
      VAR_10,
      VAR_10,
      VAR_4->icons_textures[VAR_9],
      VAR_6 + VAR_7/2 - VAR_10/2,
      VAR_5->height / 2 - VAR_10/2 - VAR_8,
      VAR_5->width,
      VAR_5->height,
      0, 1, VAR_4->theme->entries_icon);
   FUNC_2(VAR_5);

   FUNC_5(VAR_5,
      VAR_4,
      FUNC_3(VAR_1),
      VAR_6 + VAR_7/2,
      VAR_5->height / 2 - VAR_10/2 + VAR_11 * 3 + VAR_0 - VAR_8,
      VAR_3,
      VAR_5->width, VAR_5->height,
      VAR_4->fonts.footer,
      VAR_4->theme->text_rgba,
      1
   );
}
