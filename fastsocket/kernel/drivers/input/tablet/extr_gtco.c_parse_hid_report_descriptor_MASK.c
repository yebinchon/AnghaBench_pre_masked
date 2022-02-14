
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtco {int max_X; int min_X; int max_Y; int min_Y; int maxtilt_X; int mintilt_X; int maxtilt_Y; int mintilt_Y; int maxpressure; int minpressure; int usage; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;


 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(struct gtco *VAR_4, char * VAR_5,
     int VAR_6)
{
 int VAR_7, VAR_8 = 0;


 __u8 VAR_9;
 __u8 VAR_10;
 __u8 VAR_11;
 __u8 VAR_12;
 __u8 VAR_13 = 0;
 __u16 VAR_14 = 0;
 __u32 VAR_15 = 0;


 int VAR_16 = 0;
 __u32 VAR_17 = 0;


 __u32 VAR_18[VAR_3];
 __u32 VAR_19[VAR_3];


 char VAR_20 = 'x';
 char VAR_21[12];
 int VAR_22 = 0;
 char VAR_23[10] = "";


 FUNC_3("======>>>>>>PARSE<<<<<<======");


 while (VAR_8 < VAR_6) {
  VAR_9 = VAR_5[VAR_8];


  VAR_8++;


  VAR_10 = FUNC_0(VAR_9);
  switch (VAR_10) {
  case 1:
   VAR_13 = VAR_5[VAR_8];
   break;
  case 2:
   VAR_14 = FUNC_4(&VAR_5[VAR_8]);
   break;
  case 3:
   VAR_10 = 4;
   VAR_15 = FUNC_5(&VAR_5[VAR_8]);
   break;
  }


  VAR_8 += VAR_10;


  VAR_11 = FUNC_1(VAR_9);
  VAR_12 = FUNC_2(VAR_9);
  switch (VAR_12) {
  case 128:
   FUNC_6(VAR_21, "");
   switch (VAR_11) {

   case 132:







    VAR_20 = 'I';
    if (VAR_13 == 2)
     FUNC_6(VAR_21, "Variable");
    else if (VAR_13 == 3)
     FUNC_6(VAR_21, "Var|Const");

    FUNC_3("::::: Saving Report: %d input #%d Max: 0x%X(%d) Min:0x%X(%d) of %d bits",
        VAR_18[140], VAR_16,
        VAR_18[147], VAR_18[147],
        VAR_18[146], VAR_18[146],
        VAR_18[139] * VAR_18[141]);
    switch (VAR_16) {
    case 0:
     FUNC_3("GER: X Usage: 0x%x", VAR_17);
     if (VAR_4->max_X == 0) {
      VAR_4->max_X = VAR_18[147];
      VAR_4->min_X = VAR_18[146];
     }
     break;

    case 1:
     FUNC_3("GER: Y Usage: 0x%x", VAR_17);
     if (VAR_4->max_Y == 0) {
      VAR_4->max_Y = VAR_18[147];
      VAR_4->min_Y = VAR_18[146];
     }
     break;

    default:

     if (VAR_17 == VAR_0) {
      if (VAR_4->maxtilt_X == 0) {
       VAR_4->maxtilt_X = VAR_18[147];
       VAR_4->mintilt_X = VAR_18[146];
      }
     }


     if (VAR_17 == VAR_1) {
      if (VAR_4->maxtilt_Y == 0) {
       VAR_4->maxtilt_Y = VAR_18[147];
       VAR_4->mintilt_Y = VAR_18[146];
      }
     }


     if (VAR_17 == VAR_2) {
      if (VAR_4->maxpressure == 0) {
       VAR_4->maxpressure = VAR_18[147];
       VAR_4->minpressure = VAR_18[146];
      }
     }

     break;
    }

    VAR_16++;
    break;

   case 131:
    VAR_20 = 'O';
    break;

   case 133:
    VAR_20 = 'F';
    break;

   case 134:
    VAR_20 = 'S';

    if (VAR_13 == 0) {
     FUNC_3("======>>>>>> Physical");
     FUNC_6(VAR_21, "Physical");
    } else
     FUNC_3("======>>>>>>");


    VAR_22++;
    for (VAR_7 = 0; VAR_7 < VAR_22; VAR_7++)
     VAR_23[VAR_7] = '-';
    VAR_23[VAR_7] = 0;


    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
     VAR_19[VAR_7] = VAR_18[VAR_7];

    break;

   case 135:
    FUNC_3("<<<<<<======");
    VAR_20 = 'E';
    VAR_22--;
    for (VAR_7 = 0; VAR_7 < VAR_22; VAR_7++)
     VAR_23[VAR_7] = '-';
    VAR_23[VAR_7] = 0;


    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
     VAR_18[VAR_7] = VAR_19[VAR_7];

    break;
   }

   switch (VAR_10) {
   case 1:
    FUNC_3("%sMAINTAG:(%d) %c SIZE: %d Data: %s 0x%x",
        VAR_23, VAR_11, VAR_20, VAR_10, VAR_21, VAR_13);
    break;

   case 2:
    FUNC_3("%sMAINTAG:(%d) %c SIZE: %d Data: %s 0x%x",
        VAR_23, VAR_11, VAR_20, VAR_10, VAR_21, VAR_14);
    break;

   case 4:
    FUNC_3("%sMAINTAG:(%d) %c SIZE: %d Data: %s 0x%x",
        VAR_23, VAR_11, VAR_20, VAR_10, VAR_21, VAR_15);
    break;
   }
   break;

  case 130:
   switch (VAR_11) {
   case 136:




    if (VAR_4->usage == 0)
     VAR_4->usage = VAR_13;

    FUNC_6(VAR_21, "USAGE");
    break;

   case 146:
    FUNC_6(VAR_21, "LOG_MIN");
    break;

   case 147:
    FUNC_6(VAR_21, "LOG_MAX");
    break;

   case 144:
    FUNC_6(VAR_21, "PHYS_MIN");
    break;

   case 145:
    FUNC_6(VAR_21, "PHYS_MAX");
    break;

   case 137:
    FUNC_6(VAR_21, "EXP");
    break;

   case 138:
    FUNC_6(VAR_21, "UNIT");
    break;

   case 139:
    FUNC_6(VAR_21, "REPORT_SZ");
    break;

   case 140:
    FUNC_6(VAR_21, "REPORT_ID");

    VAR_16 = 0;
    break;

   case 141:
    FUNC_6(VAR_21, "REPORT_CNT");
    break;

   case 142:
    FUNC_6(VAR_21, "PUSH");
    break;

   case 143:
    FUNC_6(VAR_21, "POP");
    break;
   }



   if (VAR_11 < VAR_3) {
    switch (VAR_10) {
    case 1:
     FUNC_3("%sGLOBALTAG:%s(%d) SIZE: %d Data: 0x%x",
         VAR_23, VAR_21, VAR_11, VAR_10, VAR_13);
     VAR_18[VAR_11] = VAR_13;
     break;

    case 2:
     FUNC_3("%sGLOBALTAG:%s(%d) SIZE: %d Data: 0x%x",
         VAR_23, VAR_21, VAR_11, VAR_10, VAR_14);
     VAR_18[VAR_11] = VAR_14;
     break;

    case 4:
     FUNC_3("%sGLOBALTAG:%s(%d) SIZE: %d Data: 0x%x",
         VAR_23, VAR_21, VAR_11, VAR_10, VAR_15);
     VAR_18[VAR_11] = VAR_15;
     break;
    }
   } else {
    FUNC_3("%sGLOBALTAG: ILLEGAL TAG:%d SIZE: %d ",
        VAR_23, VAR_11, VAR_10);
   }
   break;

  case 129:
   switch (VAR_11) {
   case 136:
    FUNC_6(VAR_21, "USAGE");

    VAR_17 = VAR_13;
    break;

   case 146:
    FUNC_6(VAR_21, "MIN");
    break;

   case 147:
    FUNC_6(VAR_21, "MAX");
    break;

   default:
    FUNC_6(VAR_21, "UNKNOWN");
    break;
   }

   switch (VAR_10) {
   case 1:
    FUNC_3("%sLOCALTAG:(%d) %s SIZE: %d Data: 0x%x",
        VAR_23, VAR_11, VAR_21, VAR_10, VAR_13);
    break;

   case 2:
    FUNC_3("%sLOCALTAG:(%d) %s SIZE: %d Data: 0x%x",
        VAR_23, VAR_11, VAR_21, VAR_10, VAR_14);
    break;

   case 4:
    FUNC_3("%sLOCALTAG:(%d) %s SIZE: %d Data: 0x%x",
        VAR_23, VAR_11, VAR_21, VAR_10, VAR_15);
    break;
   }

   break;
  }
 }
}
