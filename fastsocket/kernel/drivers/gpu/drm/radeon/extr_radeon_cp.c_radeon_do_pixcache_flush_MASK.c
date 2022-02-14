
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int boxes; } ;
struct TYPE_6__ {int flags; int usec_timeout; TYPE_1__ stats; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(drm_radeon_private_t * VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 VAR_7->stats.boxes |= VAR_2;

 if ((VAR_7->flags & VAR_3) <= VAR_0) {
  VAR_8 = FUNC_2(VAR_6);
  VAR_8 |= VAR_5;
  FUNC_3(VAR_6, VAR_8);

  for (VAR_9 = 0; VAR_9 < VAR_7->usec_timeout; VAR_9++) {
   if (!(FUNC_2(VAR_6)
         & VAR_4)) {
    return 0;
   }
   FUNC_1(1);
  }
 } else {

  return 0;
 }





 return -VAR_1;
}
