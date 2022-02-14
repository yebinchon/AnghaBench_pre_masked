
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ intr_type; } ;
struct vxgedev {int no_of_vpath; int vp_reset_timer; int devh; TYPE_1__ config; int vp_reset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vxgedev*,int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3)
{
 struct vxgedev *VAR_4 = (struct vxgedev *)VAR_3;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->no_of_vpath; VAR_5++) {
  if (FUNC_1(VAR_5, &VAR_4->vp_reset)) {
   FUNC_4(VAR_4, VAR_5);
   VAR_6++;
  }
 }
 if (VAR_6 && (VAR_4->config.intr_type != VAR_1)) {
  FUNC_3(VAR_4->devh);
  FUNC_2(VAR_4->devh);
 }

 FUNC_0(&VAR_4->vp_reset_timer, VAR_2 + VAR_0 / 2);
}
