
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int boxes; } ;
struct TYPE_5__ {int usec_timeout; int flags; TYPE_1__ stats; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(drm_radeon_private_t *VAR_8, int VAR_9)
{
 int VAR_10;

 VAR_8->stats.boxes |= VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_8->usec_timeout; VAR_10++) {
  int VAR_11;
  if ((VAR_8->flags & VAR_7) >= VAR_0)
   VAR_11 = (FUNC_2(VAR_3)
     & VAR_5);
  else
   VAR_11 = (FUNC_2(VAR_3)
     & VAR_2);
  if (VAR_11 >= VAR_9)
   return 0;
  FUNC_1(1);
 }
 FUNC_0("wait for fifo failed status : 0x%08X 0x%08X\n",
   FUNC_2(VAR_3),
   FUNC_2(VAR_4));

 return -VAR_1;
}
