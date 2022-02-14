
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int global_alpha; int chromakey; } ;
struct TYPE_3__ {TYPE_2__ win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int osd_global_alpha; int osd_chroma_key; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct ivtv*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct ivtv *VAR_3 = ((struct ivtv_open_id *)VAR_1)->itv;
 int VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_4 == 0) {
  VAR_3->osd_chroma_key = VAR_2->fmt.win.chromakey;
  VAR_3->osd_global_alpha = VAR_2->fmt.win.global_alpha;
  FUNC_0(VAR_3);
 }
 return VAR_4;
}
