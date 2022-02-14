
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yuv_playback_info {int main_rect; } ;
struct v4l2_crop {scalar_t__ type; int c; } ;
struct ivtv_open_id {int type; struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; int main_rect; struct yuv_playback_info yuv_info; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5, struct v4l2_crop *VAR_6)
{
 struct ivtv_open_id *VAR_7 = VAR_5;
 struct ivtv *VAR_8 = VAR_7->itv;
 struct yuv_playback_info *VAR_9 = &VAR_8->yuv_info;
 int VAR_10;

 VAR_10 = VAR_7->type;

 if (VAR_6->type == VAR_2 &&
     (VAR_8->v4l2_cap & VAR_3)) {
  if (VAR_10 == VAR_1)
   VAR_6->c = VAR_9->main_rect;
  else
   VAR_6->c = VAR_8->main_rect;
  return 0;
 }
 return -VAR_0;
}
