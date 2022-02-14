
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int off_pitch; } ;
struct TYPE_4__ {scalar_t__ pan_display; } ;
struct atyfb_par {int irq; int int_lock; TYPE_1__ crtc; TYPE_2__ vblank; int irq_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct atyfb_par*) ;
 int FUNC_1 (int ,int,struct atyfb_par*) ;
 int FUNC_2 (int ,struct atyfb_par*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct atyfb_par *VAR_4)
{
 u32 VAR_5;

 if (FUNC_5(0, &VAR_4->irq_flags)) {
  if (VAR_4->vblank.pan_display) {
   VAR_4->vblank.pan_display = 0;
   FUNC_1(VAR_2, VAR_4->crtc.off_pitch, VAR_4);
  }
  FUNC_3(&VAR_4->int_lock);
  VAR_5 = FUNC_0(VAR_0, VAR_4) & VAR_1;

  FUNC_1(VAR_0, VAR_5 & ~VAR_3, VAR_4);
  FUNC_4(&VAR_4->int_lock);
  FUNC_2(VAR_4->irq, VAR_4);
 }

 return 0;
}
