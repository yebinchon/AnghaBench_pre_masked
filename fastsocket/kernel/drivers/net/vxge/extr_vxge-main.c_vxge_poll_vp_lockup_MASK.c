
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxgedev {int no_of_vpath; int vp_lockup_timer; TYPE_1__* vpaths; int vp_reset; } ;
struct TYPE_4__ {scalar_t__ prev_rx_frms; scalar_t__ rx_frms; } ;
struct vxge_ring {int last_status; TYPE_2__ stats; int handle; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_3__ {int fifo; struct vxge_ring ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vxgedev*,int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4)
{
 struct vxgedev *VAR_5 = (struct vxgedev *)VAR_4;
 int VAR_6;
 struct vxge_ring *VAR_7;
 enum vxge_hw_status VAR_8 = VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_5->no_of_vpath; VAR_6++) {
  VAR_7 = &VAR_5->vpaths[VAR_6].ring;

  if (VAR_7->stats.prev_rx_frms == VAR_7->stats.rx_frms) {
   VAR_8 = FUNC_2(VAR_7->handle);


   if ((VAR_1 == VAR_8) &&
    (VAR_1 == VAR_7->last_status)) {


    if (!FUNC_1(VAR_6, &VAR_5->vp_reset)) {


     FUNC_4(VAR_5, VAR_6);


     FUNC_3(&VAR_5->vpaths[VAR_6].
        fifo);
     continue;
    }
   }
  }
  VAR_7->stats.prev_rx_frms = VAR_7->stats.rx_frms;
  VAR_7->last_status = VAR_8;
 }


 FUNC_0(&VAR_5->vp_lockup_timer, VAR_3 + VAR_0 / 1000);
}
