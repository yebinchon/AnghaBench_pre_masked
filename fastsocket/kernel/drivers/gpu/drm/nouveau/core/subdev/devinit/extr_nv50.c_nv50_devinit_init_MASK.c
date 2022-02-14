
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvbios_outp {int * script; } ;
struct nvbios_init {int crtc; int execute; struct dcb_output* outp; int offset; struct nouveau_bios* bios; int subdev; } ;
struct TYPE_2__ {int post; } ;
struct nv50_devinit_priv {TYPE_1__ base; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct dcb_output {int hashm; int hasht; } ;


 scalar_t__ FUNC_0 (struct nouveau_bios*,int,int*,int*,struct dcb_output*) ;
 struct nouveau_bios* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct nv50_devinit_priv*,char*) ;
 int FUNC_4 (struct nv50_devinit_priv*,int ,int) ;
 int FUNC_5 (struct nv50_devinit_priv*) ;
 int FUNC_6 (struct nvbios_init*) ;
 scalar_t__ FUNC_7 (struct nouveau_bios*,int ,int ,int*,int*,int*,int*,struct nvbios_outp*) ;

__attribute__((used)) static int
FUNC_8(struct nouveau_object *VAR_0)
{
 struct nouveau_bios *VAR_1 = FUNC_1(VAR_0);
 struct nv50_devinit_priv *VAR_2 = (void *)VAR_0;
 struct nvbios_outp VAR_3;
 struct dcb_output VAR_4;
 u8 VAR_5 = 0xff, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10 = 0;

 if (!VAR_2->base.post) {
  if (!FUNC_4(VAR_2, 0, 0x00) &&
      !FUNC_4(VAR_2, 0, 0x1a)) {
   FUNC_3(VAR_2, "adaptor not initialised\n");
   VAR_2->base.post = 1;
  }
 }

 VAR_9 = FUNC_2(&VAR_2->base);
 if (VAR_9)
  return VAR_9;





 while (VAR_2->base.post && FUNC_0(VAR_1, VAR_10, &VAR_5, &VAR_6, &VAR_4)) {
  if (FUNC_7(VAR_1, VAR_4.hasht, VAR_4.hashm,
         &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_3)) {
   struct nvbios_init VAR_11 = {
    .subdev = FUNC_5(VAR_2),
    .bios = VAR_1,
    .offset = VAR_3.script[0],
    .outp = &VAR_4,
    .crtc = -1,
    .execute = 1,
   };

   FUNC_6(&VAR_11);
  }
  VAR_10++;
 }

 return 0;
}
