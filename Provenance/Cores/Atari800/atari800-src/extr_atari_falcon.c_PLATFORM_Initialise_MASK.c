
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
typedef int UBYTE ;
struct TYPE_2__ {scalar_t__ blnk_time; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (unsigned long,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 () ;
 int* VAR_15 ;
 unsigned long VAR_16 ;
 int FUNC_8 () ;
 int FUNC_9 (int*,char**) ;
 int FUNC_10 (int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_11 (char*) ;
 int VAR_20 ;
 int FUNC_12 () ;
 int VAR_21 ;
 int** VAR_22 ;
 int VAR_23 ;
 int FUNC_13 (int) ;
 int* VAR_24 ;
 int VAR_25 ;
 int FUNC_14 (int,char*) ;
 scalar_t__ FUNC_15 (char,...) ;
 int VAR_26 ;
 int FUNC_16 (int*,int*,int*,int*) ;
 int FUNC_17 (int ,int *) ;
 int VAR_27 ;
 int VAR_28 ;
 int * VAR_29 ;
 scalar_t__ VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;
 int FUNC_18 () ;
 int VAR_33 ;
 unsigned long VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_19 (char*,char*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int*,int *,int*) ;
 scalar_t__ VAR_37 ;
 int FUNC_22 (int ,int,int*) ;
 unsigned long VAR_38 ;
 int VAR_39 ;
 int FUNC_23 (int ,int ,int*,int*,int*,int*) ;
 int FUNC_24 (int ) ;

int FUNC_25(int *VAR_40, char *VAR_41[])
{
 int VAR_42;
 int VAR_43;

 int VAR_44[11], VAR_45[57];
 int VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;
 int VAR_54;

 for (VAR_42 = VAR_43 = 1; VAR_42 < *VAR_40; VAR_42++) {
  int VAR_55 = (VAR_42 + 1 < *VAR_40);
  int VAR_56 = VAR_4;

  if (FUNC_19(VAR_41[VAR_42], "-interlace") == 0) {
   if (VAR_55)
    VAR_36 = FUNC_11(VAR_41[++VAR_42]);
   else VAR_56 = VAR_17;
  }
  else if (FUNC_19(VAR_41[VAR_42], "-joyswap") == 0)
   VAR_27 = VAR_17;
  else if (FUNC_19(VAR_41[VAR_42], "-videl") == 0)
   VAR_25 = VAR_17;
  else if (FUNC_19(VAR_41[VAR_42], "-double") == 0)
   VAR_11 = VAR_17;
  else if (FUNC_19(VAR_41[VAR_42], "-delta") == 0)
   VAR_23 = VAR_17;
  else {
   if (FUNC_19(VAR_41[VAR_42], "-help") == 0) {
    FUNC_4("\t-interlace x  Generate Falcon screen only every X frame\n");
    FUNC_4("\t-joyswap      Exchange joysticks\n");
    FUNC_4("\t-videl        direct VIDEL programming (Falcon/VGA only)\n");
    FUNC_4("\t-delta        delta screen output (differences only)\n");
   }

   VAR_41[VAR_43++] = VAR_41[VAR_42];
  }

  if (VAR_56) {
   FUNC_4("Missing argument for '%s'", VAR_41[VAR_42]);
   return VAR_4;
  }
 }

 *VAR_40 = VAR_43;


 for (VAR_42 = 0; VAR_42 < 256; VAR_42++) {
  int VAR_57 = (VAR_2[VAR_42] >> 18) & 0x3f;
  int VAR_58 = (VAR_2[VAR_42] >> 10) & 0x3f;
  int VAR_59 = (VAR_2[VAR_42] >> 2) & 0x3f;
  VAR_24[VAR_42] = (VAR_57 << 26) | (VAR_58 << 18) | (VAR_59 << 2);
  VAR_15[VAR_42] = (VAR_57 << 16) | (VAR_58 << 8) | VAR_59;
  VAR_22[VAR_42][0] = VAR_57 * 1000 / 64;
  VAR_22[VAR_42][1] = VAR_58 * 1000 / 64;
  VAR_22[VAR_42][2] = VAR_59 * 1000 / 64;
 }


 if (!FUNC_15('_VDO', &VAR_54))
  VAR_54 = 0;
 switch(VAR_54 >> 16) {
  case 2:
   VAR_37 = VAR_18;
   break;
  case 3:
   VAR_37 = VAR_3;
   break;
  case 4:
   VAR_37 = VAR_9;
   VAR_21 = VAR_4;
   break;
  default:
   VAR_37 = VAR_19;
   VAR_21 = VAR_4;
 }


 if (FUNC_15('NOVA', &VAR_12))
  VAR_21 = VAR_4;
 else if (FUNC_15('fVDI', ((void*)0)))
  VAR_21 = VAR_4;


 FUNC_12();
 FUNC_17(VAR_8, ((void*)0));
 FUNC_23(0, VAR_20, &VAR_46, &VAR_47, &VAR_48, &VAR_49);

 VAR_26 = FUNC_16(&VAR_50, &VAR_51, &VAR_52, &VAR_53);

 VAR_44[0] = FUNC_2() + 2;
 for(VAR_42 = 1;VAR_42 < 10;VAR_44[VAR_42++] = 1);
 VAR_44[10] = 2;
 FUNC_21(VAR_44, &VAR_26, VAR_45);


 VAR_7 = VAR_45[0] + 1;
 VAR_5 = VAR_45[1] + 1;

 FUNC_22(VAR_26, 1, VAR_45);
 VAR_6 = VAR_45[4];

 if (VAR_25 && VAR_37 == VAR_3) {
  VAR_21 = VAR_17;


  VAR_31 = (ULONG *) VAR_30;
  FUNC_10(VAR_33);

  if ((VAR_29 = (UBYTE *)FUNC_6((336UL*VAR_16), 0)) == ((void*)0)) {
   FUNC_14(1, "[1][Error allocating video memory ][ OK ]");
   FUNC_13(-1);
  }


  VAR_32 = 1;
  VAR_39 = VAR_35 = 336;
  VAR_38 = VAR_34 = VAR_16;
 }
 else if (VAR_6 == 8 && VAR_7 >= 320 && VAR_5 >= VAR_16) {

  VAR_39 = VAR_7;
  VAR_38 = VAR_5;






   VAR_35 = 320;
  VAR_34 = VAR_16;
 }
 else {


  if (VAR_37 == VAR_3)
   FUNC_14(1, "[1][Atari800 emulator needs 320x240|or higher res. in 256 colors.|Or use the -videl switch.][ OK ]");
  else
   FUNC_14(1, "[1][Atari800 emulator needs 320x240|or higher res. in 256 colors.][ OK ]");
  FUNC_13(-1);
 }


 FUNC_20(VAR_26);
 FUNC_24(VAR_0);

 FUNC_18();
 VAR_13 = FUNC_5();
 VAR_14 = FUNC_7();

 VAR_28 = FUNC_3(-1, -1, -1);



 FUNC_0();






 FUNC_8();

 return VAR_17;
}
