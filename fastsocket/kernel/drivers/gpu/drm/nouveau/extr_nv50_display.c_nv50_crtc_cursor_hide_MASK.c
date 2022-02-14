
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct nouveau_crtc {int index; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_mast*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_mast*,int) ;
 struct nv50_mast* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct nv50_mast*) ;

__attribute__((used)) static void
FUNC_6(struct nouveau_crtc *VAR_2)
{
 struct nv50_mast *VAR_3 = FUNC_4(VAR_2->base.dev);
 u32 *VAR_4 = FUNC_3(VAR_3, 16);
 if (VAR_4) {
  if (FUNC_5(VAR_3) < VAR_0) {
   FUNC_2(VAR_4, 0x0880 + (VAR_2->index * 0x400), 1);
   FUNC_0(VAR_4, 0x05000000);
  } else
  if (FUNC_5(VAR_3) < VAR_1) {
   FUNC_2(VAR_4, 0x0880 + (VAR_2->index * 0x400), 1);
   FUNC_0(VAR_4, 0x05000000);
   FUNC_2(VAR_4, 0x089c + (VAR_2->index * 0x400), 1);
   FUNC_0(VAR_4, 0x00000000);
  } else {
   FUNC_2(VAR_4, 0x0480 + (VAR_2->index * 0x300), 1);
   FUNC_0(VAR_4, 0x05000000);
   FUNC_2(VAR_4, 0x048c + (VAR_2->index * 0x300), 1);
   FUNC_0(VAR_4, 0x00000000);
  }
  FUNC_1(VAR_4, VAR_3);
 }
}
