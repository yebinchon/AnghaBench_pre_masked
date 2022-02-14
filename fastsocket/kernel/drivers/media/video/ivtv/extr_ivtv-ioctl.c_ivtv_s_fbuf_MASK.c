
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yuv_playback_info {int track_osd; } ;
struct v4l2_framebuffer {int flags; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; int osd_global_alpha_state; int osd_local_alpha_state; int osd_chroma_key_state; int osd_video_pbase; struct yuv_playback_info yuv_info; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct file*,void*,struct v4l2_framebuffer*) ;
 int FUNC_1 (struct ivtv*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_7, void *VAR_8, struct v4l2_framebuffer *VAR_9)
{
 struct ivtv_open_id *VAR_10 = VAR_8;
 struct ivtv *VAR_11 = VAR_10->itv;
 struct yuv_playback_info *VAR_12 = &VAR_11->yuv_info;

 if (!(VAR_11->v4l2_cap & VAR_1))
  return -VAR_0;
 if (!VAR_11->osd_video_pbase)
  return -VAR_0;

 VAR_11->osd_global_alpha_state = (VAR_9->flags & VAR_3) != 0;
 VAR_11->osd_local_alpha_state =
  (VAR_9->flags & (VAR_4|VAR_5)) != 0;
 VAR_11->osd_chroma_key_state = (VAR_9->flags & VAR_2) != 0;
 FUNC_1(VAR_11);
 VAR_12->track_osd = (VAR_9->flags & VAR_6) != 0;
 return FUNC_0(VAR_7, VAR_8, VAR_9);
}
