
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cd_img_type ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;
 unsigned long FUNC_6 (int,int ) ;
 int VAR_7 ;
 int FUNC_7 (char*,scalar_t__*) ;
 scalar_t__* VAR_8 ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_9 ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__*,char*) ;
 int FUNC_13 (char*,int ) ;

int FUNC_14(void)
{
 int VAR_10 = 0, VAR_11 = 1;
 unsigned long VAR_12 = 0;
 char VAR_13[VAR_1], *VAR_14;
 FILE *VAR_15;

 FUNC_8();

 if ( (VAR_15 = FUNC_4(VAR_7, "rb")) )
 {
  FUNC_3(VAR_15);
  FUNC_13(VAR_13, VAR_7);
 }
 else
 {
  FUNC_5(VAR_13, VAR_1);
 }


 FUNC_1(VAR_10);
 while (FUNC_10(1) & VAR_2) FUNC_9(50);

 for (;;)
 {
  FUNC_1(VAR_10);
  VAR_12 = FUNC_6(VAR_4|VAR_3|VAR_2, 0);
  if(VAR_12 & VAR_4 ) { VAR_10--; if (VAR_10 < 0) VAR_10 = VAR_11; }
  if(VAR_12 & VAR_3) { VAR_10++; if (VAR_10 > VAR_11) VAR_10 = 0; }
  if(VAR_12 & VAR_2) {
   switch (VAR_10) {
    case 0:
     VAR_14 = FUNC_11(VAR_13);
     if (VAR_14) {
      int VAR_16 = -1;
      cd_img_type VAR_17;
      VAR_17 = FUNC_2(((void*)0), VAR_9);
      if (VAR_17 != VAR_0)
       VAR_16 = FUNC_0(VAR_9, VAR_17);
      if (VAR_16 != 0) {
       FUNC_12(VAR_8, "Load failed, invalid CD image?");
       FUNC_7("%s\n", VAR_8);
       continue;
      }
      VAR_6 = VAR_5;
      return 1;
     }
     break;
    case 1:
     VAR_6 = VAR_5;
     return 0;
   }
  }
  VAR_8[0] = 0;
 }
}
