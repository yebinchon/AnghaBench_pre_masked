
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxgedev {int no_of_vpath; struct vxge_vpath* vpaths; } ;
struct vxge_vpath {int handle; int is_open; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,unsigned short) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0, unsigned short VAR_1)
{
 struct vxgedev *VAR_2;
 struct vxge_vpath *VAR_3;
 int VAR_4;

 VAR_2 = (struct vxgedev *)FUNC_0(VAR_0);


 for (VAR_4 = 0; VAR_4 < VAR_2->no_of_vpath; VAR_4++) {
  VAR_3 = &VAR_2->vpaths[VAR_4];
  if (!VAR_3->is_open)
   continue;
  FUNC_1(VAR_3->handle, VAR_1);
 }
}
