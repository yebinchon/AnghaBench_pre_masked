
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dirtyPal; int frame_count; scalar_t__ pal; } ;
struct TYPE_6__ {int* reg; } ;
struct TYPE_10__ {TYPE_2__ m; TYPE_1__ video; } ;
struct TYPE_9__ {scalar_t__ changed; } ;
struct TYPE_8__ {scalar_t__ CPUclock; int EmuOpt; int Frameskip; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_6 ;
 int * VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int) ;
 TYPE_3__ VAR_9 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int*,int ,int) ;
 int FUNC_12 () ;
 int* VAR_11 ;
 int VAR_12 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 () ;
 int VAR_13 ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int ) ;
 void* FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (unsigned int) ;
 int FUNC_23 (char*,char*,int,...) ;
 int FUNC_24 () ;
 int FUNC_25 () ;

void FUNC_26(void)
{
 static int VAR_14 = 0;
 char VAR_15[24];
 unsigned int VAR_16, VAR_17 = 0;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = 0;
 int VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28 = 0;
 char *VAR_29 = ((void*)0);

 FUNC_10("entered emu_Loop()\n");

 VAR_15[0] = 0;

 if (VAR_9.CPUclock != FUNC_15()) {
  FUNC_10("setting cpu clock to %iMHz... ", VAR_9.CPUclock);
  VAR_22 = FUNC_16(VAR_9.CPUclock);
  FUNC_10(VAR_22 ? "failed\n" : "done\n");
  VAR_9.CPUclock = FUNC_15();
 }


 FUNC_25();
 FUNC_6(1);
 VAR_4.m.dirtyPal = 1;
 VAR_23 = ((VAR_4.video.reg[12]&1)<<2) ^ 0xc;


 VAR_18 = VAR_4.m.pal ? 50 : 60;
 VAR_19 = VAR_4.m.pal ? (1000000<<8)/50 : (1000000<<8)/60+1;
 VAR_13 = 1;

 if (VAR_5 & VAR_1) {

  FUNC_2();

  if (!VAR_14) {
   VAR_22 = FUNC_12();
   VAR_14 = 1;
   if (VAR_22) { VAR_10 = VAR_2; return; }
  }
 }


 VAR_7 = ((void*)0);
 if (VAR_9.EmuOpt & VAR_0)
 {
  FUNC_13();
 }

 FUNC_18();
 VAR_25 = VAR_24 =
  VAR_27 = VAR_26 = 0;

 VAR_28 = FUNC_20();


 while (VAR_10 == VAR_3)
 {
  int VAR_30;

  VAR_16 = FUNC_20();
  if (VAR_13 || VAR_16 < VAR_28) {

   VAR_13 = 0;
   VAR_17 = VAR_16;
   VAR_25 = VAR_24 = 0;
  }


  if (VAR_12) {
   static int VAR_31;
   if (VAR_16 - VAR_12 > 2000000) {
    VAR_12 = 0;
    FUNC_6(0);
    VAR_29 = 0;
   } else {
    int VAR_32 = VAR_11[0]+VAR_11[1]+VAR_11[2];
    if (VAR_32 != VAR_31) { FUNC_6(0); VAR_31 = VAR_32; }
    VAR_29 = VAR_11;
   }
  }


  VAR_30 = ((VAR_4.video.reg[12]&1)<<2)|(VAR_4.video.reg[1]&8);
  if (VAR_30 != VAR_23) {
   VAR_23 = VAR_30;
   FUNC_6(1);
   FUNC_21();
  }


  if (VAR_16 - VAR_28 >= 1000000)
  {
   if (VAR_9.EmuOpt & 2)
    FUNC_23(VAR_15, "%02i/%02i  ", VAR_27, VAR_26);
   VAR_26 = VAR_27 = 0;
   VAR_28 += 1000000;
  }

  if (VAR_16 - VAR_17 >= 1000000)
  {

   if (VAR_9.Frameskip < 0 && VAR_24 < VAR_18) {
    FUNC_4(); VAR_24++; VAR_26++;
   }

   VAR_17 += 1000000;

   if (VAR_9.Frameskip < 0) {
    VAR_24 -= VAR_18; if (VAR_24 < 0) VAR_24 = 0;
    VAR_25 -= VAR_18; if (VAR_25 < 0) VAR_25 = 0;
    if (VAR_25 > VAR_24) VAR_25 = VAR_24;
   } else {
    VAR_24 = VAR_25 = 0;
   }
  }




  VAR_20 = (VAR_24+1) * VAR_19;
  if (VAR_9.Frameskip >= 0)
  {
   for (VAR_22 = 0; VAR_22 < VAR_9.Frameskip; VAR_22++) {
    FUNC_24();
    FUNC_4(); VAR_24++; VAR_26++;
    if (!(VAR_9.EmuOpt&0x40000)) {
     int VAR_33;
     VAR_16 = FUNC_20();
     VAR_33 = (int)(VAR_16 - VAR_17) << 8;
     if (VAR_33 < VAR_20)
      FUNC_22(VAR_16 + ((VAR_20 - VAR_33)>>8));
    }
    VAR_20 += VAR_19;
   }
  }
  else
  {
   int VAR_34;
   VAR_16 = FUNC_20();
   VAR_34 = (int)(VAR_16 - VAR_17) << 8;
   if (VAR_34 > VAR_20 && (VAR_24/16 < VAR_25))
   {

    if (VAR_34 - VAR_20 >= (300000<<8)) {
     VAR_13 = 1;
     continue;
    }
    FUNC_24();
    FUNC_4(); VAR_24++; VAR_26++;
    continue;
   }
  }

  FUNC_24();

  if (!(VAR_6&0x10))
   FUNC_0();

  FUNC_3();

  FUNC_19(0,0);


  VAR_16 = FUNC_20();
  VAR_21 = (int)(VAR_16 - VAR_17) << 8;

  FUNC_5(VAR_15, VAR_29, VAR_21 > VAR_20);

  if (VAR_9.Frameskip < 0 && VAR_21 - VAR_20 >= (300000<<8)) {
   VAR_13 = 1;
  }
  else if (!(VAR_9.EmuOpt&0x40000) || VAR_9.Frameskip < 0)
  {

   if (VAR_21 < VAR_20)
   {

    FUNC_22(VAR_16 + ((VAR_20 - VAR_21) >> 8));
   }
  }

  VAR_24++; VAR_25++;
   VAR_26++; VAR_27++;
 }


 FUNC_9(0);

 if (VAR_5 & VAR_1) FUNC_1();

 if (VAR_7 != ((void*)0)) {
  FUNC_14();
  VAR_7 = ((void*)0);
 }


 if ((VAR_9.EmuOpt & 1) && VAR_8.changed) {
  FUNC_7("Writing SRAM/BRAM..");
  FUNC_8(0, 1);
  VAR_8.changed = 0;
 }


 FUNC_11((int *)FUNC_17() + 512*264*2/4, 0, 512*8*2/4);
}
