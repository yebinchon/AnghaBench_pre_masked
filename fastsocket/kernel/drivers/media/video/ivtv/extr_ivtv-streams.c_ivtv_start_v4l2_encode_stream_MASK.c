
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct ivtv_stream {int type; int subtype; int s_flags; scalar_t__ buffers_stolen; int name; int * vdev; struct ivtv* itv; } ;
struct TYPE_7__ {int video_mute_yuv; int audio_mode; } ;
struct TYPE_5__ {int sliced_mpeg_size; int inserted_frame; int frame; } ;
struct ivtv {int dualwatch_stereo_mode; int v4l2_cap; int capturing; int sd_video; int sd_audio; TYPE_3__ cxhdl; int i_flags; scalar_t__ has_cx23415; void* pgm_info_num; void* pgm_info_offset; scalar_t__ pgm_info_read_idx; scalar_t__ pgm_info_write_idx; TYPE_2__* card; TYPE_1__ vbi; int output_mode; int search_pack_header; int dualwatch_jiffies; int vbi_data_inserted; int mpg_data_received; } ;
struct TYPE_6__ {int hw_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,void*,...) ;
 int FUNC_1 (char*) ;




 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_24 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct ivtv*,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct ivtv*,int) ;
 int FUNC_10 (struct ivtv*,int ) ;
 scalar_t__ FUNC_11 (struct ivtv*,int ,int,...) ;
 int FUNC_12 (struct ivtv*,void**,int ,int,int,int) ;
 int FUNC_13 (struct ivtv*) ;
 int VAR_25 ;
 int FUNC_14 (int ,int ,int) ;
 int VAR_26 ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ,int) ;
 int VAR_27 ;

int FUNC_19(struct ivtv_stream *VAR_28)
{
 u32 VAR_29[VAR_10];
 struct ivtv *VAR_30 = VAR_28->itv;
 int VAR_31 = 0, VAR_32 = 0;
 int VAR_33 = 0;

 if (VAR_28->vdev == ((void*)0))
  return -VAR_11;

 FUNC_0("Start encoder stream %s\n", VAR_28->name);

 switch (VAR_28->type) {
 case 131:
  VAR_31 = 0;
  VAR_32 = 3;


  if (VAR_30->output_mode == VAR_22) {
   FUNC_9(VAR_30, 0);
   VAR_33 = 1;
  }
  VAR_30->mpg_data_received = VAR_30->vbi_data_inserted = 0;
  VAR_30->dualwatch_jiffies = VAR_25;
  VAR_30->dualwatch_stereo_mode = FUNC_17(VAR_30->cxhdl.audio_mode);
  VAR_30->search_pack_header = 0;
  break;

 case 128:
  if (VAR_30->output_mode == VAR_22) {
   VAR_31 = 2;
   VAR_32 = 11;
   break;
  }
  VAR_31 = 1;
  VAR_32 = 1;
  break;
 case 130:
  VAR_31 = 1;
  VAR_32 = 2;
  break;
 case 129:
  VAR_31 = 1;
  VAR_32 = 4;

  VAR_30->vbi.frame = 0;
  VAR_30->vbi.inserted_frame = 0;
  FUNC_14(VAR_30->vbi.sliced_mpeg_size,
   0, sizeof(VAR_30->vbi.sliced_mpeg_size));
  break;
 default:
  return -VAR_11;
 }
 VAR_28->subtype = VAR_32;
 VAR_28->buffers_stolen = 0;


 FUNC_4(VAR_15, &VAR_28->s_flags);

 if (FUNC_3(&VAR_30->capturing) == 0) {
  int VAR_34;







  FUNC_11(VAR_30, VAR_3, 2, 1, 1);


  FUNC_11(VAR_30, VAR_8, 1, 0);






  FUNC_11(VAR_30, VAR_1, 2, 3, !VAR_30->has_cx23415);
  FUNC_11(VAR_30, VAR_1, 2, 8, 0);
  FUNC_11(VAR_30, VAR_1, 2, 4, 1);
  FUNC_11(VAR_30, VAR_1, 1, 12);


  FUNC_11(VAR_30, VAR_7, 12,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

  if (VAR_30->card->hw_all & (VAR_17 | VAR_18))
      VAR_34 = 0xF1;
  else if (VAR_30->card->hw_all & VAR_16)
      VAR_34 = 0xEF;
  else
      VAR_34 = 0x140;

  FUNC_11(VAR_30, VAR_5, 2, VAR_34, VAR_34);


  if (VAR_30->v4l2_cap & VAR_23) {
   FUNC_13(VAR_30);
  }


  FUNC_12(VAR_30, VAR_29, VAR_6, 2, 7, 400);
  VAR_30->pgm_info_offset = VAR_29[0];
  VAR_30->pgm_info_num = VAR_29[1];
  VAR_30->pgm_info_write_idx = 0;
  VAR_30->pgm_info_read_idx = 0;

  FUNC_0("PGM Index at 0x%08x with %d elements\n",
    VAR_30->pgm_info_offset, VAR_30->pgm_info_num);


  FUNC_6(&VAR_30->cxhdl);


  if (FUNC_16(VAR_14, &VAR_30->i_flags))
   FUNC_11(VAR_30, VAR_2, 1,
    1 | (FUNC_17(VAR_30->cxhdl.video_mute_yuv) << 8));
 }


 if (VAR_30->has_cx23415 && !FUNC_15(VAR_12, &VAR_30->i_flags)) {

  FUNC_11(VAR_30, VAR_4, 4, 0, 1, VAR_20, -1);
  FUNC_7(VAR_30, VAR_20);
 }

 if (FUNC_3(&VAR_30->capturing) == 0) {

  FUNC_10(VAR_30, VAR_21);

  FUNC_4(VAR_13, &VAR_30->i_flags);

  FUNC_5(&VAR_30->cxhdl, 1);



  FUNC_18(VAR_30->sd_audio, VAR_24, VAR_26, 1);

  FUNC_18(VAR_30->sd_video, VAR_27, VAR_26, 0);
  FUNC_8(300, 1);
  FUNC_11(VAR_30, VAR_0, 0);
  FUNC_18(VAR_30->sd_video, VAR_27, VAR_26, 1);
 }


 if (FUNC_11(VAR_30, VAR_9, 2, VAR_31, VAR_32))
 {
  FUNC_1( "Error starting capture!\n");
  return -VAR_11;
 }


 if (VAR_33) {
  FUNC_9(VAR_30, 1);
 }

 if (VAR_28->type == 129)
  FUNC_7(VAR_30, VAR_19);
 else
  FUNC_7(VAR_30, VAR_21);


 FUNC_2(&VAR_30->capturing);
 return 0;
}
