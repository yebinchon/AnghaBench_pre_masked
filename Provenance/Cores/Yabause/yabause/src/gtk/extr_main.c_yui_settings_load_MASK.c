
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; int tm_mday; } ;
typedef int gchar ;
typedef int gboolean ;
struct TYPE_8__ {int height; int width; } ;
struct TYPE_13__ {TYPE_1__ allocation; } ;
struct TYPE_12__ {char* Name; } ;
struct TYPE_11__ {int (* Resize ) (int ,int ,int ) ;} ;
struct TYPE_10__ {int cdcoretype; int regionid; int carttype; int sh2coretype; int m68kcoretype; int vidcoretype; int osdcoretype; int sndcoretype; int percoretype; int clocksync; long basetime; int usethreads; int videoformattype; int * mpegpath; int * buppath; int * cartpath; int * cdpath; int * biospath; } ;
struct TYPE_9__ {int state; int area; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 TYPE_7__* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_6__* VAR_2 ;


 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 char** VAR_4 ;
 int FUNC_5 (int *) ;
 char** VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_8 ;
 TYPE_2__* FUNC_13 (int ) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* FUNC_14 (int ,char*,char*,int ) ;
 int FUNC_15 (int ,char*,char*,int *) ;
 void* FUNC_16 (int ,char*,char*,int ) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 int FUNC_18 (void*,int *,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (int*,struct tm*) ;
 void* VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_20 (int *,int *) ;
 int FUNC_21 (char*,char*,char*) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (int ,int ,int ) ;
 TYPE_3__ VAR_17 ;
 int VAR_18 ;
 int FUNC_24 (int,int,int) ;
 int FUNC_25 (TYPE_2__*,int) ;

__attribute__((used)) static gboolean FUNC_26(void) {
 int VAR_19, VAR_20;
 long VAR_21;
 gchar * VAR_22;
 gboolean VAR_23 = VAR_0;

 FUNC_17(VAR_14, VAR_13, VAR_1, 0);


 VAR_22 = FUNC_16(VAR_14, "General", "BiosPath", 0);
 if (VAR_22 && !*VAR_22) VAR_22 = ((void*)0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && FUNC_20(VAR_22, VAR_17.biospath)) {
  VAR_23 = VAR_6;
 }
 if (VAR_22) {
  FUNC_18(VAR_9, VAR_22, 256);
  VAR_17.biospath = VAR_9;
 }
 else VAR_17.biospath = ((void*)0);


 VAR_22 = FUNC_16(VAR_14, "General", "CDROMDrive", 0);
 if (VAR_22 && !*VAR_22) VAR_22 = ((void*)0);
 if((FUNC_13(VAR_18)->state & VAR_8) && FUNC_20(VAR_22, VAR_17.cdpath)) {
  FUNC_0(VAR_17.cdcoretype, VAR_22);
 }
 if (VAR_22) FUNC_18(VAR_12, VAR_22, 256);

 VAR_20 = VAR_17.cdcoretype;
 VAR_17.cdcoretype = FUNC_15(VAR_14, "General", "CDROMCore", 0);
 if((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.cdcoretype)) {
  FUNC_0(VAR_17.cdcoretype, VAR_17.cdpath);
 }


 {
  char * VAR_24 = FUNC_16(VAR_14, "General", "Region", 0);
  VAR_20 = VAR_17.regionid;
  if ((VAR_24 == 0) || !FUNC_22(VAR_24, "Auto")) {
   VAR_17.regionid = 0;
  } else {
   switch(VAR_24[0]) {
    case 'J': VAR_17.regionid = 1; break;
    case 'T': VAR_17.regionid = 2; break;
    case 'U': VAR_17.regionid = 4; break;
    case 'B': VAR_17.regionid = 5; break;
    case 'K': VAR_17.regionid = 6; break;
    case 'A': VAR_17.regionid = 0xA; break;
    case 'E': VAR_17.regionid = 0xC; break;
    case 'L': VAR_17.regionid = 0xD; break;
   }
  }

  if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.regionid)) {
   VAR_23 = VAR_6;
  }
 }


 VAR_22 = FUNC_16(VAR_14, "General", "CartPath", 0);
 if (VAR_22 && !*VAR_22) VAR_22 = ((void*)0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && FUNC_20(VAR_22, VAR_17.cartpath)) {
  VAR_23 = VAR_6;
 }
 if (VAR_22) {
  FUNC_18(VAR_11, VAR_22, 256);
  VAR_17.cartpath = VAR_11;
 }
 else VAR_17.cartpath = ((void*)0);

