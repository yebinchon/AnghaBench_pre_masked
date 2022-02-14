
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv04_crtc_reg {int* CRTC; scalar_t__ tv_setup; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {struct nv04_crtc_reg* crtc_reg; } ;
struct TYPE_4__ {TYPE_1__ mode_reg; } ;


 int FUNC_0 (struct drm_device*,int,int ,scalar_t__) ;
 int FUNC_1 (struct drm_device*,int,size_t,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_3, int VAR_4, bool VAR_5)
{
 struct nv04_crtc_reg *VAR_6 = &FUNC_2(VAR_3)->mode_reg.crtc_reg[VAR_4];

 VAR_6->tv_setup = 0;

 if (VAR_5)
  VAR_6->CRTC[VAR_0] |= 0x10;
 else
  VAR_6->CRTC[VAR_0] &= ~0x10;

 FUNC_1(VAR_3, VAR_4, VAR_1,
         VAR_6->CRTC[VAR_1]);
 FUNC_1(VAR_3, VAR_4, VAR_0,
         VAR_6->CRTC[VAR_0]);
 FUNC_0(VAR_3, VAR_4, VAR_2,
        VAR_6->tv_setup);
}
