
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct osd_info {void* video_rbase; int display_width; int display_height; } ;
struct ivtv_osd_coords {int max_offset; void* y; void* x; void* lines; void* pixel_stride; void* offset; } ;
struct ivtv {struct osd_info* osd_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ivtv*,void**,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ivtv *VAR_2,
          struct ivtv_osd_coords *VAR_3)
{
 struct osd_info *VAR_4 = VAR_2->osd_info;
 u32 VAR_5[VAR_0];

 FUNC_0(VAR_2, VAR_5, VAR_1, 0);

 VAR_3->offset = VAR_5[0] - VAR_4->video_rbase;
 VAR_3->max_offset = VAR_4->display_width * VAR_4->display_height * 4;
 VAR_3->pixel_stride = VAR_5[1];
 VAR_3->lines = VAR_5[2];
 VAR_3->x = VAR_5[3];
 VAR_3->y = VAR_5[4];
 return 0;
}
