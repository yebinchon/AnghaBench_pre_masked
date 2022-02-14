
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_fb_priv {int base; scalar_t__ r100c08_page; int r100c08; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 struct nouveau_device* FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_object *VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_2(VAR_2);
 struct nv50_fb_priv *VAR_4 = (void *)VAR_2;

 if (VAR_4->r100c08_page) {
  FUNC_3(VAR_3->pdev, VAR_4->r100c08, VAR_0,
          VAR_1);
  FUNC_0(VAR_4->r100c08_page);
 }

 FUNC_1(&VAR_4->base);
}
