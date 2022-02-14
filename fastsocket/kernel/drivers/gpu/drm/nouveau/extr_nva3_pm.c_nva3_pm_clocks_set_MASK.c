
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pll; scalar_t__ clk; } ;
struct nva3_pm_state {TYPE_1__ mclk; int vdec; int unka0; int sclk; int nclk; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (struct nva3_pm_state*) ;
 struct nouveau_device* FUNC_2 (struct drm_device*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct nouveau_device*,int,int,int) ;
 int FUNC_5 (struct nouveau_device*,int) ;
 int FUNC_6 (struct nouveau_device*,int,int,int) ;
 int FUNC_7 (struct nouveau_device*,int ,struct drm_device*) ;
 int FUNC_8 (struct nouveau_device*,int,int) ;
 int VAR_1 ;
 int FUNC_9 (struct drm_device*,int,int *) ;
 int FUNC_10 (struct drm_device*,struct nva3_pm_state*) ;
 int FUNC_11 (struct drm_device*,int,int,int *) ;

int
FUNC_12(struct drm_device *VAR_2, void *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_2(VAR_2);
 struct nouveau_drm *VAR_5 = FUNC_3(VAR_2);
 struct nva3_pm_state *VAR_6 = VAR_3;
 int VAR_7 = -VAR_0;


 FUNC_8(VAR_4, 0x400324, 0x00000000);
 FUNC_8(VAR_4, 0x400328, 0x0050001c);

 if (!FUNC_7(VAR_4, VAR_1, VAR_2)) {
  FUNC_0(VAR_5, "pm: ctxprog didn't go idle\n");
  goto cleanup;
 }

 FUNC_4(VAR_4, 0x002504, 0x00000001, 0x00000001);
 if (!FUNC_6(VAR_4, 0x002504, 0x00000010, 0x00000010)) {
  FUNC_0(VAR_5, "pm: fifo didn't go idle\n");
  goto cleanup;
 }

 FUNC_11(VAR_2, 0x00, 0x004200, &VAR_6->nclk);
 FUNC_11(VAR_2, 0x01, 0x004220, &VAR_6->sclk);
 FUNC_9(VAR_2, 0x20, &VAR_6->unka0);
 FUNC_9(VAR_2, 0x21, &VAR_6->vdec);

 if (VAR_6->mclk.clk || VAR_6->mclk.pll)
  FUNC_10(VAR_2, VAR_6);

 VAR_7 = 0;

cleanup:

 FUNC_4(VAR_4, 0x002504, 0x00000001, 0x00000000);

 FUNC_8(VAR_4, 0x400324, 0x00000000);
 FUNC_8(VAR_4, 0x400328, 0x0070009c);

 if (FUNC_5(VAR_4, 0x400308) == 0x0050001c)
  FUNC_4(VAR_4, 0x400824, 0x10000000, 0x10000000);
 FUNC_1(VAR_6);
 return VAR_7;
}
