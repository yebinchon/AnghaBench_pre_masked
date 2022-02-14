
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_bar_priv {int lock; } ;
struct nouveau_bar {int dummy; } ;


 int FUNC_0 (struct nv50_bar_priv*,int,int,int) ;
 int FUNC_1 (struct nv50_bar_priv*,char*) ;
 int FUNC_2 (struct nouveau_bar*,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(struct nouveau_bar *VAR_0)
{
 struct nv50_bar_priv *VAR_1 = (void *)VAR_0;
 unsigned long VAR_2;
 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_2(VAR_0, 0x070000, 0x00000001);
 if (!FUNC_0(VAR_1, 0x070000, 0x00000002, 0x00000000))
  FUNC_1(VAR_1, "flush timeout\n");
 FUNC_4(&VAR_1->lock, VAR_2);
}
