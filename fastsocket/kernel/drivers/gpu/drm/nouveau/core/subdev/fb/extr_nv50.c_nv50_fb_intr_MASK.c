
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nv50_fb_priv {int dummy; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_enum {int name; int value; scalar_t__ data; scalar_t__ data2; } ;
struct nouveau_engine {int dummy; } ;
struct nouveau_device {int chipset; } ;


 int FUNC_0 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_1 (struct nouveau_engine*,int) ;
 int FUNC_2 (struct nouveau_object*) ;
 struct nouveau_engine* FUNC_3 (struct nouveau_subdev*,scalar_t__) ;
 struct nouveau_enum* FUNC_4 (scalar_t__,int) ;
 struct nouveau_device* FUNC_5 (struct nouveau_subdev*) ;
 int FUNC_6 (struct nv50_fb_priv*,char*,char*,int,int,int,int,int ) ;
 int FUNC_7 (struct nv50_fb_priv*,int) ;
 int FUNC_8 (struct nv50_fb_priv*,int,int) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_10(struct nouveau_subdev *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_5(VAR_3);
 struct nouveau_engine *VAR_5;
 struct nv50_fb_priv *VAR_6 = (void *)VAR_3;
 const struct nouveau_enum *VAR_7, *VAR_8;
 struct nouveau_object *VAR_9 = ((void*)0);
 u32 VAR_10[6], VAR_11, VAR_12;
 u8 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_11 = FUNC_7(VAR_6, 0x100c90);
 if (!(VAR_11 & 0x80000000))
  return;
 VAR_11 &= 0x00ffffff;

 for (VAR_17 = 0; VAR_17 < 6; VAR_17++) {
  FUNC_8(VAR_6, 0x100c90, VAR_11 | VAR_17 << 24);
  VAR_10[VAR_17] = FUNC_7(VAR_6, 0x100c94);
 }
 FUNC_8(VAR_6, 0x100c90, VAR_11 | 0x80000000);


 if (VAR_4->chipset < 0xa3 ||
     VAR_4->chipset == 0xaa || VAR_4->chipset == 0xac) {
  VAR_13 = (VAR_10[0] & 0x0000000f) >> 0;
  VAR_14 = (VAR_10[0] & 0x000000f0) >> 4;
  VAR_15 = (VAR_10[0] & 0x00000f00) >> 8;
  VAR_16 = (VAR_10[0] & 0x0000f000) >> 12;
 } else {
  VAR_13 = (VAR_10[0] & 0x000000ff) >> 0;
  VAR_14 = (VAR_10[0] & 0x0000ff00) >> 8;
  VAR_15 = (VAR_10[0] & 0x00ff0000) >> 16;
  VAR_16 = (VAR_10[0] & 0xff000000) >> 24;
 }
 VAR_12 = (VAR_10[2] << 16) | VAR_10[1];

 VAR_7 = FUNC_4(VAR_1, VAR_13);

 if (VAR_7 && VAR_7->data2) {
  const struct nouveau_enum *VAR_18 = VAR_7;
  while (VAR_7->name && VAR_7->value == VAR_13 && VAR_7->data2) {
   VAR_5 = FUNC_3(VAR_3, VAR_7->data2);
   if (VAR_5) {
    VAR_9 = FUNC_1(VAR_5, VAR_12);
    if (VAR_9)
     break;
   }
   VAR_7++;
  }
  if (!VAR_9)
   VAR_7 = VAR_18;
 }

 FUNC_6(VAR_6, "trapped %s at 0x%02x%04x%04x on channel 0x%08x [%s] ",
   (VAR_10[5] & 0x00000100) ? "read" : "write",
   VAR_10[5] & 0xff, VAR_10[4] & 0xffff, VAR_10[3] & 0xffff, VAR_12,
   FUNC_0(VAR_9));

 FUNC_2(VAR_9);

 if (VAR_7)
  FUNC_9("%s/", VAR_7->name);
 else
  FUNC_9("%02x/", VAR_13);

 VAR_8 = FUNC_4(VAR_0, VAR_15);
 if (VAR_8)
  FUNC_9("%s/", VAR_8->name);
 else
  FUNC_9("%02x/", VAR_15);

 if (VAR_8 && VAR_8->data) VAR_8 = FUNC_4(VAR_8->data, VAR_16);
 else if (VAR_7 && VAR_7->data) VAR_8 = FUNC_4(VAR_7->data, VAR_16);
 else VAR_8 = ((void*)0);
 if (VAR_8)
  FUNC_9("%s", VAR_8->name);
 else
  FUNC_9("%02x", VAR_16);

 FUNC_9(" reason: ");
 VAR_7 = FUNC_4(VAR_2, VAR_14);
 if (VAR_7)
  FUNC_9("%s\n", VAR_7->name);
 else
  FUNC_9("0x%08x\n", VAR_14);
}
