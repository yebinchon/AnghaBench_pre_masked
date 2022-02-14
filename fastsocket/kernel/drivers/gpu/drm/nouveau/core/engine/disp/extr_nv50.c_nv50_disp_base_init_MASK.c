
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int nr; } ;
struct TYPE_6__ {int nr; } ;
struct TYPE_5__ {int nr; } ;
struct nv50_disp_priv {TYPE_3__ sor; TYPE_2__ dac; TYPE_1__ head; } ;
struct nv50_disp_base {int ramht; int base; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_8__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_disp_priv*,char*) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (struct nv50_disp_priv*,int,int,int) ;
 int FUNC_4 (struct nv50_disp_priv*,int) ;
 int FUNC_5 (struct nv50_disp_priv*,int,int,int) ;
 int FUNC_6 (struct nv50_disp_priv*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_object *VAR_1)
{
 struct nv50_disp_priv *VAR_2 = (void *)VAR_1->engine;
 struct nv50_disp_base *VAR_3 = (void *)VAR_1;
 int VAR_4, VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_0(&VAR_3->base);
 if (VAR_4)
  return VAR_4;





 VAR_6 = FUNC_4(VAR_2, 0x614004);
 FUNC_6(VAR_2, 0x610184, VAR_6);


 for (VAR_5 = 0; VAR_5 < VAR_2->head.nr; VAR_5++) {
  VAR_6 = FUNC_4(VAR_2, 0x616100 + (VAR_5 * 0x800));
  FUNC_6(VAR_2, 0x610190 + (VAR_5 * 0x10), VAR_6);
  VAR_6 = FUNC_4(VAR_2, 0x616104 + (VAR_5 * 0x800));
  FUNC_6(VAR_2, 0x610194 + (VAR_5 * 0x10), VAR_6);
  VAR_6 = FUNC_4(VAR_2, 0x616108 + (VAR_5 * 0x800));
  FUNC_6(VAR_2, 0x610198 + (VAR_5 * 0x10), VAR_6);
  VAR_6 = FUNC_4(VAR_2, 0x61610c + (VAR_5 * 0x800));
  FUNC_6(VAR_2, 0x61019c + (VAR_5 * 0x10), VAR_6);
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->dac.nr; VAR_5++) {
  VAR_6 = FUNC_4(VAR_2, 0x61a000 + (VAR_5 * 0x800));
  FUNC_6(VAR_2, 0x6101d0 + (VAR_5 * 0x04), VAR_6);
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->sor.nr; VAR_5++) {
  VAR_6 = FUNC_4(VAR_2, 0x61c000 + (VAR_5 * 0x800));
  FUNC_6(VAR_2, 0x6101e0 + (VAR_5 * 0x04), VAR_6);
 }


 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  VAR_6 = FUNC_4(VAR_2, 0x61e000 + (VAR_5 * 0x800));
  FUNC_6(VAR_2, 0x6101f0 + (VAR_5 * 0x04), VAR_6);
 }


 if (FUNC_4(VAR_2, 0x610024) & 0x00000100) {
  FUNC_6(VAR_2, 0x610024, 0x00000100);
  FUNC_3(VAR_2, 0x6194e8, 0x00000001, 0x00000000);
  if (!FUNC_5(VAR_2, 0x6194e8, 0x00000002, 0x00000000)) {
   FUNC_1(VAR_2, "timeout acquiring display\n");
   return -VAR_0;
  }
 }


 FUNC_6(VAR_2, 0x610010, (FUNC_2(VAR_3->ramht)->addr >> 8) | 9);


 FUNC_6(VAR_2, 0x61002c, 0x00000370);
 FUNC_6(VAR_2, 0x610028, 0x00000000);
 return 0;
}
