
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_6__ {int flags; int * pfp_fw; int * me_fw; int fb_heap; int gart_heap; scalar_t__ mmio; scalar_t__ cp_running; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int*,int ,char*,int) ;

void FUNC_14(struct drm_device * VAR_8)
{
 drm_radeon_private_t *VAR_9 = VAR_8->dev_private;
 int VAR_10, VAR_11;

 if (VAR_9) {
  if (VAR_9->cp_running) {

   if ((VAR_9->flags & VAR_2) >= VAR_0) {
    while ((VAR_11 = FUNC_3(VAR_9)) != 0) {
     FUNC_0("radeon_do_cp_idle %d\n", VAR_11);

     FUNC_12();



    }
   } else {
    while ((VAR_11 = FUNC_7(VAR_9)) != 0) {
     FUNC_0("radeon_do_cp_idle %d\n", VAR_11);

     FUNC_12();



    }
   }
   if ((VAR_9->flags & VAR_2) >= VAR_0) {
    FUNC_4(VAR_9);
    FUNC_5(VAR_8);
   } else {
    FUNC_8(VAR_9);
    FUNC_9(VAR_8);
   }
  }

  if ((VAR_9->flags & VAR_2) < VAR_0) {

   if (VAR_9->mmio)
    FUNC_1(VAR_3, 0);

   if (VAR_9->mmio) {
    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
     FUNC_1(VAR_5 + 16 * VAR_10, 0);
     FUNC_1(VAR_6 +
           16 * VAR_10, 0);
     FUNC_1(VAR_7 +
           16 * VAR_10, 0);
    }
   }
  }


  FUNC_10(&(VAR_9->gart_heap));
  FUNC_10(&(VAR_9->fb_heap));


  if ((VAR_9->flags & VAR_2) >= VAR_0)
   FUNC_2(VAR_8);
  else
   FUNC_6(VAR_8);
  FUNC_11(VAR_9->me_fw);
  VAR_9->me_fw = ((void*)0);
  FUNC_11(VAR_9->pfp_fw);
  VAR_9->pfp_fw = ((void*)0);
 }
}
