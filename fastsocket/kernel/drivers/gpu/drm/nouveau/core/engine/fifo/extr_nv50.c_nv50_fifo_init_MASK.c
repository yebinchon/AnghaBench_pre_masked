
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_fifo_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv50_fifo_priv*) ;
 int FUNC_2 (struct nv50_fifo_priv*,int,int,int) ;
 int FUNC_3 (struct nv50_fifo_priv*,int,int) ;

int
FUNC_4(struct nouveau_object *VAR_0)
{
 struct nv50_fifo_priv *VAR_1 = (void *)VAR_0;
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(&VAR_1->base);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_1, 0x000200, 0x00000100, 0x00000000);
 FUNC_2(VAR_1, 0x000200, 0x00000100, 0x00000100);
 FUNC_3(VAR_1, 0x00250c, 0x6f3cfc34);
 FUNC_3(VAR_1, 0x002044, 0x01003fff);

 FUNC_3(VAR_1, 0x002100, 0xffffffff);
 FUNC_3(VAR_1, 0x002140, 0xbfffffff);

 for (VAR_3 = 0; VAR_3 < 128; VAR_3++)
  FUNC_3(VAR_1, 0x002600 + (VAR_3 * 4), 0x00000000);
 FUNC_1(VAR_1);

 FUNC_3(VAR_1, 0x003200, 0x00000001);
 FUNC_3(VAR_1, 0x003250, 0x00000001);
 FUNC_3(VAR_1, 0x002500, 0x00000001);
 return 0;
}
