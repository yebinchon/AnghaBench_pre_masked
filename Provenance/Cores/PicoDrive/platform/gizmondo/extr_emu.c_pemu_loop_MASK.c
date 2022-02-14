
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dirtyPal; int pal; int frame_count; } ;
struct TYPE_6__ {int* reg; } ;
struct TYPE_10__ {TYPE_2__ m; TYPE_1__ video; } ;
struct TYPE_9__ {scalar_t__ changed; } ;
struct TYPE_8__ {int EmuOpt; int Frameskip; int volume; scalar_t__ scaling; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int) ;
 TYPE_4__ VAR_9 ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int) ;
 TYPE_3__ VAR_10 ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_16 () ;
 int * FUNC_17 (int) ;
 int FUNC_18 () ;
 int * VAR_12 ;
 int FUNC_19 (char*,...) ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_20 (scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int FUNC_21 (char*,char*,int,...) ;
 int FUNC_22 () ;
 int VAR_19 ;
 int FUNC_23 () ;

void FUNC_24(void)
{
 static int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 char VAR_23[24];
 DWORD VAR_24, VAR_25 = 0, VAR_26 = 0;
 int VAR_27 = 0, VAR_28 = 0, VAR_29 = 0, VAR_30 = 1000;
 int VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 char *VAR_36 = ((void*)0);

 FUNC_19("entered emu_Loop()\n");

 VAR_23[0] = 0;


 FUNC_23();
 if (VAR_10.scaling) VAR_4|=0x4000;
 else VAR_4&=~0x4000;
 VAR_2.m.dirtyPal = 1;
 VAR_29 = ((VAR_2.video.reg[12]&1)<<2) ^ 0xc;


 VAR_31 = VAR_2.m.pal ? 50 : 60;
 VAR_32 = VAR_2.m.pal ? (1000<<8)/50 : (1000<<8)/60+1;
 VAR_15 = 1;


 if (VAR_3 & VAR_0) FUNC_8();


 VAR_7 = ((void*)0);
 if (VAR_10.EmuOpt & 4)
 {
  int VAR_37, VAR_38, VAR_39;
  if (VAR_8 != VAR_20 || (VAR_4&0x0b) != (VAR_21&0x0b) || VAR_2.m.pal != VAR_22) {
   FUNC_10(VAR_2.m.frame_count ? 1 : 0);
  }
  VAR_39=(VAR_4&8)>>3;
  VAR_38 = ((VAR_8 - VAR_6*VAR_31)<<16) / VAR_31;
  VAR_17 = (VAR_8<<VAR_39) * 16 / VAR_31;
  FUNC_19("starting audio: %i len: %i (ex: %04x) stereo: %i, pal: %i\n",
   VAR_8, VAR_6, VAR_38, VAR_39, VAR_2.m.pal);
  VAR_37 = FUNC_4(VAR_8, VAR_17, VAR_39);
  if (VAR_37 != 0) {
   FUNC_19("FrameworkAudio_Init() failed: %i\n", VAR_37);
   FUNC_21(VAR_13, "sound init failed (%i), snd disabled", VAR_37);
   VAR_14 = FUNC_6();
   VAR_10.EmuOpt &= ~4;
  } else {
   FUNC_5(VAR_10.volume, VAR_10.volume);
   VAR_5 = VAR_19;
   VAR_18 = FUNC_1();
   VAR_7 = VAR_18 + VAR_17 / 2;
   VAR_16 = 0;
   VAR_20 = VAR_8;
   VAR_21 = VAR_4;
   VAR_22 = VAR_2.m.pal;
  }
 }


 while (VAR_11 == VAR_1)
 {
  int VAR_40;

  VAR_24 = FUNC_6();
  if (VAR_15 || VAR_24 < VAR_25) {

   VAR_15 = 0;
   VAR_26 = VAR_24;
   VAR_28 = VAR_27 = 0;
  }


  if (VAR_14) {
   static int VAR_41;
   if (VAR_24 - VAR_14 > 2000) {
    VAR_14 = 0;
    FUNC_13(0);
    VAR_36 = 0;
   } else {
    int VAR_42 = VAR_13[0]+VAR_13[1]+VAR_13[2];
    if (VAR_42 != VAR_41) { FUNC_13(0); VAR_41 = VAR_42; }
    VAR_36 = VAR_13;
   }
  }


  VAR_40 = ((VAR_2.video.reg[12]&1)<<2)|(VAR_2.video.reg[1]&8);
  if (VAR_40 != VAR_29) {
   VAR_29 = VAR_40;
   FUNC_13(1);
  }


  if (VAR_24 - VAR_26 >= VAR_30)
  {
   if(VAR_10.EmuOpt & 2)
    FUNC_21(VAR_23, "%02i/%02i", VAR_28, VAR_27);


   VAR_26 += VAR_30;

   if (VAR_7 != ((void*)0))
   {

    static int VAR_43 = 0;
    int VAR_44, VAR_45, VAR_46 = 9, VAR_47 = 7;
    VAR_44 = VAR_16*2 - FUNC_2();
    if (VAR_8 == 22050) VAR_46 = 10;
    if (VAR_8 > 22050) VAR_46 = 11;
    if (VAR_4&8) VAR_47++;
    if (VAR_44 < 0) {
     VAR_45 = -((-VAR_44) >> VAR_47);
     if (VAR_44 > -(6<<VAR_46)) VAR_45>>=1;
     if (VAR_44 > -(4<<VAR_46)) VAR_45>>=1;
     if (VAR_44 > -(2<<VAR_46)) VAR_45>>=1;
     if (VAR_44 > VAR_43) VAR_45>>=2;
    } else {
     VAR_45 = VAR_44 >> VAR_47;
     if (VAR_44 < (6<<VAR_46)) VAR_45>>=1;
     if (VAR_44 < (4<<VAR_46)) VAR_45>>=1;
     if (VAR_44 < (2<<VAR_46)) VAR_45>>=1;
     if (VAR_44 < VAR_43) VAR_45>>=2;
    }
    VAR_43 = VAR_44;
    VAR_32 += VAR_45;
    VAR_30 = (VAR_32 * VAR_31) >> 8;

    VAR_27 = VAR_28 = 0;
   }
   else if (VAR_10.Frameskip < 0) {
    VAR_27 -= VAR_31; if (VAR_27 < 0) VAR_27 = 0;
    VAR_28 -= VAR_31; if (VAR_28 < 0) VAR_28 = 0;
    if (VAR_28 > VAR_27) VAR_28 = VAR_27;
   } else {
    VAR_27 = VAR_28 = 0;
   }
  }




  VAR_25 = VAR_24;
  VAR_33 = (VAR_27+1) * VAR_32;
  if (VAR_10.Frameskip >= 0)
  {
   for (VAR_35 = 0; VAR_35 < VAR_10.Frameskip; VAR_35++) {
    FUNC_22();
    FUNC_11(); VAR_27++;
    if (VAR_7) {
     int VAR_48;
     VAR_24 = FUNC_6();
     VAR_48 = (int)(VAR_24 - VAR_26) << 8;
     if (VAR_48 < VAR_33)
      FUNC_20(VAR_24 + ((VAR_33 - VAR_48)>>8));
    }
    VAR_33 += VAR_32;
   }
  }
  else
  {
   int VAR_49;
   VAR_24 = FUNC_6();
   VAR_49 = (int)(VAR_24 - VAR_26) << 8;
   if (VAR_49 > VAR_33)
   {

    if (VAR_49 - VAR_33 >= (300<<8)) {


     VAR_15 = 1;
     continue;
    }
    FUNC_22();
    FUNC_11(); VAR_27++;
    continue;
   }
  }

  FUNC_22();

  if (VAR_10.EmuOpt&0x80)

   VAR_12 = FUNC_17((VAR_10.EmuOpt&0x8000) ? 0 : 1);

  FUNC_9();

  if (VAR_12 == ((void*)0))
   VAR_12 = FUNC_17((VAR_10.EmuOpt&0x8000) ? 0 : 1);

  FUNC_12(VAR_23, VAR_36);

  if (VAR_12 != ((void*)0)) {
   FUNC_18();
   VAR_12 = ((void*)0);
  }

  if (VAR_10.EmuOpt&0x2000)
   FUNC_0();

  if (VAR_10.EmuOpt&0x8000)
   FUNC_16();


  VAR_24 = FUNC_6();
  VAR_34 = (int)(VAR_24 - VAR_26) << 8;

  if (VAR_10.Frameskip < 0 && VAR_34 - VAR_33 >= (300<<8))
   VAR_15 = 1;
  else if (VAR_7 != ((void*)0) || VAR_10.Frameskip < 0)
  {

   if (VAR_34 < VAR_33)
   {

    FUNC_20(VAR_24 + ((VAR_33 - VAR_34) >> 8));
   }
  }

  VAR_27++; VAR_28++;
 }


 if (VAR_3 & VAR_0) FUNC_7();

 if (VAR_7 != ((void*)0)) {
  VAR_7 = VAR_18 = ((void*)0);
  FUNC_3();
 }


 if ((VAR_10.EmuOpt & 1) && VAR_9.changed) {
  FUNC_15("Writing SRAM/BRAM..");
  FUNC_14(0, 1);
  VAR_9.changed = 0;
 }
}
