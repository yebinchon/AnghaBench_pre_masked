
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int top; int left; int height; int width; } ;
struct yuv_playback_info {TYPE_1__ main_rect; } ;
struct v4l2_crop {scalar_t__ type; TYPE_1__ c; } ;
struct ivtv_open_id {int type; struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; TYPE_1__ main_rect; struct yuv_playback_info yuv_info; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ivtv*,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6, struct v4l2_crop *VAR_7)
{
 struct ivtv_open_id *VAR_8 = VAR_6;
 struct ivtv *VAR_9 = VAR_8->itv;
 struct yuv_playback_info *VAR_10 = &VAR_9->yuv_info;
 int VAR_11;

 VAR_11 = VAR_8->type;

 if (VAR_7->type == VAR_3 &&
     (VAR_9->v4l2_cap & VAR_4)) {
  if (VAR_11 == VAR_2) {
   VAR_10->main_rect = VAR_7->c;
   return 0;
  } else {
   if (!FUNC_0(VAR_9, VAR_0, 4,
    VAR_7->c.width, VAR_7->c.height, VAR_7->c.left, VAR_7->c.top)) {
    VAR_9->main_rect = VAR_7->c;
    return 0;
   }
  }
  return -VAR_1;
 }
 return -VAR_1;
}
