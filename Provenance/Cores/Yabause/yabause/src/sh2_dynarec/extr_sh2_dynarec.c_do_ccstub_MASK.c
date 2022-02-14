
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pointer ;
struct TYPE_4__ {int* regmap; int dirty; } ;
struct TYPE_3__ {int* regmap; int wasdoingcp; int* regmap_entry; int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int* VAR_13 ;
 TYPE_2__* VAR_14 ;
 scalar_t__* VAR_15 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_16 ;
 int* VAR_17 ;
 int** VAR_18 ;
 int FUNC_3 (size_t,int,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int*,scalar_t__) ;
 int* VAR_19 ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__* VAR_20 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int*) ;
 int FUNC_16 (int*,int*,int) ;
 int FUNC_17 (int*,int*) ;
 int FUNC_18 (int) ;
 int VAR_21 ;
 scalar_t__* VAR_22 ;
 int* VAR_23 ;
 int* VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_19 (char*) ;
 int** VAR_26 ;
 TYPE_1__* VAR_27 ;
 scalar_t__* VAR_28 ;
 scalar_t__* VAR_29 ;
 scalar_t__* VAR_30 ;
 int FUNC_20 (int,int) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int** VAR_36 ;
 int FUNC_21 (int*,int ) ;
 int FUNC_22 (int*,int ,int) ;

void FUNC_23(int VAR_37)
{
  int VAR_38;
  FUNC_14(256);
  FUNC_0("do_ccstub %x\n",VAR_35+VAR_36[VAR_37][4]*2);
  FUNC_20(VAR_36[VAR_37][1],(pointer)VAR_25);
  VAR_38=VAR_36[VAR_37][4];
  if(VAR_36[VAR_37][6]==VAR_6) {
    if(VAR_20[VAR_38+1]==VAR_5&&VAR_28[VAR_38+1]==VAR_29[VAR_38+1]&&VAR_12[VAR_38+1]!=VAR_2&&VAR_12[VAR_38+1]!=VAR_3) {
      int VAR_39=FUNC_12(VAR_27[VAR_38].regmap,VAR_28[VAR_38+1]);
      if(VAR_39>=0&&((VAR_27[VAR_38].wasdoingcp>>VAR_39)&1))
      {
        FUNC_8(VAR_18[VAR_38][VAR_39],VAR_39);
      }
    }
    FUNC_21(VAR_27[VAR_38].regmap_entry,VAR_27[VAR_38].dirty);
  }
  else if(VAR_36[VAR_37][6]!=VAR_11) {
    FUNC_21(VAR_14[VAR_38].regmap,VAR_14[VAR_38].dirty);
  }
  else {
    if(FUNC_13(VAR_13[VAR_38]))
      FUNC_22(VAR_14[VAR_38].regmap,VAR_14[VAR_38].dirty,VAR_13[VAR_38]);
  }
  if(VAR_36[VAR_37][5]!=-1)
  {

    FUNC_8(VAR_36[VAR_37][5],0);
    FUNC_10(0,VAR_31?(int)&VAR_33:(int)&VAR_21);
  }
  else
  {

    if(VAR_20[VAR_38]==VAR_8)
    {
      int VAR_40=FUNC_12(VAR_14[VAR_38].regmap,VAR_28[VAR_38]);
      if(VAR_28[VAR_38]==VAR_29[VAR_38+1]||VAR_28[VAR_38]==VAR_30[VAR_38+1]) {
        VAR_40=FUNC_12(VAR_14[VAR_38].regmap,VAR_9);
      }
      else if(VAR_22[VAR_38]==0&&VAR_23[VAR_38]==3) {
        VAR_40=FUNC_12(VAR_14[VAR_38].regmap,VAR_9);
      }
      else if(VAR_22[VAR_38]==0&&VAR_23[VAR_38]==11&&VAR_24[VAR_38]==2) {
        VAR_40=FUNC_12(VAR_14[VAR_38].regmap,VAR_9);
      }
      FUNC_10(VAR_40,VAR_31?(int)&VAR_33:(int)&VAR_21);
    }
    else {FUNC_19("Unknown branch type in do_ccstub\n");FUNC_11(1);}
  }

  if(VAR_36[VAR_37][6]==VAR_6) FUNC_1(VAR_27[VAR_38].regmap[VAR_4]==VAR_0||VAR_27[VAR_38].regmap[VAR_4]==-1);
  else FUNC_1(VAR_14[VAR_38].regmap[VAR_4]==VAR_0||VAR_14[VAR_38].regmap[VAR_4]==-1);
  if(VAR_36[VAR_37][3]) FUNC_3(VAR_4,VAR_1*VAR_36[VAR_37][3],VAR_4);
  if(VAR_31) {
    FUNC_6(VAR_10);
    FUNC_5((pointer)VAR_16);
  }
  else {
    FUNC_4((pointer)VAR_32);
  }
  if(VAR_36[VAR_37][3]&&VAR_36[VAR_37][6]!=VAR_6) FUNC_3(VAR_4,-VAR_1*VAR_36[VAR_37][3],VAR_4);
  if(VAR_36[VAR_37][6]==VAR_11) {
    if(FUNC_13(VAR_13[VAR_38]))
      FUNC_17(VAR_14[VAR_38].regmap,VAR_27[(VAR_13[VAR_38]-VAR_35)>>1].regmap_entry);
    else if(VAR_20[VAR_38]==VAR_8) {
      if(FUNC_12(VAR_14[VAR_38].regmap,VAR_9)>=0)
        FUNC_9(VAR_31?(int)&VAR_33:(int)&VAR_21,FUNC_12(VAR_14[VAR_38].regmap,VAR_9));
      else
        FUNC_7(VAR_28[VAR_38],FUNC_12(VAR_14[VAR_38].regmap,VAR_28[VAR_38]));
    }
  }else if(VAR_36[VAR_37][6]==VAR_7) {
    if(VAR_38<VAR_34-2) FUNC_17(VAR_14[VAR_38].regmap,VAR_26[VAR_38+2]);
    else FUNC_15(VAR_14[VAR_38].regmap);
  }else{
    if(VAR_36[VAR_37][6]==VAR_6) {
      if(VAR_15[VAR_38]||VAR_38==0) VAR_17[VAR_38]=(pointer)VAR_25;
      else {
        if(VAR_36[VAR_37][3]) FUNC_3(VAR_4,-VAR_1*VAR_36[VAR_37][3],VAR_4);
        FUNC_15(VAR_27[VAR_38].regmap);
        FUNC_16(VAR_26[VAR_38],VAR_27[VAR_38].regmap,VAR_38);
        if(VAR_20[VAR_38+1]==VAR_5&&VAR_28[VAR_38+1]==VAR_29[VAR_38+1]&&VAR_12[VAR_38+1]!=VAR_2&&VAR_12[VAR_38+1]!=VAR_3) {
          int VAR_41=FUNC_12(VAR_27[VAR_38].regmap,VAR_28[VAR_38+1]);
          if(VAR_41>=0&&((VAR_27[VAR_38].wasdoingcp>>VAR_41)&1))
          {



            {
              int VAR_42=VAR_18[VAR_38][VAR_41]+VAR_19[VAR_38+1];
              if(FUNC_2(VAR_42)) VAR_42=FUNC_18(VAR_42);
              if((VAR_23[VAR_38+1]&3)==0) VAR_42^=1;
              FUNC_8(VAR_42,VAR_41);
            }
          }
        }
        VAR_17[VAR_38]=0;
      }
    }
    else FUNC_15(VAR_14[VAR_38].regmap);
  }
  FUNC_5(VAR_36[VAR_37][2]);
}
