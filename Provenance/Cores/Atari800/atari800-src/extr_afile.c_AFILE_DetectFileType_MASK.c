
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * gzFile ;
typedef int UBYTE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int*,int,int,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *,int*,int) ;

int FUNC_9(const char *VAR_18)
{
 UBYTE VAR_19[4];
 int VAR_20;
 FILE *VAR_21 = FUNC_4(VAR_18, "rb");
 if (VAR_21 == ((void*)0))
  return VAR_8;
 if (FUNC_5(VAR_19, 1, 4, VAR_21) != 4) {
  FUNC_3(VAR_21);
  return VAR_8;
 }
 switch (VAR_19[0]) {
 case 0:
  if (VAR_19[1] == 0 && (VAR_19[2] != 0 || VAR_19[3] != 0) ) {
   FUNC_3(VAR_21);
   return VAR_3;
  }
  break;
 case 0x1f:
  if (VAR_19[1] == 0x8b) {

   FUNC_3(VAR_21);
   FUNC_1("\"%s\" is a compressed file.", VAR_18);
   FUNC_1("This executable does not support compressed files. You can uncompress this file");
   FUNC_1("with an external program that supports gzip (*.gz) files (e.g. gunzip)");
   FUNC_1("and then load into this emulator.");
   return VAR_8;
  }
  break;
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
  if ((VAR_19[1] >= '0' && VAR_19[1] <= '9') || VAR_19[1] == ' ') {
   FUNC_3(VAR_21);
   return VAR_9;
  }
  break;
 case 'A':
  if (VAR_19[1] == 'T' && VAR_19[2] == 'A' && VAR_19[3] == 'R') {
   FUNC_3(VAR_21);
   return VAR_12;
  }
  if (VAR_19[1] == 'T' && VAR_19[2] == '8' && VAR_19[3] == 'X') {
   FUNC_3(VAR_21);
   return VAR_2;
  }
  break;
 case 'C':
  if (VAR_19[1] == 'A' && VAR_19[2] == 'R' && VAR_19[3] == 'T') {
   FUNC_3(VAR_21);
   return VAR_5;
  }
  break;
 case 0x96:
  if (VAR_19[1] == 0x02) {
   FUNC_3(VAR_21);
   return VAR_0;
  }
  break;
 case 0xf9:
 case 0xfa:
  FUNC_3(VAR_21);
  return VAR_7;
 case 0xff:
  if (VAR_19[1] == 0xff && (VAR_19[2] != 0xff || VAR_19[3] != 0xff)) {
   FUNC_3(VAR_21);
   return VAR_14;
  }
  break;
 default:
  break;
 }
 VAR_20 = FUNC_2(VAR_21);
 FUNC_3(VAR_21);


 if ((VAR_20-16)%(128+12) == 0 &&
   VAR_19[0]*256 + VAR_19[1] == (VAR_20-16)/(128+12) &&
   VAR_19[2] == 'P') {



  return VAR_10;
 }

 if (VAR_20 >= 4 * 1024 && VAR_20 <= VAR_17
  && ((VAR_20 & (VAR_20 - 1)) == 0 || VAR_20 == 40 * 1024))
  return VAR_11;

 if ((VAR_19[1] << 7) == VAR_20)
  return VAR_4;
 if ((VAR_20 & 0x7f) == 0)
  return VAR_15;
 if (FUNC_0(VAR_19))
  return VAR_6;
 return VAR_8;
}
