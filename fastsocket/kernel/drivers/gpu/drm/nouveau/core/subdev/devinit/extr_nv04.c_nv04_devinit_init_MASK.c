
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int post; } ;
struct nv04_devinit_priv {TYPE_1__ base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nv04_devinit_priv*,char*) ;
 int FUNC_2 (struct nv04_devinit_priv*,int ,int) ;

int
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nv04_devinit_priv *VAR_1 = (void *)VAR_0;

 if (!VAR_1->base.post) {
  u32 VAR_2 = FUNC_2(VAR_1, 0, 0x06);
  VAR_2 |= (FUNC_2(VAR_1, 0, 0x07) & 0x01) << 8;
  VAR_2 |= (FUNC_2(VAR_1, 0, 0x07) & 0x20) << 4;
  VAR_2 |= (FUNC_2(VAR_1, 0, 0x25) & 0x01) << 10;
  VAR_2 |= (FUNC_2(VAR_1, 0, 0x41) & 0x01) << 11;
  if (!VAR_2) {
   FUNC_1(VAR_1, "adaptor not initialised\n");
   VAR_1->base.post = 1;
  }
 }

 return FUNC_0(&VAR_1->base);
}
