
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct TYPE_4__ {int se_zbias_constant; int se_zbias_factor; } ;
struct TYPE_5__ {int dirty; int tex; int context; TYPE_1__ context2; } ;
typedef TYPE_2__ drm_radeon_state_t ;
typedef int drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,struct drm_file*,int *,int ,int) ;

__attribute__((used)) static int FUNC_5(drm_radeon_private_t * VAR_3,
         struct drm_file *VAR_4,
         drm_radeon_state_t * VAR_5)
{
 VAR_2;

 if (VAR_5->dirty & VAR_1) {
  FUNC_1(3);
  FUNC_3(FUNC_2(VAR_0, 1));
  FUNC_3(VAR_5->context2.se_zbias_factor);
  FUNC_3(VAR_5->context2.se_zbias_constant);
  FUNC_0();
 }

 return FUNC_4(VAR_3, VAR_4, &VAR_5->context,
     VAR_5->tex, VAR_5->dirty);
}
