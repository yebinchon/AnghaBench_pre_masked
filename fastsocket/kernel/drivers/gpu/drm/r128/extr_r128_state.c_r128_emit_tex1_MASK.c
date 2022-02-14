
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tex_border_color; int * tex_offset; int tex_combine_cntl; int tex_cntl; } ;
typedef TYPE_1__ drm_r128_texture_regs_t ;
struct TYPE_6__ {TYPE_1__* tex_state; } ;
typedef TYPE_2__ drm_r128_sarea_t ;
struct TYPE_7__ {TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_r128_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline__ void FUNC_5(drm_r128_private_t *VAR_4)
{
 drm_r128_sarea_t *VAR_5 = VAR_4->sarea_priv;
 drm_r128_texture_regs_t *VAR_6 = &VAR_5->tex_state[1];
 int VAR_7;
 VAR_3;
 FUNC_3("\n");

 FUNC_1(5 + VAR_0);

 FUNC_4(FUNC_2(VAR_2, 1 + VAR_0));
 FUNC_4(VAR_6->tex_cntl);
 FUNC_4(VAR_6->tex_combine_cntl);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_4(VAR_6->tex_offset[VAR_7]);

 FUNC_4(FUNC_2(VAR_1, 0));
 FUNC_4(VAR_6->tex_border_color);

 FUNC_0();
}
