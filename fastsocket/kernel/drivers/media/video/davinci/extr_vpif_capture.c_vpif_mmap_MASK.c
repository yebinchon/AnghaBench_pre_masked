
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {struct channel_obj* channel; } ;
struct vm_area_struct {int dummy; } ;
struct file {struct vpif_fh* private_data; } ;
struct common_obj {int buffer_queue; } ;
struct channel_obj {struct common_obj* common; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct vm_area_struct*) ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, struct vm_area_struct *VAR_3)
{

 struct vpif_fh *VAR_4 = VAR_2->private_data;
 struct channel_obj *VAR_5 = VAR_4->channel;
 struct common_obj *VAR_6 = &(VAR_5->common[VAR_0]);

 FUNC_1(2, VAR_1, "vpif_mmap\n");

 return FUNC_0(&VAR_6->buffer_queue, VAR_3);
}
