
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int max; } ;
struct nv04_fifo_priv {TYPE_7__ base; TYPE_5__* ramfc; TYPE_3__* ramro; TYPE_2__* ramht; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_11__ {int size; } ;
struct nouveau_fb {TYPE_4__ ram; } ;
struct TYPE_13__ {int chipset; } ;
struct TYPE_12__ {int addr; } ;
struct TYPE_10__ {int addr; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_9__ {int bits; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nouveau_fb* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (TYPE_7__*) ;
 TYPE_6__* FUNC_2 (struct nv04_fifo_priv*) ;
 int FUNC_3 (struct nv04_fifo_priv*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_8)
{
 struct nv04_fifo_priv *VAR_9 = (void *)VAR_8;
 struct nouveau_fb *VAR_10 = FUNC_0(VAR_8);
 int VAR_11;

 VAR_11 = FUNC_1(&VAR_9->base);
 if (VAR_11)
  return VAR_11;

 FUNC_3(VAR_9, 0x002040, 0x000000ff);
 FUNC_3(VAR_9, 0x002044, 0x2101ffff);
 FUNC_3(VAR_9, 0x002058, 0x00000001);

 FUNC_3(VAR_9, VAR_5, (0x03 << 24) |
           ((VAR_9->ramht->bits - 9) << 16) |
            (VAR_9->ramht->base.addr >> 8));
 FUNC_3(VAR_9, VAR_6, VAR_9->ramro->addr >> 8);

 switch (FUNC_2(VAR_9)->chipset) {
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_3(VAR_9, 0x002230, 0x00000001);
 case 0x40:
 case 0x41:
 case 0x42:
 case 0x43:
 case 0x45:
 case 0x48:
  FUNC_3(VAR_9, 0x002220, 0x00030002);
  break;
 default:
  FUNC_3(VAR_9, 0x002230, 0x00000000);
  FUNC_3(VAR_9, 0x002220, ((VAR_10->ram.size - 512 * 1024 +
      VAR_9->ramfc->addr) >> 16) |
     0x00030000);
  break;
 }

 FUNC_3(VAR_9, VAR_1, VAR_9->base.max);

 FUNC_3(VAR_9, VAR_3, 0xffffffff);
 FUNC_3(VAR_9, VAR_4, 0xffffffff);

 FUNC_3(VAR_9, VAR_0, 1);
 FUNC_3(VAR_9, VAR_7, 1);
 FUNC_3(VAR_9, VAR_2, 1);
 return 0;
}
