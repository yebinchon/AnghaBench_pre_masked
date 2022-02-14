
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv40_graph_priv {int dummy; } ;
struct nouveau_fifo {int (* start ) (struct nouveau_fifo*,unsigned long*) ;int (* pause ) (struct nouveau_fifo*,unsigned long*) ;} ;
struct nouveau_fb_tile {int zcomp; int addr; int limit; int pitch; } ;
struct nouveau_engine {int dummy; } ;
struct TYPE_4__ {struct nouveau_fb_tile* region; } ;
struct TYPE_6__ {TYPE_1__ tile; } ;
struct TYPE_5__ {int chipset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 TYPE_3__* FUNC_15 (struct nouveau_engine*) ;
 struct nouveau_fifo* FUNC_16 (struct nouveau_engine*) ;
 int FUNC_17 (struct nv40_graph_priv*) ;
 TYPE_2__* FUNC_18 (struct nv40_graph_priv*) ;
 int FUNC_19 (struct nv40_graph_priv*,int ,int ) ;
 int FUNC_20 (struct nouveau_fifo*,unsigned long*) ;
 int FUNC_21 (struct nouveau_fifo*,unsigned long*) ;

__attribute__((used)) static void
FUNC_22(struct nouveau_engine *VAR_0, int VAR_1)
{
 struct nouveau_fb_tile *VAR_2 = &FUNC_15(VAR_0)->tile.region[VAR_1];
 struct nouveau_fifo *VAR_3 = FUNC_16(VAR_0);
 struct nv40_graph_priv *VAR_4 = (void *)VAR_0;
 unsigned long VAR_5;

 VAR_3->pause(VAR_3, &VAR_5);
 FUNC_17(VAR_4);

 switch (FUNC_18(VAR_4)->chipset) {
 case 0x40:
 case 0x41:
 case 0x42:
 case 0x43:
 case 0x45:
 case 0x4e:
  FUNC_19(VAR_4, FUNC_2(VAR_1), VAR_2->pitch);
  FUNC_19(VAR_4, FUNC_1(VAR_1), VAR_2->limit);
  FUNC_19(VAR_4, FUNC_0(VAR_1), VAR_2->addr);
  FUNC_19(VAR_4, FUNC_6(VAR_1), VAR_2->pitch);
  FUNC_19(VAR_4, FUNC_5(VAR_1), VAR_2->limit);
  FUNC_19(VAR_4, FUNC_4(VAR_1), VAR_2->addr);
  switch (FUNC_18(VAR_4)->chipset) {
  case 0x40:
  case 0x45:
   FUNC_19(VAR_4, FUNC_3(VAR_1), VAR_2->zcomp);
   FUNC_19(VAR_4, FUNC_7(VAR_1), VAR_2->zcomp);
   break;
  case 0x41:
  case 0x42:
  case 0x43:
   FUNC_19(VAR_4, FUNC_8(VAR_1), VAR_2->zcomp);
   FUNC_19(VAR_4, FUNC_9(VAR_1), VAR_2->zcomp);
   break;
  default:
   break;
  }
  break;
 case 0x44:
 case 0x4a:
  FUNC_19(VAR_4, FUNC_2(VAR_1), VAR_2->pitch);
  FUNC_19(VAR_4, FUNC_1(VAR_1), VAR_2->limit);
  FUNC_19(VAR_4, FUNC_0(VAR_1), VAR_2->addr);
  break;
 case 0x46:
 case 0x4c:
 case 0x47:
 case 0x49:
 case 0x4b:
 case 0x63:
 case 0x67:
 case 0x68:
  FUNC_19(VAR_4, FUNC_12(VAR_1), VAR_2->pitch);
  FUNC_19(VAR_4, FUNC_11(VAR_1), VAR_2->limit);
  FUNC_19(VAR_4, FUNC_10(VAR_1), VAR_2->addr);
  FUNC_19(VAR_4, FUNC_6(VAR_1), VAR_2->pitch);
  FUNC_19(VAR_4, FUNC_5(VAR_1), VAR_2->limit);
  FUNC_19(VAR_4, FUNC_4(VAR_1), VAR_2->addr);
  switch (FUNC_18(VAR_4)->chipset) {
  case 0x47:
  case 0x49:
  case 0x4b:
   FUNC_19(VAR_4, FUNC_13(VAR_1), VAR_2->zcomp);
   FUNC_19(VAR_4, FUNC_14(VAR_1), VAR_2->zcomp);
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }

 VAR_3->start(VAR_3, &VAR_5);
}
