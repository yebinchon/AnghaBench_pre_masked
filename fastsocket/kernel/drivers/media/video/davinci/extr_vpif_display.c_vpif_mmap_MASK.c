
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {TYPE_1__* channel; } ;
struct vm_area_struct {int dummy; } ;
struct file {struct vpif_fh* private_data; } ;
struct common_obj {int buffer_queue; } ;
struct TYPE_2__ {struct common_obj* common; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct vpif_fh *VAR_3 = VAR_1->private_data;
 struct common_obj *VAR_4 = &VAR_3->channel->common[VAR_0];

 return FUNC_0(&VAR_4->buffer_queue, VAR_2);
}