 VAR_20 = VAR_17.carttype;
 VAR_17.carttype = FUNC_15(VAR_14, "General", "CartType", 0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.carttype)) {
          VAR_23 = VAR_6;
 }


 VAR_22 = FUNC_16(VAR_14, "General", "BackupRamPath", 0);
 if (VAR_22 && !*VAR_22) VAR_22 = ((void*)0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && FUNC_20(VAR_22, VAR_17.buppath)) {
  VAR_23 = VAR_6;
 }
 if (VAR_22) {
  FUNC_18(VAR_10, VAR_22, 256);
  VAR_17.buppath = VAR_10;
 }
 else VAR_17.buppath = ((void*)0);


 VAR_22 = FUNC_16(VAR_14, "General", "MpegRomPath", 0);
 if (VAR_22 && !*VAR_22) VAR_22 = ((void*)0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && FUNC_20(VAR_22, VAR_17.mpegpath)) {
  VAR_23 = VAR_6;
 }
 if (VAR_22) {
  FUNC_18(VAR_15, VAR_22, 256);
  VAR_17.mpegpath = VAR_15;
 }
 else VAR_17.mpegpath = ((void*)0);


 VAR_20 = VAR_17.sh2coretype;
 VAR_17.sh2coretype = FUNC_15(VAR_14, "General", "SH2Int", 0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.sh2coretype)) {
  VAR_23 = VAR_6;
 }


 VAR_20 = VAR_17.m68kcoretype;
 VAR_17.m68kcoretype = FUNC_15(VAR_14, "General", "M68kInt", 0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.m68kcoretype)) {
  VAR_23 = VAR_6;
 }


 VAR_20 = VAR_17.vidcoretype;
 VAR_17.vidcoretype = FUNC_15(VAR_14, "General", "VideoCore", 0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.vidcoretype)) {
  FUNC_12(VAR_17.vidcoretype);
  VAR_7->Resize(
   FUNC_1(FUNC_13(VAR_18)->area)->allocation.width,
   FUNC_1(FUNC_13(VAR_18)->area)->allocation.height,
   VAR_0);
 }


 VAR_20 = VAR_17.osdcoretype;
 VAR_17.osdcoretype = FUNC_15(VAR_14, "General", "OSDCore", 0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.osdcoretype)) {
  FUNC_2(VAR_17.osdcoretype);
 }


 VAR_20 = VAR_17.sndcoretype;
 VAR_17.sndcoretype = FUNC_15(VAR_14, "General", "SoundCore", 0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.sndcoretype)) {
  FUNC_8(VAR_17.sndcoretype);
 }

 FUNC_10(FUNC_15(VAR_14, "General", "Volume", ((void*)0)));


 VAR_17.percoretype = FUNC_15(VAR_14, "General", "PerCore", 0);


 VAR_20 = FUNC_14(VAR_14, "General", "AudioSync", 0);
 FUNC_9(VAR_20);


 VAR_20 = VAR_17.clocksync;
 VAR_17.clocksync = FUNC_14(VAR_14, "General", "ClockSync", 0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.clocksync)) {
  VAR_23 = VAR_6;
 }
 VAR_21 = VAR_17.basetime;
 VAR_20 = FUNC_14(VAR_14, "General", "FixedBaseTime", 0);
 if (VAR_20 && VAR_17.clocksync) {

  time_t VAR_25 = 883656000;
  struct tm VAR_26;
  long VAR_27, VAR_28;
  FUNC_19(&VAR_25, &VAR_26);
  VAR_27 = VAR_26.tm_hour*3600 + VAR_26.tm_min*60 + VAR_26.tm_sec;
  if (VAR_26.tm_mday == 2)
   VAR_27 += 86400;
  else if (VAR_26.tm_mday == 31)
   VAR_27 -= 86400;
  VAR_28 = 12*3600 + 0*60 + 0;
  VAR_17.basetime = (long)VAR_25 + (VAR_28 - VAR_27);
 } else {
  VAR_17.basetime = 0;
 }
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_21 != VAR_17.basetime)) {
  VAR_23 = VAR_6;
 }


 VAR_20 = FUNC_14(VAR_14, "General", "UseThreads", 0);
 if ((FUNC_13(VAR_18)->state & VAR_8) && (VAR_20 != VAR_17.usethreads)) {
  VAR_23 = VAR_6;
 }
 VAR_17.usethreads = VAR_20;

 FUNC_3(VAR_17.percoretype);

 FUNC_6();
 switch(FUNC_15(VAR_14, "General", "PerType", ((void*)0)))
 {
  case 129:
   VAR_16 = FUNC_4(&VAR_3);
   VAR_19 = 0;

   while(VAR_4[VAR_19]) {
    char VAR_29[100];
    u32 VAR_30;
    FUNC_21(VAR_29, "Mouse.%s.1", VAR_4[VAR_19]);
      VAR_30 = FUNC_15(VAR_14, VAR_2->Name, VAR_29, 0);
      FUNC_7(VAR_30, VAR_19 + 13, VAR_16);
      VAR_19++;
   }
   break;
  case 128:
  default:
   VAR_16 = FUNC_5(&VAR_3);
   VAR_19 = 0;

   while(VAR_5[VAR_19]) {
    char VAR_31[100];
    u32 VAR_32;
    FUNC_21(VAR_31, "Pad.%s.1", VAR_5[VAR_19]);
      VAR_32 = FUNC_15(VAR_14, VAR_2->Name, VAR_31, 0);
      FUNC_7(VAR_32, VAR_19, VAR_16);
      VAR_19++;
   }
 }

 FUNC_24(FUNC_15(VAR_14, "General", "Width", 0),
   FUNC_15(VAR_14, "General", "Height", 0),
   FUNC_15(VAR_14, "General", "Fullscreen", 0));

        VAR_17.videoformattype = FUNC_15(VAR_14, "General", "VideoFormat", 0);

 FUNC_25(FUNC_13(VAR_18), FUNC_15(VAR_14, "General", "Frameskip", ((void*)0)));

 FUNC_11(FUNC_15(VAR_14, "General", "Bilinear", 0));

 return VAR_23;
}
