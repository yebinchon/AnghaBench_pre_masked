
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_fb_priv {int base; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nv04_fb_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_1)
{
 struct nv04_fb_priv *VAR_2 = (void *)VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->base);
 if (VAR_3)
  return VAR_3;





 FUNC_1(VAR_2, VAR_0, 0x1114);
 return 0;
}
