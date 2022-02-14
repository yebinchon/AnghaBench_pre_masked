
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


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, v4l2_std_id *VAR_3)
{
 struct vpif_fh *VAR_4 = VAR_2;
 struct channel_obj *VAR_5 = VAR_4->channel;

 FUNC_0(2, VAR_0, "vpif_g_std\n");

 *VAR_3 = VAR_5->video.stdid;
 return 0;
}
