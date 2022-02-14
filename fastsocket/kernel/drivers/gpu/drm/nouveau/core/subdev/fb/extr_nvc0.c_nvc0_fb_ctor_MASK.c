
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int put; int get; int init; } ;
struct TYPE_4__ {TYPE_1__ ram; int memtype_valid; } ;
struct nvc0_fb_priv {TYPE_2__ base; int r100c10; int r100c10_page; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nvc0_fb_priv**) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;
 struct nouveau_device* FUNC_3 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_4 (struct nvc0_fb_priv*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_object *VAR_10, struct nouveau_object *VAR_11,
      struct nouveau_oclass *VAR_12, void *VAR_13, u32 VAR_14,
      struct nouveau_object **VAR_15)
{
 struct nouveau_device *VAR_16 = FUNC_3(VAR_10);
 struct nvc0_fb_priv *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_1(VAR_10, VAR_11, VAR_12, &VAR_17);
 *VAR_15 = FUNC_4(VAR_17);
 if (VAR_18)
  return VAR_18;

 VAR_17->base.memtype_valid = VAR_7;
 VAR_17->base.ram.init = VAR_8;
 VAR_17->base.ram.get = VAR_9;
 VAR_17->base.ram.put = VAR_6;

 VAR_17->r100c10_page = FUNC_0(VAR_2 | VAR_5);
 if (!VAR_17->r100c10_page)
  return -VAR_1;

 VAR_17->r100c10 = FUNC_6(VAR_16->pdev, VAR_17->r100c10_page, 0,
         VAR_3, VAR_4);
 if (FUNC_5(VAR_16->pdev, VAR_17->r100c10))
  return -VAR_0;

 return FUNC_2(&VAR_17->base);
}
