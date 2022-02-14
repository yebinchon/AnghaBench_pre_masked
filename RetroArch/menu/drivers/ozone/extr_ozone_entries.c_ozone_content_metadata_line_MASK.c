
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int height; int width; } ;
typedef TYPE_3__ video_frame_info_t ;
struct TYPE_10__ {int footer; } ;
struct TYPE_12__ {TYPE_1__* theme; TYPE_2__ fonts; } ;
typedef TYPE_4__ ozone_handle_t ;
struct TYPE_9__ {int text_rgba; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,char const*,unsigned int,unsigned int,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(video_frame_info_t *VAR_2, ozone_handle_t *VAR_3,
   unsigned *VAR_4, unsigned VAR_5, const char *VAR_6, unsigned VAR_7)
{
   int VAR_8 = FUNC_0(VAR_3->fonts.footer, 1);

   FUNC_1(VAR_2, VAR_3,
      VAR_6,
      VAR_5,
      *VAR_4 + VAR_0,
      VAR_1,
      VAR_2->width, VAR_2->height,
      VAR_3->fonts.footer,
      VAR_3->theme->text_rgba,
      1
   );

   if (VAR_7 > 0)
      *VAR_4 += (unsigned)(VAR_8 * (VAR_7 - 1)) + (unsigned)((float)VAR_8 * 1.5f);
}
