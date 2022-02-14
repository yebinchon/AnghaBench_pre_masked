
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int put; int get; int init; } ;
struct TYPE_6__ {TYPE_1__ ram; int memtype_valid; } ;
struct nv50_fb_priv {TYPE_3__ base; int r100c08; scalar_t__ r100c08_page; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_device {int pdev; } ;
struct TYPE_5__ {int intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv50_fb_priv**) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nouveau_device* FUNC_3 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_4 (struct nv50_fb_priv*) ;
 TYPE_2__* FUNC_5 (struct nv50_fb_priv*) ;
 int FUNC_6 (struct nv50_fb_priv*,char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_9, struct nouveau_object *VAR_10,
      struct nouveau_oclass *VAR_11, void *VAR_12, u32 VAR_13,
      struct nouveau_object **VAR_14)
{
 struct nouveau_device *VAR_15 = FUNC_3(VAR_9);
 struct nv50_fb_priv *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_1(VAR_9, VAR_10, VAR_11, &VAR_16);
 *VAR_14 = FUNC_4(VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_16->r100c08_page = FUNC_0(VAR_0 | VAR_3);
 if (VAR_16->r100c08_page) {
  VAR_16->r100c08 = FUNC_8(VAR_15->pdev, VAR_16->r100c08_page,
          0, VAR_1,
          VAR_2);
  if (FUNC_7(VAR_15->pdev, VAR_16->r100c08))
   FUNC_6(VAR_16, "failed 0x100c08 page map\n");
 } else {
  FUNC_6(VAR_16, "failed 0x100c08 page alloc\n");
 }

 VAR_16->base.memtype_valid = VAR_5;
 VAR_16->base.ram.init = VAR_7;
 VAR_16->base.ram.get = VAR_8;
 VAR_16->base.ram.put = VAR_6;
 FUNC_5(VAR_16)->intr = VAR_4;
 return FUNC_2(&VAR_16->base);
}
