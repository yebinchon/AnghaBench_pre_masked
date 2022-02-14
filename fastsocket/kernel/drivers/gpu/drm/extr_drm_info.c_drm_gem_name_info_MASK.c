
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {int object_name_idr; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*) ;

int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct drm_info_node *VAR_3 = (struct drm_info_node *) VAR_1->private;
 struct drm_device *VAR_4 = VAR_3->minor->dev;

 FUNC_1(VAR_1, "  name     size handles refcount\n");
 FUNC_0(&VAR_4->object_name_idr, VAR_0, VAR_1);
 return 0;
}
