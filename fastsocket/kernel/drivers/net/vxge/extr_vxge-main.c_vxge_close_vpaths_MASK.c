
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vpaths_open; } ;
struct vxgedev {int no_of_vpath; TYPE_2__* vpaths; TYPE_1__ stats; } ;
struct TYPE_4__ {int * handle; scalar_t__ is_open; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct vxgedev *VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = VAR_1; VAR_2 < VAR_0->no_of_vpath; VAR_2++) {
  if (VAR_0->vpaths[VAR_2].handle && VAR_0->vpaths[VAR_2].is_open) {
   FUNC_0(VAR_0->vpaths[VAR_2].handle);
   VAR_0->stats.vpaths_open--;
  }
  VAR_0->vpaths[VAR_2].is_open = 0;
  VAR_0->vpaths[VAR_2].handle = ((void*)0);
 }
}
