
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct TYPE_8__ {TYPE_3__* nvbo; } ;
struct TYPE_5__ {int dev; } ;
struct nouveau_crtc {int index; TYPE_4__ cursor; TYPE_1__ base; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_7__ {TYPE_2__ bo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_mast*) ;
 int FUNC_2 (int *,int,int) ;
 int * FUNC_3 (struct nv50_mast*,int) ;
 struct nv50_mast* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct nv50_mast*) ;

__attribute__((used)) static void
FUNC_6(struct nouveau_crtc *VAR_3)
{
 struct nv50_mast *VAR_4 = FUNC_4(VAR_3->base.dev);
 u32 *VAR_5 = FUNC_3(VAR_4, 16);
 if (VAR_5) {
  if (FUNC_5(VAR_4) < VAR_0) {
   FUNC_2(VAR_5, 0x0880 + (VAR_3->index * 0x400), 2);
   FUNC_0(VAR_5, 0x85000000);
   FUNC_0(VAR_5, VAR_3->cursor.nvbo->bo.offset >> 8);
  } else
  if (FUNC_5(VAR_4) < VAR_1) {
   FUNC_2(VAR_5, 0x0880 + (VAR_3->index * 0x400), 2);
   FUNC_0(VAR_5, 0x85000000);
   FUNC_0(VAR_5, VAR_3->cursor.nvbo->bo.offset >> 8);
   FUNC_2(VAR_5, 0x089c + (VAR_3->index * 0x400), 1);
   FUNC_0(VAR_5, VAR_2);
  } else {
   FUNC_2(VAR_5, 0x0480 + (VAR_3->index * 0x300), 2);
   FUNC_0(VAR_5, 0x85000000);
   FUNC_0(VAR_5, VAR_3->cursor.nvbo->bo.offset >> 8);
   FUNC_2(VAR_5, 0x048c + (VAR_3->index * 0x300), 1);
   FUNC_0(VAR_5, VAR_2);
  }
  FUNC_1(VAR_5, VAR_4);
 }
}
