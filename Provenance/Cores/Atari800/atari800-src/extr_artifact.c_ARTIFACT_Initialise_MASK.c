
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(int *VAR_8, char *VAR_9[])
{
 int VAR_10;
 int VAR_11;

 for (VAR_10 = VAR_11 = 1; VAR_10 < *VAR_8; VAR_10++) {
  int VAR_12 = (VAR_10 + 1 < *VAR_8);
  int VAR_13 = VAR_3;

  if (FUNC_4(VAR_9[VAR_10], "-ntsc-artif") == 0) {
   if (VAR_12) {
    int VAR_14 = FUNC_0(VAR_9[++VAR_10], VAR_5, VAR_1);
    if (VAR_14 < 0) {
     FUNC_1("Invalid value for -ntsc-artif");
     return VAR_3;
    }
    VAR_6 = VAR_14;
   } else VAR_13 = VAR_4;
  }
  else if (FUNC_4(VAR_9[VAR_10], "-pal-artif") == 0) {
   if (VAR_12) {
    int VAR_15 = FUNC_0(VAR_9[++VAR_10], VAR_5, VAR_1);
    if (VAR_15 < 0) {
     FUNC_1("Invalid value for -pal-artif");
     return VAR_3;
    }
    VAR_7 = VAR_15;
   } else VAR_13 = VAR_4;
  }

  else {
   if (FUNC_4(VAR_9[VAR_10], "-help") == 0) {
    FUNC_1("\t-ntsc-artif none|ntsc-old|ntsc-new|ntsc-full");
    FUNC_1("\t                 Select video artifacts for NTSC");
    FUNC_1("\t-pal-artif none|pal-simple|pal-accu");
    FUNC_1("\t                 Select video artifacts for PAL");
   }
   VAR_9[VAR_11++] = VAR_9[VAR_10];
  }

  if (VAR_13) {
   FUNC_1("Missing argument for '%s'", VAR_9[VAR_10]);
   return VAR_3;
  }
 }
 *VAR_8 = VAR_11;


 FUNC_2(VAR_2);
 FUNC_3(VAR_0, VAR_3);
 return VAR_4;
}
