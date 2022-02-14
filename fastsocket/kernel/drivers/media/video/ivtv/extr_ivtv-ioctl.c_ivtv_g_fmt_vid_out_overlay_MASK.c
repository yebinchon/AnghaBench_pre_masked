
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; scalar_t__ left; scalar_t__ top; } ;
struct v4l2_window {TYPE_2__ w; int * bitmap; scalar_t__ clipcount; int * clips; int field; int global_alpha; int chromakey; } ;
struct TYPE_4__ {struct v4l2_window win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct TYPE_6__ {int height; int width; } ;
struct ivtv {int v4l2_cap; TYPE_3__ osd_rect; int osd_global_alpha; int osd_chroma_key; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4, struct v4l2_format *VAR_5)
{
 struct ivtv *VAR_6 = ((struct ivtv_open_id *)VAR_4)->itv;
 struct v4l2_window *VAR_7 = &VAR_5->fmt.win;

 if (!(VAR_6->v4l2_cap & VAR_1))
  return -VAR_0;
 VAR_7->chromakey = VAR_6->osd_chroma_key;
 VAR_7->global_alpha = VAR_6->osd_global_alpha;
 VAR_7->field = VAR_2;
 VAR_7->clips = ((void*)0);
 VAR_7->clipcount = 0;
 VAR_7->bitmap = ((void*)0);
 VAR_7->w.top = VAR_7->w.left = 0;
 VAR_7->w.width = VAR_6->osd_rect.width;
 VAR_7->w.height = VAR_6->osd_rect.height;
 return 0;
}
