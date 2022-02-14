
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {int dummy; } ;
struct ivtv_stream {scalar_t__ id; scalar_t__ type; int s_flags; int name; } ;
struct ivtv_open_id {size_t type; scalar_t__ open_id; int prio; struct ivtv* itv; } ;
struct TYPE_2__ {int video_mute_yuv; int video_mute; } ;
struct ivtv {int hw_flags; scalar_t__ output_mode; int serialize_lock; struct ivtv_stream* streams; TYPE_1__ cxhdl; int capturing; int std; int i_flags; int prio; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_11 ;
 struct ivtv_open_id* FUNC_3 (struct v4l2_fh*) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*,int ,int ,int ) ;
 int FUNC_6 (struct ivtv*,int,int ,int ,int ,int ) ;
 int FUNC_7 (struct ivtv*) ;
 int FUNC_8 (struct ivtv*) ;
 int FUNC_9 (struct ivtv_stream*) ;
 int FUNC_10 (struct ivtv_open_id*,int ) ;
 int FUNC_11 (struct ivtv_open_id*,int,int ) ;
 int FUNC_12 (struct ivtv*) ;
 int FUNC_13 (struct ivtv*,int ,int,int) ;
 int FUNC_14 (struct ivtv_open_id*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct v4l2_fh*) ;
 int FUNC_20 (struct v4l2_fh*) ;
 int FUNC_21 (int *,int ) ;
 int VAR_14 ;

int FUNC_22(struct file *VAR_15)
{
 struct v4l2_fh *VAR_16 = VAR_15->private_data;
 struct ivtv_open_id *VAR_17 = FUNC_3(VAR_16);
 struct ivtv *VAR_18 = VAR_17->itv;
 struct ivtv_stream *VAR_19 = &VAR_18->streams[VAR_17->type];

 FUNC_0("close %s\n", VAR_19->name);

 FUNC_21(&VAR_18->prio, VAR_17->prio);
 FUNC_19(VAR_16);
 FUNC_20(VAR_16);


 if (VAR_19->id != VAR_17->open_id) {
  FUNC_14(VAR_17);
  return 0;
 }




 FUNC_15(&VAR_18->serialize_lock);
 if (VAR_17->type == VAR_3) {

  FUNC_8(VAR_18);

  FUNC_2(VAR_4, &VAR_18->i_flags);

  FUNC_5(VAR_18, VAR_11, VAR_13, VAR_18->std);

  FUNC_4(VAR_18);
  if (VAR_18->hw_flags & VAR_6) {
   FUNC_6(VAR_18, VAR_6, VAR_14, VAR_12,
     VAR_8, 0);
  }
  if (FUNC_1(&VAR_18->capturing) > 0) {

   FUNC_13(VAR_18, VAR_0, 1,
    FUNC_18(VAR_18->cxhdl.video_mute) |
    (FUNC_18(VAR_18->cxhdl.video_mute_yuv) << 8));
  }

  FUNC_12(VAR_18);
  FUNC_9(VAR_19);
 } else if (VAR_19->type >= VAR_1) {
  struct ivtv_stream *VAR_20 = &VAR_18->streams[VAR_2];

  FUNC_11(VAR_17, VAR_10 | VAR_9, 0);



  if (VAR_18->output_mode == VAR_7 && !FUNC_17(VAR_5, &VAR_20->s_flags)) {

   FUNC_7(VAR_18);
  }
 } else {
  FUNC_10(VAR_17, 0);
 }
 FUNC_14(VAR_17);
 FUNC_16(&VAR_18->serialize_lock);
 return 0;
}
