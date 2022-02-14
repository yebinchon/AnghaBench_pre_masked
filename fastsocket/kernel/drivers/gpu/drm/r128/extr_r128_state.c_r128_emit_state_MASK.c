
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int tex_cntl_c; } ;
struct TYPE_13__ {unsigned int dirty; TYPE_1__ context_state; } ;
typedef TYPE_2__ drm_r128_sarea_t ;
struct TYPE_14__ {TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_r128_private_t ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(drm_r128_private_t *VAR_9)
{
 drm_r128_sarea_t *VAR_10 = VAR_9->sarea_priv;
 unsigned int VAR_11 = VAR_10->dirty;

 FUNC_0("dirty=0x%08x\n", VAR_11);

 if (VAR_11 & VAR_3) {
  FUNC_2(VAR_9);
  VAR_10->dirty &= ~VAR_3;
 }

 if (VAR_11 & VAR_2) {
  FUNC_1(VAR_9);
  VAR_10->dirty &= ~VAR_2;
 }

 if (VAR_11 & VAR_5) {
  FUNC_4(VAR_9);
  VAR_10->dirty &= ~VAR_5;
 }

 if (VAR_11 & VAR_4) {
  FUNC_3(VAR_9);
  VAR_10->dirty &= ~VAR_4;
 }

 if (VAR_11 & VAR_8) {
  FUNC_7(VAR_9);
  VAR_10->dirty &= ~VAR_8;
 }

 if (VAR_11 & VAR_6) {
  FUNC_5(VAR_9);
  VAR_10->dirty &= ~VAR_6;
 }

 if (VAR_11 & VAR_7) {
  FUNC_6(VAR_9);
  VAR_10->dirty &= ~VAR_7;
 }


 VAR_10->context_state.tex_cntl_c &= ~VAR_1;

 VAR_10->dirty &= ~VAR_0;
}
