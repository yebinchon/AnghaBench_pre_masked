
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ring_obj; int ring; int gpu_addr; int ring_size; } ;
struct radeon_device {TYPE_1__ ih; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct radeon_device*,int ,int ,int,int ,int *,int **) ;
 int FUNC_2 (int *,void**) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct radeon_device *VAR_2)
{
 int VAR_3;


 if (VAR_2->ih.ring_obj == ((void*)0)) {
  VAR_3 = FUNC_1(VAR_2, VAR_2->ih.ring_size,
         VAR_0, 1,
         VAR_1,
         ((void*)0), &VAR_2->ih.ring_obj);
  if (VAR_3) {
   FUNC_0("radeon: failed to create ih ring buffer (%d).\n", VAR_3);
   return VAR_3;
  }
  VAR_3 = FUNC_4(VAR_2->ih.ring_obj, 0);
  if (FUNC_6(VAR_3 != 0))
   return VAR_3;
  VAR_3 = FUNC_3(VAR_2->ih.ring_obj,
      VAR_1,
      &VAR_2->ih.gpu_addr);
  if (VAR_3) {
   FUNC_5(VAR_2->ih.ring_obj);
   FUNC_0("radeon: failed to pin ih ring buffer (%d).\n", VAR_3);
   return VAR_3;
  }
  VAR_3 = FUNC_2(VAR_2->ih.ring_obj,
       (void **)&VAR_2->ih.ring);
  FUNC_5(VAR_2->ih.ring_obj);
  if (VAR_3) {
   FUNC_0("radeon: failed to map ih ring buffer (%d).\n", VAR_3);
   return VAR_3;
  }
 }
 return 0;
}
