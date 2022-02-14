
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_object {int parent; } ;
struct TYPE_6__ {int limit; int* data; int size; } ;
struct TYPE_5__ {int limit; int* data; int size; } ;
struct nouveau_falcon {int version; int secret; int addr; int external; TYPE_3__ data; struct nouveau_falcon* core; TYPE_2__ code; int base; } ;
struct nouveau_device {int chipset; scalar_t__ card_type; TYPE_1__* pdev; } ;
struct firmware {int size; int data; } ;
typedef int name ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int,int,int ,struct nouveau_falcon**) ;
 int FUNC_3 (struct nouveau_falcon*,char*,...) ;
 struct nouveau_device* FUNC_4 (struct nouveau_object*) ;
 int FUNC_5 (struct nouveau_falcon*,char*,...) ;
 int FUNC_6 (struct nouveau_falcon*,int) ;
 int FUNC_7 (struct nouveau_falcon*,int,int,int) ;
 int FUNC_8 (struct nouveau_falcon*,int,int) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,char*,int *) ;
 int FUNC_11 (char*,int,char*,int,int) ;

int
FUNC_12(struct nouveau_object *VAR_4)
{
 struct nouveau_device *VAR_5 = FUNC_4(VAR_4);
 struct nouveau_falcon *VAR_6 = (void *)VAR_4;
 const struct firmware *VAR_7;
 char VAR_8[32] = "internal";
 int VAR_9, VAR_10;
 u32 VAR_11;


 VAR_9 = FUNC_1(&VAR_6->base);
 if (VAR_9)
  return VAR_9;

 if (VAR_5->chipset < 0xa3 ||
     VAR_5->chipset == 0xaa || VAR_5->chipset == 0xac) {
  VAR_6->version = 0;
  VAR_6->secret = (VAR_6->addr == 0x087000) ? 1 : 0;
 } else {
  VAR_11 = FUNC_6(VAR_6, 0x12c);
  VAR_6->version = (VAR_11 & 0x0000000f);
  VAR_6->secret = (VAR_11 & 0x00000030) >> 4;
 }

 VAR_11 = FUNC_6(VAR_6, 0x108);
 VAR_6->code.limit = (VAR_11 & 0x000001ff) << 8;
 VAR_6->data.limit = (VAR_11 & 0x0003fe00) >> 1;

 FUNC_3(VAR_6, "falcon version: %d\n", VAR_6->version);
 FUNC_3(VAR_6, "secret level: %d\n", VAR_6->secret);
 FUNC_3(VAR_6, "code limit: %d\n", VAR_6->code.limit);
 FUNC_3(VAR_6, "data limit: %d\n", VAR_6->data.limit);


 if (VAR_6->secret && VAR_6->version < 4) {
  if (!VAR_6->version)
   FUNC_7(VAR_6, 0x008, 0x00000010, 0x00000010);
  else
   FUNC_7(VAR_6, 0x180, 0x80000000, 0);
  FUNC_8(VAR_6, 0x004, 0x00000010);
 }


 FUNC_8(VAR_6, 0x014, 0xffffffff);




 if (!VAR_6->code.data) {
  FUNC_11(VAR_8, sizeof(VAR_8), "nouveau/nv%02x_fuc%03x",
    VAR_5->chipset, VAR_6->addr >> 12);

  VAR_9 = FUNC_10(&VAR_7, VAR_8, &VAR_5->pdev->dev);
  if (VAR_9 == 0) {
   VAR_6->code.data = FUNC_0(VAR_7->data, VAR_7->size, VAR_2);
   VAR_6->code.size = VAR_7->size;
   VAR_6->data.data = ((void*)0);
   VAR_6->data.size = 0;
   FUNC_9(VAR_7);
  }

  VAR_6->external = 1;
 }




 if (!VAR_6->code.data) {
  FUNC_11(VAR_8, sizeof(VAR_8), "nouveau/nv%02x_fuc%03xd",
    VAR_5->chipset, VAR_6->addr >> 12);

  VAR_9 = FUNC_10(&VAR_7, VAR_8, &VAR_5->pdev->dev);
  if (VAR_9) {
   FUNC_5(VAR_6, "unable to load firmware data\n");
   return VAR_9;
  }

  VAR_6->data.data = FUNC_0(VAR_7->data, VAR_7->size, VAR_2);
  VAR_6->data.size = VAR_7->size;
  FUNC_9(VAR_7);
  if (!VAR_6->data.data)
   return -VAR_1;

  FUNC_11(VAR_8, sizeof(VAR_8), "nouveau/nv%02x_fuc%03xc",
    VAR_5->chipset, VAR_6->addr >> 12);

  VAR_9 = FUNC_10(&VAR_7, VAR_8, &VAR_5->pdev->dev);
  if (VAR_9) {
   FUNC_5(VAR_6, "unable to load firmware code\n");
   return VAR_9;
  }

  VAR_6->code.data = FUNC_0(VAR_7->data, VAR_7->size, VAR_2);
  VAR_6->code.size = VAR_7->size;
  FUNC_9(VAR_7);
  if (!VAR_6->code.data)
   return -VAR_1;
 }

 FUNC_3(VAR_6, "firmware: %s (%s)\n", VAR_8, VAR_6->data.data ?
   "static code/data segments" : "self-bootstrapping");


 if (!VAR_6->data.data && !VAR_6->core) {
  VAR_9 = FUNC_2(VAR_4->parent, ((void*)0),
      VAR_6->code.size, 256, 0,
     &VAR_6->core);
  if (VAR_9) {
   FUNC_5(VAR_6, "core allocation failed, %d\n", VAR_9);
   return VAR_9;
  }

  for (VAR_10 = 0; VAR_10 < VAR_6->code.size; VAR_10 += 4)
   FUNC_8(VAR_6->core, VAR_10, VAR_6->code.data[VAR_10 / 4]);
 }


 if (VAR_6->core) {
  if (VAR_5->card_type < VAR_3)
   FUNC_8(VAR_6, 0x618, 0x04000000);
  else
   FUNC_8(VAR_6, 0x618, 0x00000114);
  FUNC_8(VAR_6, 0x11c, 0);
  FUNC_8(VAR_6, 0x110, VAR_6->core->addr >> 8);
  FUNC_8(VAR_6, 0x114, 0);
  FUNC_8(VAR_6, 0x118, 0x00006610);
 } else {
  if (VAR_6->code.size > VAR_6->code.limit ||
      VAR_6->data.size > VAR_6->data.limit) {
   FUNC_5(VAR_6, "ucode exceeds falcon limit(s)\n");
   return -VAR_0;
  }

  if (VAR_6->version < 3) {
   FUNC_8(VAR_6, 0xff8, 0x00100000);
   for (VAR_10 = 0; VAR_10 < VAR_6->code.size / 4; VAR_10++)
    FUNC_8(VAR_6, 0xff4, VAR_6->code.data[VAR_10]);
  } else {
   FUNC_8(VAR_6, 0x180, 0x01000000);
   for (VAR_10 = 0; VAR_10 < VAR_6->code.size / 4; VAR_10++) {
    if ((VAR_10 & 0x3f) == 0)
     FUNC_8(VAR_6, 0x188, VAR_10 >> 6);
    FUNC_8(VAR_6, 0x184, VAR_6->code.data[VAR_10]);
   }
  }
 }


 if (VAR_6->version < 3) {
  FUNC_8(VAR_6, 0xff8, 0x00000000);
  for (VAR_10 = 0; !VAR_6->core && VAR_10 < VAR_6->data.size / 4; VAR_10++)
   FUNC_8(VAR_6, 0xff4, VAR_6->data.data[VAR_10]);
  for (; VAR_10 < VAR_6->data.limit; VAR_10 += 4)
   FUNC_8(VAR_6, 0xff4, 0x00000000);
 } else {
  FUNC_8(VAR_6, 0x1c0, 0x01000000);
  for (VAR_10 = 0; !VAR_6->core && VAR_10 < VAR_6->data.size / 4; VAR_10++)
   FUNC_8(VAR_6, 0x1c4, VAR_6->data.data[VAR_10]);
  for (; VAR_10 < VAR_6->data.limit / 4; VAR_10++)
   FUNC_8(VAR_6, 0x1c4, 0x00000000);
 }


 FUNC_8(VAR_6, 0x10c, 0x00000001);
 FUNC_8(VAR_6, 0x104, 0x00000000);
 FUNC_8(VAR_6, 0x100, 0x00000002);
 FUNC_8(VAR_6, 0x048, 0x00000003);
 return 0;
}
