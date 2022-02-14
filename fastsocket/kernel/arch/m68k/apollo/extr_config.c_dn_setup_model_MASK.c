
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int * VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (char*,...) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

void FUNC_2(void) {


 FUNC_1("Apollo hardware found: ");
 FUNC_1("[%s]\n", VAR_14[VAR_13 - 133]);

 switch(VAR_13) {
  case 128:
   FUNC_0("Unknown apollo model");
   break;
  case 133:
  case 132:
   VAR_19=VAR_11;
   VAR_18=VAR_10;
   VAR_16=VAR_8;
   VAR_17=VAR_9;
   VAR_15=VAR_7;
   VAR_21=VAR_12;
   break;
  case 130:
   VAR_19=VAR_4;
   VAR_20=VAR_5;
   VAR_18=VAR_3;
   VAR_16=VAR_1;
   VAR_17=VAR_2;
   VAR_15=VAR_0;
   VAR_21=VAR_6;
   break;
  case 129:
   FUNC_0("Apollo model not yet supported");
   break;
  case 131:
   VAR_19=VAR_4;
   VAR_20=VAR_5;
   VAR_18=VAR_3;
   VAR_16=VAR_1;
   VAR_17=VAR_2;
   VAR_15=VAR_0;
   VAR_21=VAR_6;
   break;
  default:
   FUNC_0("Undefined apollo model");
   break;
 }


}
