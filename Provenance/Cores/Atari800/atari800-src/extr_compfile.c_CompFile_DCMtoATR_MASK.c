
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int current_sector; int sectorcount; int sectorsize; int * fp; } ;
typedef int FILE ;
typedef TYPE_1__ ATR_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(FILE *VAR_2, FILE *VAR_3)
{
 int VAR_4;
 int VAR_5;
 ATR_Info VAR_6;
 int VAR_7;
 int VAR_8;
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 != 0xf9 && VAR_4 != 0xfa) {
  FUNC_0("This is not a DCM image");
  return VAR_1;
 }
 VAR_5 = FUNC_3(VAR_2);
 if ((VAR_5 & 0x1f) != 1) {
  FUNC_0("Expected pass one first");
  if (VAR_4 == 0xf9)
   FUNC_0("It seems that DCMs of a multi-file archive have been combined in wrong order");
  return VAR_1;
 }
 VAR_6.fp = VAR_3;
 VAR_6.current_sector = 1;
 switch ((VAR_5 >> 5) & 3) {
 case 0:
  VAR_6.sectorcount = 720;
  VAR_6.sectorsize = 128;
  break;
 case 1:
  VAR_6.sectorcount = 720;
  VAR_6.sectorsize = 256;
  break;
 case 2:
  VAR_6.sectorcount = 1040;
  VAR_6.sectorsize = 128;
  break;
 default:
  FUNC_0("Unrecognized density");
  return VAR_1;
 }
 if (!FUNC_5(&VAR_6))
  return VAR_1;
 VAR_7 = VAR_5;
 for (;;) {

  int VAR_9;
  if (!FUNC_2(VAR_2, &VAR_6))
   return VAR_1;
  if (VAR_7 & 0x80)
   break;
  VAR_9 = FUNC_3(VAR_2);
  if (VAR_9 != VAR_4) {
   if (VAR_9 == VAR_0 && VAR_4 == 0xf9) {
    FUNC_0("Multi-part archive error.");
    FUNC_0("To process these files, you must first combine the files into a single file.");



    FUNC_0("cat file1.dcm file2.dcm file3.dcm >newfile.dcm from the shell");

   }
   return VAR_1;
  }
  VAR_7 = FUNC_3(VAR_2);
  if ((VAR_7 ^ VAR_5) & 0x60) {
   FUNC_0("Density changed inside DCM archive?");
   return VAR_1;
  }

 }
 VAR_8 = VAR_6.current_sector - 1;
 if (VAR_8 <= VAR_6.sectorcount)
  return FUNC_4(&VAR_6, VAR_6.sectorcount + 1);

 VAR_6.sectorcount = VAR_8;
 FUNC_1(VAR_3);
 return FUNC_5(&VAR_6);
}
