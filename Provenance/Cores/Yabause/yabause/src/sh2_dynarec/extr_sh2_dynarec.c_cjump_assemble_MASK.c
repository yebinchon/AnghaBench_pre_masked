
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct regstat {char* regmap; } ;
typedef scalar_t__ pointer ;
struct TYPE_4__ {int dirty; int regmap; } ;
struct TYPE_3__ {int dirty; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int,int ,int,int,int ,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int* VAR_8 ;
 TYPE_2__* VAR_9 ;
 int* VAR_10 ;
 int FUNC_4 (int,int ,int*,int,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int) ;
 scalar_t__* VAR_11 ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,int ,int) ;
 int* VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_15 ;
 int VAR_16 ;
 int FUNC_19 (int ,int ,int) ;

void FUNC_20(int VAR_17,struct regstat *VAR_18)
{
  signed char *VAR_19=VAR_18->regmap;
  int VAR_20;
  int VAR_21;
  int VAR_22;
  int VAR_23=0,VAR_24=0;
  int VAR_25;
  int VAR_26=0;
  int VAR_27;
  VAR_21=FUNC_17(VAR_14[VAR_17].regmap,VAR_14[VAR_17].dirty,VAR_8[VAR_17]);
  FUNC_2("match=%d\n",VAR_21);
  VAR_27=FUNC_15(VAR_8[VAR_17]);
  if(VAR_17==(VAR_8[VAR_17]-VAR_16)>>1) FUNC_2("idle loop\n");
  if(!VAR_21) VAR_26=1;



  VAR_22=FUNC_14(VAR_19,VAR_6);
  FUNC_3(VAR_22>=0);
  VAR_20=FUNC_14(VAR_19,VAR_0);
  FUNC_3(VAR_20==VAR_3);
  FUNC_4(VAR_17,VAR_14[VAR_17].regmap,&VAR_25,VAR_16+VAR_17*2,VAR_4,VAR_26);
  if(VAR_23)
    FUNC_19(VAR_9[VAR_17].regmap,VAR_9[VAR_17].dirty,VAR_8[VAR_17]);
  if(VAR_23) {
    FUNC_4(VAR_17,VAR_9[VAR_17].regmap,&VAR_25,VAR_8[VAR_17],VAR_7,0);
    if(VAR_17!=(VAR_8[VAR_17]-VAR_16)>>1 || VAR_15[VAR_17+1]!=0) {
      if(VAR_25) FUNC_6(VAR_20,VAR_2*(VAR_10[VAR_17]+2-VAR_25),VAR_20);
      FUNC_16(VAR_9[VAR_17].regmap,VAR_9[VAR_17].dirty,VAR_8[VAR_17]);
      if(VAR_27)
        FUNC_2("branch: internal\n");
      else
        FUNC_2("branch: external\n");
      if(VAR_27&&VAR_11[(VAR_8[VAR_17]-VAR_16)>>1]) {
        FUNC_5(VAR_17);
      }
      else {
        FUNC_1((int)VAR_13,VAR_8[VAR_17],VAR_27);
        FUNC_10(0);
      }



    }
  }
  else if(VAR_24) {
    int VAR_28;
    FUNC_7(VAR_2*(VAR_10[VAR_17]+2),VAR_20);
    VAR_28=(int)VAR_13;
    FUNC_12(0);
    FUNC_0(VAR_1,VAR_28,(int)VAR_13,0,VAR_17,VAR_16+VAR_17*2+4,VAR_5,0);
  }
  else {
    pointer VAR_29=0,VAR_30=0,VAR_31=0;

    if(VAR_25&&!VAR_26) FUNC_6(VAR_20,VAR_2*(VAR_10[VAR_17]-VAR_25),VAR_20);


    FUNC_13(VAR_22,1);
    if(VAR_12[VAR_17]==9)
    {
      if(VAR_26){
        VAR_30=(pointer)VAR_13;
        FUNC_9(1);
      }else{
        FUNC_1((int)VAR_13,VAR_8[VAR_17],VAR_27);
        FUNC_11(0);
      }
    }
    if(VAR_12[VAR_17]==11)
    {
      if(VAR_26){
        VAR_30=(pointer)VAR_13;
        FUNC_11(1);
      }else{
        FUNC_1((int)VAR_13,VAR_8[VAR_17],VAR_27);
        FUNC_9(0);
      }
    }
    if(VAR_26) {
      if(VAR_29) FUNC_18(VAR_29,(pointer)VAR_13);
      {
        if(VAR_25) FUNC_6(VAR_20,-VAR_2*VAR_25,VAR_20);
        FUNC_19(VAR_14[VAR_17].regmap,VAR_14[VAR_17].dirty,VAR_8[VAR_17]);
        FUNC_16(VAR_14[VAR_17].regmap,VAR_14[VAR_17].dirty,VAR_8[VAR_17]);
        if(VAR_27)
          FUNC_2("branch: internal\n");
        else
          FUNC_2("branch: external\n");
        if(VAR_27&&VAR_11[(VAR_8[VAR_17]-VAR_16)>>1]) {
          FUNC_5(VAR_17);
        }
        else {
          FUNC_1((int)VAR_13,VAR_8[VAR_17],VAR_27);
          FUNC_10(0);
        }
      }
      FUNC_18(VAR_30,(pointer)VAR_13);
    }


    if(VAR_25&&!VAR_26) FUNC_6(VAR_20,VAR_2*VAR_25,VAR_20);
  }
}
