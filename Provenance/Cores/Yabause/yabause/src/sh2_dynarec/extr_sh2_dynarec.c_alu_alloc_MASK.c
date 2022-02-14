
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regstat*,int,int ) ;
 int FUNC_1 (struct regstat*,int,int) ;
 int FUNC_2 (struct regstat*,int ) ;
 int FUNC_3 (struct regstat*,int ) ;
 int* VAR_1 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

void FUNC_5(struct regstat *VAR_7,int VAR_8)
{
  if(VAR_2[VAR_8]==2) {
    FUNC_0(VAR_7,VAR_8,VAR_4[VAR_8]);
    FUNC_0(VAR_7,VAR_8,VAR_5[VAR_8]);
    FUNC_2(VAR_7,VAR_5[VAR_8]);
    if(VAR_3[VAR_8]>8&&VAR_3[VAR_8]<=11) {
      FUNC_0(VAR_7,VAR_8,VAR_6[VAR_8]);
    }
    else
    {
      FUNC_0(VAR_7,VAR_8,VAR_0);
      FUNC_3(VAR_7,VAR_0);


      if(VAR_3[VAR_8]==8) {
        FUNC_1(VAR_7,VAR_8,-1);
        VAR_1[VAR_8]=1;
      }
      if(VAR_3[VAR_8]==12) {
        FUNC_1(VAR_7,VAR_8,-1);
        VAR_1[VAR_8]=1;
      }
    }
  }
  if(VAR_2[VAR_8]==3) {
    FUNC_0(VAR_7,VAR_8,VAR_4[VAR_8]);
    FUNC_0(VAR_7,VAR_8,VAR_5[VAR_8]);
    FUNC_2(VAR_7,VAR_5[VAR_8]);
    if(VAR_3[VAR_8]<8) {
      FUNC_0(VAR_7,VAR_8,VAR_0);
      FUNC_3(VAR_7,VAR_0);
      FUNC_1(VAR_7,VAR_8,-1);
      VAR_1[VAR_8]=1;
    }else{
      FUNC_0(VAR_7,VAR_8,VAR_6[VAR_8]);
      if(VAR_3[VAR_8]&3) {
        FUNC_0(VAR_7,VAR_8,VAR_0);
        FUNC_3(VAR_7,VAR_0);

        if((VAR_3[VAR_8]&3)==3) {

          FUNC_1(VAR_7,VAR_8,-1);
          VAR_1[VAR_8]=1;
        }
      }
    }
  }
  if(VAR_2[VAR_8]==4) {

    FUNC_0(VAR_7,VAR_8,VAR_4[VAR_8]);
    if(VAR_3[VAR_8]==0) FUNC_3(VAR_7,VAR_6[VAR_8]);
    FUNC_0(VAR_7,VAR_8,VAR_0);
    FUNC_3(VAR_7,VAR_0);
    if(VAR_3[VAR_8]>0) {
      FUNC_1(VAR_7,VAR_8,-1);
      VAR_1[VAR_8]=1;
    }
  }
  if(VAR_2[VAR_8]==6) {
    if(FUNC_4(VAR_4[VAR_8],VAR_8)) FUNC_0(VAR_7,VAR_8,VAR_4[VAR_8]);
    FUNC_0(VAR_7,VAR_8,VAR_6[VAR_8]);
    if(VAR_3[VAR_8]==8||VAR_3[VAR_8]==9) {
      FUNC_1(VAR_7,VAR_8,-1);
      VAR_1[VAR_8]=1;
    }
    if(VAR_3[VAR_8]==10) {

      FUNC_0(VAR_7,VAR_8,VAR_0);
      FUNC_3(VAR_7,VAR_0);
    }
  }
  FUNC_2(VAR_7,VAR_4[VAR_8]);
  FUNC_2(VAR_7,VAR_6[VAR_8]);
  FUNC_3(VAR_7,VAR_6[VAR_8]);
}
