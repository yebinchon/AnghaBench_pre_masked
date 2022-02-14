
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int max; int lock; } ;
struct nv04_fifo_priv {TYPE_2__ base; int ramfc; } ;
struct TYPE_3__ {int chid; } ;
struct nv04_fifo_chan {int ramfc; TYPE_1__ base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int VAR_0 ;



 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nv04_fifo_priv*,int,int,int) ;
 int FUNC_2 (struct nv04_fifo_priv*,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct nv04_fifo_priv*,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_object *VAR_1, bool VAR_2,
    struct nouveau_object *VAR_3)
{
 struct nv04_fifo_priv *VAR_4 = (void *)VAR_1->engine;
 struct nv04_fifo_chan *VAR_5 = (void *)VAR_1;
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;

 switch (FUNC_0(VAR_3->engine)) {
 case 128:
  return 0;
 case 130:
  VAR_7 = 0x32e0;
  VAR_8 = 0x38;
  break;
 case 129:
  VAR_7 = 0x330c;
  VAR_8 = 0x54;
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(&VAR_4->base.lock, VAR_6);
 FUNC_1(VAR_4, 0x002500, 0x00000001, 0x00000000);

 if ((FUNC_2(VAR_4, 0x003204) & VAR_4->base.max) == VAR_5->base.chid)
  FUNC_4(VAR_4, VAR_7, 0x00000000);
 FUNC_3(VAR_4->ramfc, VAR_5->ramfc + VAR_8, 0x00000000);

 FUNC_1(VAR_4, 0x002500, 0x00000001, 0x00000001);
 FUNC_6(&VAR_4->base.lock, VAR_6);
 return 0;
}
