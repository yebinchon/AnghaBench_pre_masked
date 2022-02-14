
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nv50_fifo_priv {int dummy; } ;
struct TYPE_3__ {int chid; } ;
struct nv50_fifo_chan {TYPE_1__ base; } ;
struct nv50_fifo_base {int eng; } ;
struct nouveau_object {scalar_t__ engine; scalar_t__ parent; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;





 struct nouveau_bar* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (struct nv50_fifo_chan*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nv50_fifo_priv*,char*,int ,int ) ;
 TYPE_2__* FUNC_4 (struct nv50_fifo_base*) ;
 int FUNC_5 (struct nv50_fifo_priv*,int,int,int) ;
 int FUNC_6 (struct nv50_fifo_priv*,int,int,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct nv50_fifo_priv*,int,int) ;
 int FUNC_9 (struct nouveau_bar*) ;

__attribute__((used)) static int
FUNC_10(struct nouveau_object *VAR_2, bool VAR_3,
    struct nouveau_object *VAR_4)
{
 struct nouveau_bar *VAR_5 = FUNC_0(VAR_2);
 struct nv50_fifo_priv *VAR_6 = (void *)VAR_2->engine;
 struct nv50_fifo_base *VAR_7 = (void *)VAR_2->parent;
 struct nv50_fifo_chan *VAR_8 = (void *)VAR_2;
 u32 VAR_9, VAR_10, VAR_11;
 bool VAR_12;

 switch (FUNC_2(VAR_4->engine)) {
 case 128 : return 0;
 case 130 : VAR_11 = 0; VAR_9 = 0x0020; break;
 case 129 : VAR_11 = 1; VAR_9 = 0x0060; break;
 case 131: VAR_11 = 4; VAR_9 = 0x00a0; break;
 case 132: VAR_11 = 2; VAR_9 = 0x00c0; break;
 default:
  return -VAR_1;
 }

 VAR_10 = FUNC_5(VAR_6, 0x002520, 0x0000003f, 1 << VAR_11);
 FUNC_8(VAR_6, 0x0032fc, FUNC_4(VAR_7)->addr >> 12);
 VAR_12 = FUNC_6(VAR_6, 0x0032fc, 0xffffffff, 0xffffffff);
 FUNC_8(VAR_6, 0x002520, VAR_10);
 if (!VAR_12) {
  FUNC_3(VAR_6, "channel %d [%s] unload timeout\n",
    VAR_8->base.chid, FUNC_1(VAR_8));
  if (VAR_3)
   return -VAR_0;
 }

 FUNC_7(VAR_7->eng, VAR_9 + 0x00, 0x00000000);
 FUNC_7(VAR_7->eng, VAR_9 + 0x04, 0x00000000);
 FUNC_7(VAR_7->eng, VAR_9 + 0x08, 0x00000000);
 FUNC_7(VAR_7->eng, VAR_9 + 0x0c, 0x00000000);
 FUNC_7(VAR_7->eng, VAR_9 + 0x10, 0x00000000);
 FUNC_7(VAR_7->eng, VAR_9 + 0x14, 0x00000000);
 VAR_5->flush(VAR_5);
 return 0;
}
