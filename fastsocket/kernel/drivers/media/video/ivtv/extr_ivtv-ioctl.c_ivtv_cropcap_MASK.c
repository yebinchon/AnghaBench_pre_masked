
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct yuv_playback_info {int osd_full_w; int osd_full_h; scalar_t__ track_osd; } ;
struct TYPE_4__ {int width; int height; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_3__ {int numerator; int denominator; } ;
struct v4l2_cropcap {scalar_t__ type; TYPE_2__ bounds; TYPE_2__ defrect; TYPE_1__ pixelaspect; } ;
struct ivtv_open_id {int type; struct ivtv* itv; } ;
struct ivtv {scalar_t__ is_out_50hz; scalar_t__ is_50hz; struct yuv_playback_info yuv_info; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5, struct v4l2_cropcap *VAR_6)
{
 struct ivtv_open_id *VAR_7 = VAR_5;
 struct ivtv *VAR_8 = VAR_7->itv;
 struct yuv_playback_info *VAR_9 = &VAR_8->yuv_info;
 int VAR_10;

 VAR_10 = VAR_7->type;

 if (VAR_6->type != VAR_3)
  return -VAR_0;
 VAR_6->bounds.top = VAR_6->bounds.left = 0;
 VAR_6->bounds.width = 720;
 if (VAR_6->type == VAR_2) {
  VAR_6->bounds.height = VAR_8->is_50hz ? 576 : 480;
  VAR_6->pixelaspect.numerator = VAR_8->is_50hz ? 59 : 10;
  VAR_6->pixelaspect.denominator = VAR_8->is_50hz ? 54 : 11;
 } else if (VAR_10 == VAR_1) {
  if (VAR_9->track_osd) {
   VAR_6->bounds.width = VAR_9->osd_full_w;
   VAR_6->bounds.height = VAR_9->osd_full_h;
  } else {
   VAR_6->bounds.width = 720;
   VAR_6->bounds.height =
     VAR_8->is_out_50hz ? 576 : 480;
  }
  VAR_6->pixelaspect.numerator = VAR_8->is_out_50hz ? 59 : 10;
  VAR_6->pixelaspect.denominator = VAR_8->is_out_50hz ? 54 : 11;
 } else {
  VAR_6->bounds.height = VAR_8->is_out_50hz ? 576 : 480;
  VAR_6->pixelaspect.numerator = VAR_8->is_out_50hz ? 59 : 10;
  VAR_6->pixelaspect.denominator = VAR_8->is_out_50hz ? 54 : 11;
 }
 VAR_6->defrect = VAR_6->bounds;
 return 0;
}
