
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_disp_priv {int dummy; } ;
struct nv50_disp_base {int base; } ;
struct nouveau_object {scalar_t__ engine; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nv50_disp_priv*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_0, bool VAR_1)
{
 struct nv50_disp_priv *VAR_2 = (void *)VAR_0->engine;
 struct nv50_disp_base *VAR_3 = (void *)VAR_0;


 FUNC_1(VAR_2, 0x6100b0, 0x00000000);

 return FUNC_0(&VAR_3->base, VAR_1);
}
