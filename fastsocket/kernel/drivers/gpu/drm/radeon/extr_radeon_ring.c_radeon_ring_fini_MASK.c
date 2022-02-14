
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int ready; struct radeon_bo* ring_obj; int * ring; } ;
struct radeon_device {int ring_lock; } ;
struct radeon_bo {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_bo*) ;
 int FUNC_4 (struct radeon_bo*,int) ;
 int FUNC_5 (struct radeon_bo*) ;
 int FUNC_6 (struct radeon_bo**) ;
 int FUNC_7 (struct radeon_bo*) ;

void FUNC_8(struct radeon_device *VAR_0, struct radeon_ring *VAR_1)
{
 int VAR_2;
 struct radeon_bo *VAR_3;

 FUNC_1(&VAR_0->ring_lock);
 VAR_3 = VAR_1->ring_obj;
 VAR_1->ready = 0;
 VAR_1->ring = ((void*)0);
 VAR_1->ring_obj = ((void*)0);
 FUNC_2(&VAR_0->ring_lock);

 if (VAR_3) {
  VAR_2 = FUNC_4(VAR_3, 0);
  if (FUNC_0(VAR_2 == 0)) {
   FUNC_3(VAR_3);
   FUNC_5(VAR_3);
   FUNC_7(VAR_3);
  }
  FUNC_6(&VAR_3);
 }
}
