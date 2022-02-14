
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nvbios_init {int crtc; int execute; int * outp; int offset; struct nouveau_bios* bios; struct nouveau_subdev* subdev; } ;
struct nouveau_subdev {int dummy; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int) ;
 int FUNC_1 (struct nouveau_bios*) ;
 struct nouveau_bios* FUNC_2 (struct nouveau_subdev*) ;
 int FUNC_3 (struct nouveau_bios*,char*) ;
 int FUNC_4 (struct nvbios_init*) ;

int
FUNC_5(struct nouveau_subdev *VAR_0, bool VAR_1)
{
 struct nouveau_bios *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = 0;
 int VAR_4 = -1;
 u16 VAR_5;

 if (VAR_1)
  FUNC_3(VAR_2, "running init tables\n");
 while (!VAR_3 && (VAR_5 = (FUNC_0(VAR_2, ++VAR_4)))) {
  struct nvbios_init VAR_6 = {
   .subdev = VAR_0,
   .bios = VAR_2,
   .offset = VAR_5,
   .outp = ((void*)0),
   .crtc = -1,
   .execute = VAR_1 ? 1 : 0,
  };

  VAR_3 = FUNC_4(&VAR_6);
 }




 if (!VAR_3 && (VAR_5 = FUNC_1(VAR_2))) {
  struct nvbios_init VAR_7 = {
   .subdev = VAR_0,
   .bios = VAR_2,
   .offset = VAR_5,
   .outp = ((void*)0),
   .crtc = -1,
   .execute = VAR_1 ? 1 : 0,
  };

  VAR_3 = FUNC_4(&VAR_7);
 }

 return 0;
}
