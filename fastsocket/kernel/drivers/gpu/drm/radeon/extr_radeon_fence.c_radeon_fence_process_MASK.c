
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_device {int fence_queue; TYPE_1__* fence_drv; } ;
struct TYPE_2__ {int* sync_seq; int last_activity; int last_seq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct radeon_device *VAR_1, int VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5;
 unsigned VAR_6 = 0;
 bool VAR_7 = 0;
 VAR_4 = FUNC_0(&VAR_1->fence_drv[VAR_2].last_seq);
 do {
  VAR_5 = VAR_1->fence_drv[VAR_2].sync_seq[VAR_2];
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  VAR_3 |= VAR_4 & 0xffffffff00000000LL;
  if (VAR_3 < VAR_4) {
   VAR_3 &= 0xffffffff;
   VAR_3 |= VAR_5 & 0xffffffff00000000LL;
  }

  if (VAR_3 <= VAR_4 || VAR_3 > VAR_5) {
   break;
  }




  VAR_7 = 1;
  VAR_4 = VAR_3;
  if ((VAR_6++) > 10) {





   break;
  }
 } while (FUNC_1(&VAR_1->fence_drv[VAR_2].last_seq, VAR_3) > VAR_3);

 if (VAR_7) {
  VAR_1->fence_drv[VAR_2].last_activity = VAR_0;
  FUNC_3(&VAR_1->fence_queue);
 }
}
