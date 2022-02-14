
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv04_fifo_priv {int ramht; } ;
struct TYPE_4__ {int chid; } ;
struct nv04_fifo_chan {TYPE_1__ base; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int mutex; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_3__* FUNC_4 (struct nouveau_object*) ;
 scalar_t__ FUNC_5 (struct nouveau_object*,int ) ;
 TYPE_2__* FUNC_6 (struct nv04_fifo_priv*) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_object *VAR_2,
   struct nouveau_object *VAR_3, u32 VAR_4)
{
 struct nv04_fifo_priv *VAR_5 = (void *)VAR_2->engine;
 struct nv04_fifo_chan *VAR_6 = (void *)VAR_2;
 u32 VAR_7, VAR_8 = VAR_6->base.chid;
 int VAR_9;

 if (FUNC_5(VAR_3, VAR_1))
  VAR_7 = FUNC_4(VAR_3)->addr >> 4;
 else
  VAR_7 = 0x00000004;

 switch (FUNC_3(VAR_3->engine)) {
 case 131:
 case 128:
  VAR_7 |= 0x00000000;
  break;
 case 130:
  VAR_7 |= 0x00100000;
  break;
 case 129:
  VAR_7 |= 0x00200000;
  break;
 default:
  return -VAR_0;
 }

 VAR_7 |= VAR_8 << 23;

 FUNC_0(&FUNC_6(VAR_5)->mutex);
 VAR_9 = FUNC_2(VAR_5->ramht, VAR_8, VAR_4, VAR_7);
 FUNC_1(&FUNC_6(VAR_5)->mutex);
 return VAR_9;
}
