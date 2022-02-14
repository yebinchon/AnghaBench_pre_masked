
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct nouveau_crtc {TYPE_1__ base; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_mast*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_mast*,int) ;
 int FUNC_4 (struct nouveau_crtc*) ;
 int FUNC_5 (struct nouveau_crtc*) ;
 struct nv50_mast* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct nouveau_crtc *VAR_0, bool VAR_1, bool VAR_2)
{
 struct nv50_mast *VAR_3 = FUNC_6(VAR_0->base.dev);

 if (VAR_1)
  FUNC_5(VAR_0);
 else
  FUNC_4(VAR_0);

 if (VAR_2) {
  u32 *VAR_4 = FUNC_3(VAR_3, 2);
  if (VAR_4) {
   FUNC_2(VAR_4, 0x0080, 1);
   FUNC_0(VAR_4, 0x00000000);
   FUNC_1(VAR_4, VAR_3);
  }
 }
}
