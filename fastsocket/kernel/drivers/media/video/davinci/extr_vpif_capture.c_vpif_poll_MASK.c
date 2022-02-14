
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
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_2, poll_table * VAR_3)
{
 int VAR_4 = 0;
 struct vpif_fh *VAR_5 = VAR_2->private_data;
 struct channel_obj *VAR_6 = VAR_5->channel;
 struct common_obj *VAR_7 = &(VAR_6->common[VAR_0]);

 FUNC_1(2, VAR_1, "vpif_poll\n");

 if (VAR_7->started)
  VAR_4 = FUNC_0(VAR_2, &VAR_7->buffer_queue, VAR_3);

 return 0;
}
