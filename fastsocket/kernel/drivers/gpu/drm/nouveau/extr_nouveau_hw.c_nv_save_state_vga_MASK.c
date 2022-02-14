
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_mode_state {struct nv04_crtc_reg* crtc_reg; } ;
struct nv04_crtc_reg {int * Sequencer; int * Graphics; int * Attribute; int MiscOutReg; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int,int) ;
 int FUNC_2 (struct drm_device*,int,int) ;
 int FUNC_3 (struct drm_device*,int,int) ;
 int FUNC_4 (struct drm_device*,int,int) ;
 int VAR_0 ;
 int FUNC_5 (struct drm_device*,int,struct nv04_crtc_reg*,int) ;

__attribute__((used)) static void
FUNC_6(struct drm_device *VAR_1, int VAR_2,
    struct nv04_mode_state *VAR_3)
{
 struct nv04_crtc_reg *VAR_4 = &VAR_3->crtc_reg[VAR_2];
 int VAR_5;

 VAR_4->MiscOutReg = FUNC_0(VAR_1, VAR_2, VAR_0);

 for (VAR_5 = 0; VAR_5 < 25; VAR_5++)
  FUNC_5(VAR_1, VAR_2, VAR_4, VAR_5);

 FUNC_4(VAR_1, VAR_2, 1);
 for (VAR_5 = 0; VAR_5 < 21; VAR_5++)
  VAR_4->Attribute[VAR_5] = FUNC_1(VAR_1, VAR_2, VAR_5);
 FUNC_4(VAR_1, VAR_2, 0);

 for (VAR_5 = 0; VAR_5 < 9; VAR_5++)
  VAR_4->Graphics[VAR_5] = FUNC_2(VAR_1, VAR_2, VAR_5);

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++)
  VAR_4->Sequencer[VAR_5] = FUNC_3(VAR_1, VAR_2, VAR_5);
}
