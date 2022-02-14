
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ring_obj; int * ring; } ;
struct radeon_device {TYPE_1__ ih; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct radeon_device *VAR_0)
{
 int VAR_1;
 if (VAR_0->ih.ring_obj) {
  VAR_1 = FUNC_2(VAR_0->ih.ring_obj, 0);
  if (FUNC_0(VAR_1 == 0)) {
   FUNC_1(VAR_0->ih.ring_obj);
   FUNC_3(VAR_0->ih.ring_obj);
   FUNC_5(VAR_0->ih.ring_obj);
  }
  FUNC_4(&VAR_0->ih.ring_obj);
  VAR_0->ih.ring = ((void*)0);
  VAR_0->ih.ring_obj = ((void*)0);
 }
}
