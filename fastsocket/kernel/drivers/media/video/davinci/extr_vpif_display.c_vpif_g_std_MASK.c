
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpif_fh {struct channel_obj* channel; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int stdid; } ;
struct channel_obj {TYPE_1__ video; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct vpif_fh *VAR_3 = VAR_1;
 struct channel_obj *VAR_4 = VAR_3->channel;

 *VAR_2 = VAR_4->video.stdid;
 return 0;
}
