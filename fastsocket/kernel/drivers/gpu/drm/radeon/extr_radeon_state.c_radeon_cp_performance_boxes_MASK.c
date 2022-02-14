
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_radeon_master_private {int dummy; } ;
struct TYPE_6__ {int last_frame_reads; scalar_t__ last_clear_reads; scalar_t__ clears; int boxes; int requested_bufs; scalar_t__ freelist_loops; } ;
struct TYPE_5__ {TYPE_4__ stats; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,struct drm_radeon_master_private*,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(drm_radeon_private_t *VAR_4, struct drm_radeon_master_private *VAR_5)
{



 if (VAR_4->stats.last_frame_reads > 1 ||
     VAR_4->stats.last_clear_reads > VAR_4->stats.clears) {
  VAR_4->stats.boxes |= VAR_3;
 }

 if (VAR_4->stats.freelist_loops) {
  VAR_4->stats.boxes |= VAR_3;
 }



 if (VAR_4->stats.boxes & VAR_1)
  FUNC_1(VAR_4, VAR_5, 4, 4, 8, 8, 255, 0, 255);



 if (VAR_4->stats.boxes & VAR_3)
  FUNC_1(VAR_4, VAR_5, 16, 4, 8, 8, 255, 0, 0);






 if (VAR_4->stats.boxes & VAR_2)
  FUNC_1(VAR_4, VAR_5, 40, 4, 8, 8, 255, 255, 0);



 if (!(VAR_4->stats.boxes & VAR_0))
  FUNC_1(VAR_4, VAR_5, 64, 4, 8, 8, 0, 255, 0);




 if (VAR_4->stats.requested_bufs) {
  if (VAR_4->stats.requested_bufs > 100)
   VAR_4->stats.requested_bufs = 100;

  FUNC_1(VAR_4, VAR_5, 4, 16,
     VAR_4->stats.requested_bufs, 4,
     196, 128, 128);
 }

 FUNC_0(&VAR_4->stats, 0, sizeof(VAR_4->stats));

}
