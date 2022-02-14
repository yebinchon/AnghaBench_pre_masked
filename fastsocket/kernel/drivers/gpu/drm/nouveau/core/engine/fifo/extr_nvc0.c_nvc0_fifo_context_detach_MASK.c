
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvc0_fifo_priv {int dummy; } ;
struct TYPE_2__ {int chid; } ;
struct nvc0_fifo_chan {TYPE_1__ base; } ;
struct nvc0_fifo_base {int dummy; } ;
struct nouveau_object {scalar_t__ engine; scalar_t__ parent; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;


 int VAR_0 ;
 int VAR_1 ;







 struct nouveau_bar* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (struct nvc0_fifo_chan*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nvc0_fifo_priv*,char*,int ,int ) ;
 int FUNC_4 (struct nvc0_fifo_priv*,int,int,int ) ;
 int FUNC_5 (struct nvc0_fifo_base*,int,int) ;
 int FUNC_6 (struct nvc0_fifo_priv*,int,int ) ;
 int FUNC_7 (struct nouveau_bar*) ;

__attribute__((used)) static int
FUNC_8(struct nouveau_object *VAR_2, bool VAR_3,
    struct nouveau_object *VAR_4)
{
 struct nouveau_bar *VAR_5 = FUNC_0(VAR_2);
 struct nvc0_fifo_priv *VAR_6 = (void *)VAR_2->engine;
 struct nvc0_fifo_base *VAR_7 = (void *)VAR_2->parent;
 struct nvc0_fifo_chan *VAR_8 = (void *)VAR_2;
 u32 VAR_9;

 switch (FUNC_2(VAR_4->engine)) {
 case 129 : return 0;
 case 131 : VAR_9 = 0x0210; break;
 case 133: VAR_9 = 0x0230; break;
 case 132: VAR_9 = 0x0240; break;
 case 134 : VAR_9 = 0x0270; break;
 case 128 : VAR_9 = 0x0250; break;
 case 130 : VAR_9 = 0x0260; break;
 default:
  return -VAR_1;
 }

 FUNC_6(VAR_6, 0x002634, VAR_8->base.chid);
 if (!FUNC_4(VAR_6, 0x002634, 0xffffffff, VAR_8->base.chid)) {
  FUNC_3(VAR_6, "channel %d [%s] kick timeout\n",
    VAR_8->base.chid, FUNC_1(VAR_8));
  if (VAR_3)
   return -VAR_0;
 }

 FUNC_5(VAR_7, VAR_9 + 0x00, 0x00000000);
 FUNC_5(VAR_7, VAR_9 + 0x04, 0x00000000);
 VAR_5->flush(VAR_5);
 return 0;
}
