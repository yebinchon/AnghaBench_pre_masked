
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbi_info {int wss_missing_cnt; int cc_missing_cnt; int wss_payload; scalar_t__ cc_payload_idx; struct vbi_cc* cc_payload; } ;
struct vbi_cc {int* odd; int* even; } ;
struct v4l2_sliced_vbi_data {int field; int* data; int id; } ;
struct ivtv {scalar_t__ output_mode; int i_flags; int sd_video; scalar_t__ is_50hz; struct vbi_info vbi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int VAR_6 ;
 int FUNC_1 (struct ivtv*,int,struct vbi_cc*) ;
 int FUNC_2 (struct ivtv*,int) ;
 int FUNC_3 (struct ivtv*,int,int) ;
 int FUNC_4 (struct vbi_cc*,struct vbi_cc*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int ,struct v4l2_sliced_vbi_data*) ;
 int VAR_7 ;

void FUNC_8(struct ivtv *VAR_8)
{
 struct vbi_info *VAR_9 = &VAR_8->vbi;
 struct v4l2_sliced_vbi_data VAR_10;
 struct vbi_cc VAR_11 = { .odd = { 0x80, 0x80 }, .even = { 0x80, 0x80 } };


 if (VAR_8->output_mode == VAR_3) {
  if (VAR_8->is_50hz) {
   VAR_10.id = VAR_5;
   VAR_10.field = 0;

   if (FUNC_7(VAR_8->sd_video, VAR_7, VAR_6, &VAR_10) == 0) {
    FUNC_3(VAR_8, 1, VAR_10.data[0] & 0xf);
    VAR_9->wss_missing_cnt = 0;
   } else if (VAR_9->wss_missing_cnt == 4) {
    FUNC_3(VAR_8, 1, 0x8);
   } else {
    VAR_9->wss_missing_cnt++;
   }
  }
  else {
   int VAR_12 = 0;

   VAR_10.id = VAR_4;
   VAR_10.field = 0;
   if (FUNC_7(VAR_8->sd_video, VAR_7, VAR_6, &VAR_10) == 0) {
    VAR_12 |= 1;
    VAR_11.odd[0] = VAR_10.data[0];
    VAR_11.odd[1] = VAR_10.data[1];
   }
   VAR_10.field = 1;
   if (FUNC_7(VAR_8->sd_video, VAR_7, VAR_6, &VAR_10) == 0) {
    VAR_12 |= 2;
    VAR_11.even[0] = VAR_10.data[0];
    VAR_11.even[1] = VAR_10.data[1];
   }
   if (VAR_12) {
    VAR_9->cc_missing_cnt = 0;
    FUNC_1(VAR_8, VAR_12, &VAR_11);
   } else if (VAR_9->cc_missing_cnt == 4) {
    FUNC_1(VAR_8, 0, &VAR_11);
   } else {
    VAR_9->cc_missing_cnt++;
   }
  }
  return;
 }

 if (FUNC_5(VAR_2, &VAR_8->i_flags)) {
  FUNC_3(VAR_8, 1, VAR_9->wss_payload & 0xf);
 }

 if (FUNC_6(VAR_0, &VAR_8->i_flags)) {
  if (VAR_9->cc_payload_idx == 0) {
   FUNC_0(VAR_0, &VAR_8->i_flags);
   FUNC_1(VAR_8, 3, &VAR_11);
  }
  while (VAR_9->cc_payload_idx) {
   VAR_11 = VAR_9->cc_payload[0];

   FUNC_4(VAR_9->cc_payload, VAR_9->cc_payload + 1,
     sizeof(VAR_9->cc_payload) - sizeof(VAR_9->cc_payload[0]));
   VAR_9->cc_payload_idx--;
   if (VAR_9->cc_payload_idx && VAR_11.odd[0] == 0x80 && VAR_11.odd[1] == 0x80)
    continue;

   FUNC_1(VAR_8, 3, &VAR_11);
   break;
  }
 }

 if (FUNC_5(VAR_1, &VAR_8->i_flags)) {
  FUNC_2(VAR_8, 1);
 }
}
