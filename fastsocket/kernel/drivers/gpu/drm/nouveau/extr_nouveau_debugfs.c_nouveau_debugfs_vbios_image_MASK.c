
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_4__ {int length; int * data; } ;
struct nouveau_drm {TYPE_2__ vbios; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct TYPE_3__ {int dev; } ;


 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *) VAR_0->private;
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_2->minor->dev);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->vbios.length; VAR_4++)
  FUNC_1(VAR_0, "%c", VAR_3->vbios.data[VAR_4]);
 return 0;
}
