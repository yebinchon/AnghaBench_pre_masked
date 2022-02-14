
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {struct channel_obj* channel; } ;
struct video_obj {unsigned int output_id; } ;
struct file {int dummy; } ;
struct channel_obj {struct video_obj video; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct vpif_fh *VAR_3 = VAR_1;
 struct channel_obj *VAR_4 = VAR_3->channel;
 struct video_obj *VAR_5 = &VAR_4->video;

 *VAR_2 = VAR_5->output_id;

 return 0;
}
