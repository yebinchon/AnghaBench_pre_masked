
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct nv50_pm_state {TYPE_1__ eclk_hwsq; TYPE_1__ mclk_hwsq; int mscript; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int version; int length; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,char,struct bit_entry*) ;
 int FUNC_2 (struct nv50_pm_state*) ;
 int FUNC_3 (struct drm_device*,int ) ;
 struct nouveau_device* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct nouveau_device*,int,int,int) ;
 int FUNC_6 (struct nouveau_device*,int,int,int) ;
 int FUNC_7 (struct drm_device*,TYPE_1__*) ;

int
FUNC_8(struct drm_device *VAR_1, void *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_4(VAR_1);
 struct nv50_pm_state *VAR_4 = VAR_2;
 struct bit_entry VAR_5;
 int VAR_6 = -VAR_0;


 FUNC_5(VAR_3, 0x002504, 0x00000001, 0x00000001);
 if (!FUNC_6(VAR_3, 0x002504, 0x00000010, 0x00000010))
  goto resume;
 if (!FUNC_6(VAR_3, 0x00251c, 0x0000003f, 0x0000003f))
  goto resume;





 if (VAR_4->mclk_hwsq.len) {

  if (!FUNC_1(VAR_1, 'M', &VAR_5) && VAR_5.version == 1) {
   if (VAR_5.length >= 6)
    FUNC_0((VAR_1), (FUNC_0(VAR_5.data[5])), ((void*)0), 0);
   if (VAR_5.length >= 8)
    FUNC_0((VAR_1), (FUNC_0(VAR_5.data[7])), ((void*)0), 0);
   if (VAR_5.length >= 10)
    FUNC_0((VAR_1), (FUNC_0(VAR_5.data[9])), ((void*)0), 0);
   FUNC_0((VAR_1), (VAR_4->mscript), ((void*)0), 0);
  }

  VAR_6 = FUNC_7(VAR_1, &VAR_4->mclk_hwsq);
  if (VAR_6)
   goto resume;
 }


 VAR_6 = FUNC_7(VAR_1, &VAR_4->eclk_hwsq);

resume:
 FUNC_5(VAR_3, 0x002504, 0x00000001, 0x00000000);
 FUNC_2(VAR_4);
 return VAR_6;
}
