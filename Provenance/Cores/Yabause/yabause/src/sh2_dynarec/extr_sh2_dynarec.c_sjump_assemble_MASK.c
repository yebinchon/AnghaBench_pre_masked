
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long u64 ;
typedef int u32 ;
struct regstat {char* regmap; int dirty; } ;
typedef int pointer ;
struct TYPE_2__ {char* regmap; long long u; int dirty; int regmap_entry; } ;


 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 long long VAR_5 ;
 long long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long long VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int,int,int ,int,int,int ,int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,struct regstat*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int* VAR_11 ;
 struct regstat* VAR_12 ;
 int* VAR_13 ;
 int FUNC_5 (int,char*,int*,int,int ,int) ;
 int FUNC_6 (int,struct regstat*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (long long,int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (char*,long long) ;
 int FUNC_18 (int) ;
 scalar_t__* VAR_14 ;
 scalar_t__* VAR_15 ;
 int FUNC_19 (char*,char*,long long,long long,long long) ;
 int FUNC_20 (char*,int ,int) ;
 int FUNC_21 (char*,int ,int) ;
 scalar_t__* VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 scalar_t__ VAR_19 ;
 TYPE_1__* VAR_20 ;
 long long* VAR_21 ;
 long long* VAR_22 ;
 long long* VAR_23 ;
 int FUNC_22 (int,int) ;
 scalar_t__* VAR_24 ;
 int VAR_25 ;
 int FUNC_23 (char*,int ,int) ;
 int FUNC_24 (char*,char*,int ,long long) ;

void FUNC_25(int VAR_26,struct regstat *VAR_27)
{
  signed char *VAR_28=VAR_27->regmap;
  int VAR_29;
  int VAR_30;
  int VAR_31;
  int VAR_32;
  int VAR_33=0,VAR_34=0;
  int VAR_35=0;
  int VAR_36=FUNC_18(VAR_11[VAR_26]);
  VAR_31=FUNC_21(VAR_12[VAR_26].regmap,VAR_12[VAR_26].dirty,VAR_11[VAR_26]);
  FUNC_3("match=%d\n",VAR_31);
  VAR_36=FUNC_18(VAR_11[VAR_26]);
  if(VAR_26==(VAR_11[VAR_26]-VAR_25)>>1) FUNC_3("idle loop\n");
  if(!VAR_31) VAR_35=1;




  if(VAR_16[VAR_26]) {
    VAR_32=FUNC_17(VAR_12[VAR_26].regmap,VAR_9);
  }
  else {
    VAR_32=FUNC_17(VAR_28,VAR_9);
  }

  VAR_29=FUNC_17(VAR_28,VAR_0);
  FUNC_4(VAR_29==VAR_4);

  if(VAR_16[VAR_26]) {
    u64 VAR_37;


    FUNC_5(VAR_26,VAR_20[VAR_26].regmap,&VAR_30,VAR_25+VAR_26*2,VAR_7,VAR_35);
    FUNC_2(VAR_26+1,VAR_27,VAR_20[VAR_26].regmap_entry);
    FUNC_6(VAR_26+1,VAR_27);
    VAR_37=VAR_20[VAR_26].u;
    VAR_37&=~((1LL<<VAR_21[VAR_26])|(1LL<<VAR_22[VAR_26]));
    FUNC_24(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_20[VAR_26].dirty,
                  VAR_37);
    FUNC_19(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_0,VAR_9,VAR_9);
    VAR_29=FUNC_17(VAR_12[VAR_26].regmap,VAR_0);
    FUNC_4(VAR_29==VAR_4);
    if(VAR_33)
      FUNC_23(VAR_12[VAR_26].regmap,VAR_12[VAR_26].dirty,VAR_11[VAR_26]);
    if(VAR_33) {
      FUNC_5(VAR_26,VAR_12[VAR_26].regmap,&VAR_30,VAR_11[VAR_26],VAR_10,0);
      if(VAR_26!=(VAR_11[VAR_26]-VAR_25)>>1 || VAR_24[VAR_26+1]!=0) {
        if(VAR_30) FUNC_8(VAR_29,VAR_2*(VAR_13[VAR_26]+2-VAR_30),VAR_29);
        FUNC_20(VAR_12[VAR_26].regmap,VAR_12[VAR_26].dirty,VAR_11[VAR_26]);
        if(VAR_36)
          FUNC_3("branch: internal\n");
        else
          FUNC_3("branch: external\n");
        if(VAR_36&&VAR_14[(VAR_11[VAR_26]-VAR_25)>>1]) {
          FUNC_7(VAR_26);
        }
        else {
          FUNC_1((int)VAR_19,VAR_11[VAR_26],VAR_36);
          FUNC_12(0);
        }



      }
    }
    else if(VAR_34) {
      int VAR_38;
      FUNC_9(VAR_2*(VAR_13[VAR_26]+2),VAR_29);
      VAR_38=(int)VAR_19;
      FUNC_14(0);
      FUNC_0(VAR_1,VAR_38,(int)VAR_19,0,VAR_26,VAR_25+VAR_26*2+4,VAR_8,0);
    }
    else {
      pointer VAR_39=0,VAR_40=0,VAR_41=0;

      if(VAR_30&&!VAR_35) FUNC_8(VAR_29,VAR_2*(VAR_13[VAR_26]-VAR_30),VAR_29);


      FUNC_4(VAR_32>=0);
      FUNC_16(VAR_32,1);
      if(VAR_18[VAR_26]==13)
      {
        if(VAR_35){
          VAR_40=(pointer)VAR_19;
          FUNC_11(1);
        }else{
          FUNC_1((int)VAR_19,VAR_11[VAR_26],VAR_36);
          FUNC_13(0);
        }
      }
      if(VAR_18[VAR_26]==15)
      {
        if(VAR_35){
          VAR_40=(pointer)VAR_19;
          FUNC_13(1);
        }else{
          FUNC_1((int)VAR_19,VAR_11[VAR_26],VAR_36);
          FUNC_11(0);
        }
      }
      if(VAR_35) {
        if(VAR_39) FUNC_22(VAR_39,(pointer)VAR_19);
        {
          if(VAR_30) FUNC_8(VAR_29,-VAR_2*VAR_30,VAR_29);
          FUNC_23(VAR_12[VAR_26].regmap,VAR_12[VAR_26].dirty,VAR_11[VAR_26]);
          FUNC_20(VAR_12[VAR_26].regmap,VAR_12[VAR_26].dirty,VAR_11[VAR_26]);
          if(VAR_36)
            FUNC_3("branch: internal\n");
          else
            FUNC_3("branch: external\n");
          if(VAR_36&&VAR_14[(VAR_11[VAR_26]-VAR_25)>>1]) {
            FUNC_7(VAR_26);
          }
          else {
            FUNC_1((int)VAR_19,VAR_11[VAR_26],VAR_36);
            FUNC_12(0);
          }
        }
        FUNC_22(VAR_40,(pointer)VAR_19);
      }

      if(VAR_41) FUNC_22(VAR_41,(pointer)VAR_19);
      if(VAR_30&&!VAR_35) FUNC_8(VAR_29,VAR_2*VAR_30,VAR_29);
    }
  }
  else
  {


    u64 VAR_42;
    pointer VAR_43=0,VAR_44=0,VAR_45=0;
    FUNC_5(VAR_26,VAR_20[VAR_26].regmap,&VAR_30,VAR_25+VAR_26*2,VAR_7,1);
    if(!VAR_33&&!VAR_34) {

      FUNC_4(VAR_32>=0);
      FUNC_16(VAR_32,1);
      if(VAR_18[VAR_26]==13)
      {
        VAR_44=(pointer)VAR_19;
        FUNC_11(2);
      }
      if(VAR_18[VAR_26]==15)
      {
        VAR_44=(pointer)VAR_19;
        FUNC_13(2);
      }
    }
    VAR_42=VAR_20[VAR_26].u;
    VAR_42&=~((1LL<<VAR_21[VAR_26+1])|(1LL<<VAR_22[VAR_26+1])|(1LL<<VAR_23[VAR_26+1]));

    if(!VAR_34) {
      if(VAR_43) FUNC_22(VAR_43,(int)VAR_19);
      FUNC_3("1:\n");
      FUNC_24(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_20[VAR_26].dirty,
                    VAR_42);

      FUNC_19(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_21[VAR_26+1],VAR_22[VAR_26+1],VAR_23[VAR_26+1]);
      FUNC_2(VAR_26+1,&VAR_12[VAR_26],0);
      if(VAR_15[VAR_26+1]==VAR_3) {
        if((VAR_17[VAR_26+1]|4)==4&&VAR_18[VAR_26+1]==15) {
          FUNC_19(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_6,VAR_5,VAR_5);
        }
      }
      FUNC_19(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_0,VAR_0,VAR_0);
      FUNC_6(VAR_26+1,&VAR_12[VAR_26]);
      VAR_29=FUNC_17(VAR_12[VAR_26].regmap,VAR_0);
      if(VAR_29==-1) {
        FUNC_15(VAR_0,VAR_29=VAR_4);

      }
      FUNC_4(VAR_29==VAR_4);
      FUNC_23(VAR_12[VAR_26].regmap,VAR_12[VAR_26].dirty,VAR_11[VAR_26]);

      FUNC_3("cycle count (adj)\n");

      if(VAR_30) FUNC_8(VAR_29,-VAR_2*VAR_30,VAR_29);
      FUNC_20(VAR_12[VAR_26].regmap,VAR_12[VAR_26].dirty,VAR_11[VAR_26]);
      if(VAR_36)
        FUNC_3("branch: internal\n");
      else
        FUNC_3("branch: external\n");
      if(VAR_36&&VAR_14[(VAR_11[VAR_26]-VAR_25)>>1]) {
        FUNC_7(VAR_26);
      }
      else {
        FUNC_1((int)VAR_19,VAR_11[VAR_26],VAR_36);
        FUNC_12(0);
      }
    }

    if(!VAR_33) {
      if(VAR_45) FUNC_22(VAR_45,(int)VAR_19);
      FUNC_22(VAR_44,(int)VAR_19);
      FUNC_3("2:\n");
      FUNC_24(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_20[VAR_26].dirty,
                    VAR_42);
      FUNC_19(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_21[VAR_26+1],VAR_22[VAR_26+1],VAR_23[VAR_26+1]);
      FUNC_2(VAR_26+1,&VAR_12[VAR_26],0);
      if(VAR_15[VAR_26+1]==VAR_3) {
        if((VAR_17[VAR_26+1]|4)==4&&VAR_18[VAR_26+1]==15) {
          FUNC_19(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_6,VAR_5,VAR_5);
        }
      }
      FUNC_19(VAR_20[VAR_26].regmap,VAR_12[VAR_26].regmap,VAR_0,VAR_0,VAR_0);
      FUNC_6(VAR_26+1,&VAR_12[VAR_26]);
    }
  }
}
