
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vbi; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct ivtv_open_id {struct ivtv* itv; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ in; TYPE_4__* sliced_in; } ;
struct ivtv {int sd_video; TYPE_2__ vbi; int capturing; } ;
struct file {int dummy; } ;
struct TYPE_8__ {scalar_t__ service_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_2 (struct ivtv*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5, struct v4l2_format *VAR_6)
{
 struct ivtv *VAR_7 = ((struct ivtv_open_id *)VAR_5)->itv;

 if (!FUNC_2(VAR_7) && FUNC_0(&VAR_7->capturing) > 0)
  return -VAR_0;
 VAR_7->vbi.sliced_in->service_set = 0;
 VAR_7->vbi.in.type = VAR_1;
 FUNC_3(VAR_7->sd_video, VAR_3, VAR_2, &VAR_6->fmt.vbi);
 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
