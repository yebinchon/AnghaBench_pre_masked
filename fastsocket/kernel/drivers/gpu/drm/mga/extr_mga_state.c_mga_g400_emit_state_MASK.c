
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int dirty; int warp_pipe; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_9__ {int warp_pipe; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(drm_mga_private_t *VAR_4)
{
 drm_mga_sarea_t *VAR_5 = VAR_4->sarea_priv;
 unsigned int VAR_6 = VAR_5->dirty;
 int VAR_7 = VAR_5->warp_pipe & VAR_0;

 if (VAR_5->warp_pipe != VAR_4->warp_pipe) {
  FUNC_1(VAR_4);
  VAR_4->warp_pipe = VAR_5->warp_pipe;
 }

 if (VAR_6 & VAR_1) {
  FUNC_0(VAR_4);
  VAR_5->dirty &= ~VAR_1;
 }

 if (VAR_6 & VAR_2) {
  FUNC_2(VAR_4);
  VAR_5->dirty &= ~VAR_2;
 }

 if ((VAR_6 & VAR_3) && VAR_7) {
  FUNC_3(VAR_4);
  VAR_5->dirty &= ~VAR_3;
 }
}
