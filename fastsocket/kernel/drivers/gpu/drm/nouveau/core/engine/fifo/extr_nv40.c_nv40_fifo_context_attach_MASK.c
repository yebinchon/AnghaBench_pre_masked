
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int max; int lock; } ;
struct nv04_fifo_priv {TYPE_2__ base; int ramfc; } ;
struct TYPE_5__ {int chid; } ;
struct nv04_fifo_chan {int ramfc; TYPE_1__ base; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int addr; } ;


 int VAR_0 ;



 TYPE_4__* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (struct nv04_fifo_priv*,int,int,int) ;
 int FUNC_4 (struct nv04_fifo_priv*,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct nv04_fifo_priv*,int,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_1,
    struct nouveau_object *VAR_2)
{
 struct nv04_fifo_priv *VAR_3 = (void *)VAR_1->engine;
 struct nv04_fifo_chan *VAR_4 = (void *)VAR_1;
 unsigned long VAR_5;
 u32 VAR_6, VAR_7;

 switch (FUNC_1(VAR_2->engine)) {
 case 128:
  return 0;
 case 130:
  VAR_6 = 0x32e0;
  VAR_7 = 0x38;
  break;
 case 129:
  VAR_6 = 0x330c;
  VAR_7 = 0x54;
  break;
 default:
  return -VAR_0;
 }

 FUNC_7(&VAR_3->base.lock, VAR_5);
 FUNC_0(VAR_2)->addr = FUNC_2(VAR_2)->addr >> 4;
 FUNC_3(VAR_3, 0x002500, 0x00000001, 0x00000000);

 if ((FUNC_4(VAR_3, 0x003204) & VAR_3->base.max) == VAR_4->base.chid)
  FUNC_6(VAR_3, VAR_6, FUNC_0(VAR_2)->addr);
 FUNC_5(VAR_3->ramfc, VAR_4->ramfc + VAR_7, FUNC_0(VAR_2)->addr);

 FUNC_3(VAR_3, 0x002500, 0x00000001, 0x00000001);
 FUNC_8(&VAR_3->base.lock, VAR_5);
 return 0;
}
