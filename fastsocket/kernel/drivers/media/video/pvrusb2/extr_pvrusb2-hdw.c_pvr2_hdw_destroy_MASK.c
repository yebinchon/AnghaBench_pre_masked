
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {size_t unit_number; struct pvr2_hdw* std_enum_names; struct pvr2_hdw* std_defs; struct pvr2_hdw* mpeg_ctrl_info; struct pvr2_hdw* controls; int v4l2_dev; int * vid_stream; struct pvr2_hdw* fw_buffer; int encoder_wait_timer; int encoder_run_timer; int decoder_stabilization_timer; int quiescent_timer; int * workqueue; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pvr2_hdw*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pvr2_hdw*) ;
 int FUNC_7 (struct pvr2_hdw*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,struct pvr2_hdw*) ;
 int VAR_2 ;
 struct pvr2_hdw** VAR_3 ;
 int FUNC_10 (int *) ;

void FUNC_11(struct pvr2_hdw *VAR_4)
{
 if (!VAR_4) return;
 FUNC_9(VAR_0,"pvr2_hdw_destroy: hdw=%p",VAR_4);
 if (VAR_4->workqueue) {
  FUNC_2(VAR_4->workqueue);
  FUNC_1(VAR_4->workqueue);
  VAR_4->workqueue = ((void*)0);
 }
 FUNC_0(&VAR_4->quiescent_timer);
 FUNC_0(&VAR_4->decoder_stabilization_timer);
 FUNC_0(&VAR_4->encoder_run_timer);
 FUNC_0(&VAR_4->encoder_wait_timer);
 if (VAR_4->fw_buffer) {
  FUNC_3(VAR_4->fw_buffer);
  VAR_4->fw_buffer = ((void*)0);
 }
 if (VAR_4->vid_stream) {
  FUNC_8(VAR_4->vid_stream);
  VAR_4->vid_stream = ((void*)0);
 }
 FUNC_7(VAR_4);
 FUNC_10(&VAR_4->v4l2_dev);
 FUNC_6(VAR_4);
 FUNC_4(&VAR_2); do {
  if ((VAR_4->unit_number >= 0) &&
      (VAR_4->unit_number < VAR_1) &&
      (VAR_3[VAR_4->unit_number] == VAR_4)) {
   VAR_3[VAR_4->unit_number] = ((void*)0);
  }
 } while (0); FUNC_5(&VAR_2);
 FUNC_3(VAR_4->controls);
 FUNC_3(VAR_4->mpeg_ctrl_info);
 FUNC_3(VAR_4->std_defs);
 FUNC_3(VAR_4->std_enum_names);
 FUNC_3(VAR_4);
}
