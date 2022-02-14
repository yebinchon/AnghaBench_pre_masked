
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {struct channel_obj* channel; } ;
struct file {struct vpif_fh* private_data; } ;
struct common_obj {int buffer_queue; scalar_t__ started; } ;
struct channel_obj {struct common_obj* common; } ;
typedef int poll_table ;


 size_t VAR_0 ;
 unsigned int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_1, poll_table *VAR_2)
{
 struct vpif_fh *VAR_3 = VAR_1->private_data;
 struct channel_obj *VAR_4 = VAR_3->channel;
 struct common_obj *VAR_5 = &VAR_4->common[VAR_0];

 if (VAR_5->started)
  return FUNC_0(VAR_1, &VAR_5->buffer_queue, VAR_2);

 return 0;
}
