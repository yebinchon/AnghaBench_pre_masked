
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_5__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct yuv_playback_info {int osd_full_w; int osd_full_h; TYPE_2__ main_rect; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_4__ {int count; int* start; int sliced_decoder_line_size; } ;
struct ivtv {int std; int is_60hz; int is_50hz; int hw_flags; int v4l2_cap; int std_out; int is_out_60hz; int is_out_50hz; int osd_info; TYPE_2__ main_rect; TYPE_3__ cxhdl; int vsync_waitq; TYPE_1__ vbi; int decoding; int capturing; int i_flags; struct yuv_playback_info yuv_info; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned long long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_11 ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct ivtv*,int ,int ,int) ;
 int FUNC_7 (struct ivtv*,int ,int,int,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_13(struct file *VAR_16, void *VAR_17, v4l2_std_id *VAR_18)
{
 FUNC_0(VAR_15);
 struct ivtv *VAR_19 = ((struct ivtv_open_id *)VAR_17)->itv;
 struct yuv_playback_info *VAR_20 = &VAR_19->yuv_info;
 int VAR_21;

 if ((*VAR_18 & VAR_10) == 0)
  return -VAR_3;

 if (*VAR_18 == VAR_19->std)
  return 0;

 if (FUNC_12(VAR_4, &VAR_19->i_flags) ||
     FUNC_3(&VAR_19->capturing) > 0 ||
     FUNC_3(&VAR_19->decoding) > 0) {



  return -VAR_2;
 }

 VAR_19->std = *VAR_18;
 VAR_19->is_60hz = (*VAR_18 & VAR_9) ? 1 : 0;
 VAR_19->is_50hz = !VAR_19->is_60hz;
 FUNC_4(&VAR_19->cxhdl, VAR_19->is_50hz);
 VAR_19->cxhdl.width = 720;
 VAR_19->cxhdl.height = VAR_19->is_50hz ? 576 : 480;
 VAR_19->vbi.count = VAR_19->is_50hz ? 18 : 12;
 VAR_19->vbi.start[0] = VAR_19->is_50hz ? 6 : 10;
 VAR_19->vbi.start[1] = VAR_19->is_50hz ? 318 : 273;

 if (VAR_19->hw_flags & VAR_5)
  VAR_19->vbi.sliced_decoder_line_size = VAR_19->is_60hz ? 272 : 284;

 FUNC_1("Switching standard to %llx.\n", (unsigned long long)VAR_19->std);


 FUNC_6(VAR_19, VAR_11, VAR_12, VAR_19->std);

 if (VAR_19->v4l2_cap & VAR_8) {

  VAR_19->std_out = *VAR_18;
  VAR_19->is_out_60hz = VAR_19->is_60hz;
  VAR_19->is_out_50hz = VAR_19->is_50hz;
  FUNC_6(VAR_19, VAR_14, VAR_13, VAR_19->std_out);







  for (VAR_21 = 0; VAR_21 < 4; VAR_21++) {
   FUNC_9(&VAR_19->vsync_waitq, &VAR_15,
     VAR_7);
   if ((FUNC_10(VAR_6) >> 16) < 100)
    break;
   FUNC_11(FUNC_8(25));
  }
  FUNC_5(&VAR_19->vsync_waitq, &VAR_15);

  if (VAR_21 == 4)
   FUNC_2("Mode change failed to sync to decoder\n");

  FUNC_7(VAR_19, VAR_0, 1, VAR_19->is_out_50hz);
  VAR_19->main_rect.left = VAR_19->main_rect.top = 0;
  VAR_19->main_rect.width = 720;
  VAR_19->main_rect.height = VAR_19->cxhdl.height;
  FUNC_7(VAR_19, VAR_1, 4,
   720, VAR_19->main_rect.height, 0, 0);
  VAR_20->main_rect = VAR_19->main_rect;
  if (!VAR_19->osd_info) {
   VAR_20->osd_full_w = 720;
   VAR_20->osd_full_h = VAR_19->is_out_50hz ? 576 : 480;
  }
 }
 return 0;
}
