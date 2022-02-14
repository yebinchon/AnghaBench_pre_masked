
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int height; int width; } ;
typedef TYPE_2__ video_frame_info_t ;
struct TYPE_7__ {int selection_border; int selection; } ;
struct TYPE_9__ {TYPE_1__ theme_dynamic; } ;
typedef TYPE_3__ ozone_handle_t ;


 int FUNC_0 (TYPE_2__*,int,int,int,unsigned int,int ,int ,int ) ;
 int FUNC_1 (int ,float) ;

__attribute__((used)) static void FUNC_2(ozone_handle_t *VAR_0,
      video_frame_info_t *VAR_1,
      int VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      size_t VAR_5, float VAR_6)
{
   FUNC_1(VAR_0->theme_dynamic.selection_border, VAR_6);
   FUNC_1(VAR_0->theme_dynamic.selection, VAR_6);


   FUNC_0(VAR_1, VAR_2, (int)VAR_5, VAR_3, VAR_4 - 5, VAR_1->width, VAR_1->height, VAR_0->theme_dynamic.selection);




   FUNC_0(VAR_1, VAR_2 - 3, (int)(VAR_5 - 3), VAR_3 + 6, 3, VAR_1->width, VAR_1->height, VAR_0->theme_dynamic.selection_border);


   FUNC_0(VAR_1, VAR_2 - 3, (int)(VAR_5 + VAR_4 - 5), VAR_3 + 6, 3, VAR_1->width, VAR_1->height, VAR_0->theme_dynamic.selection_border);


   FUNC_0(VAR_1, (int)(VAR_2 - 3), (int)VAR_5, 3, VAR_4 - 5, VAR_1->width, VAR_1->height, VAR_0->theme_dynamic.selection_border);


   FUNC_0(VAR_1, VAR_2 + VAR_3, (int)VAR_5, 3, VAR_4 - 5, VAR_1->width, VAR_1->height, VAR_0->theme_dynamic.selection_border);
}
