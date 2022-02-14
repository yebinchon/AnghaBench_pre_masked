
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int global_alpha; int chromakey; } ;
struct TYPE_4__ {TYPE_1__ win; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {int v4l2_cap; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct ivtv *VAR_5 = ((struct ivtv_open_id *)VAR_3)->itv;
 u32 VAR_6 = VAR_4->fmt.win.chromakey;
 u8 VAR_7 = VAR_4->fmt.win.global_alpha;

 if (!(VAR_5->v4l2_cap & VAR_1))
  return -VAR_0;
 FUNC_0(VAR_2, VAR_3, VAR_4);
 VAR_4->fmt.win.chromakey = VAR_6;
 VAR_4->fmt.win.global_alpha = VAR_7;
 return 0;
}
