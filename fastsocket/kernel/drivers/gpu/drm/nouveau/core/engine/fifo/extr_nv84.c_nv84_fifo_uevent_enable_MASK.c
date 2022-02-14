
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv84_fifo_priv {int dummy; } ;
struct nouveau_event {struct nv84_fifo_priv* priv; } ;


 int FUNC_0 (struct nv84_fifo_priv*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_event *VAR_0, int VAR_1)
{
 struct nv84_fifo_priv *VAR_2 = VAR_0->priv;
 FUNC_0(VAR_2, 0x002140, 0x40000000, 0x40000000);
}
