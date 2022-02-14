
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvbios_init {int offset; int execute; int crtc; int outp; struct nouveau_bios* bios; int subdev; } ;
struct nouveau_disp {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct TYPE_3__ {scalar_t__ lnkcmp; } ;
struct dp_state {int link_nr; int link_bw; int* dpcd; int version; int head; int outp; struct nouveau_disp* disp; TYPE_2__* func; TYPE_1__ info; int aux; } ;
struct TYPE_4__ {int (* lnk_ctl ) (struct nouveau_disp*,int ,int ,int,int,int) ;} ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct nouveau_bios* FUNC_1 (struct nouveau_disp*) ;
 int FUNC_2 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_3 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_4 (struct nouveau_disp*) ;
 int FUNC_5 (int ,int ,int*,int) ;
 int FUNC_6 (struct nvbios_init*) ;
 int FUNC_7 (struct nouveau_disp*,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_8(struct dp_state *VAR_4)
{
 struct nouveau_disp *VAR_5 = VAR_4->disp;
 struct nouveau_bios *VAR_6 = FUNC_1(VAR_5);
 struct nvbios_init VAR_7 = {
  .subdev = FUNC_4(VAR_4->disp),
  .bios = VAR_6,
  .offset = 0x0000,
  .outp = VAR_4->outp,
  .crtc = VAR_4->head,
  .execute = 1,
 };
 u32 VAR_8;
 u8 VAR_9[2];

 FUNC_0("%d lanes at %d KB/s\n", VAR_4->link_nr, VAR_4->link_bw);


 VAR_9[0] = VAR_4->link_bw / 27000;
 VAR_9[1] = VAR_4->link_nr;
 if (VAR_4->dpcd[VAR_2] & VAR_3)
  VAR_9[1] |= VAR_1;

 FUNC_5(VAR_4->aux, VAR_0, VAR_9, 2);


 if ((VAR_8 = VAR_4->info.lnkcmp)) {
  if (VAR_4->version < 0x30) {
   while ((VAR_4->link_bw / 10) < FUNC_3(VAR_6, VAR_8))
    VAR_8 += 4;
   VAR_7.offset = FUNC_3(VAR_6, VAR_8 + 2);
  } else {
   while ((VAR_4->link_bw / 27000) < FUNC_2(VAR_6, VAR_8))
    VAR_8 += 3;
   VAR_7.offset = FUNC_3(VAR_6, VAR_8 + 1);
  }

  FUNC_6(&VAR_7);
 }

 return VAR_4->func->lnk_ctl(VAR_4->disp, VAR_4->outp, VAR_4->head,
     VAR_4->link_nr, VAR_4->link_bw / 27000,
     VAR_4->dpcd[VAR_2] &
       VAR_3);
}
