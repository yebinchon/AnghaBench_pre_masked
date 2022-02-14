
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {scalar_t__* regmap; int isdoingcp; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (scalar_t__*,int ) ;
 int* VAR_3 ;
 int FUNC_10 (int) ;
 int* VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;

void FUNC_11(int VAR_7,struct regstat *VAR_8)
{
  int VAR_9,VAR_10,VAR_11=-1,VAR_12=-1;
  int VAR_13;
  int VAR_14=0;
  int VAR_15,VAR_16=0,VAR_17;
  unsigned int VAR_18;
  u32 VAR_19=0;
  VAR_9=FUNC_9(VAR_8->regmap,VAR_5[VAR_7]);
  VAR_13=VAR_3[VAR_7];
  for(VAR_18=0;VAR_18<VAR_2;VAR_18++) {
    if(VAR_8->regmap[VAR_18]>=0) VAR_19|=1<<VAR_18;
  }
  if(VAR_8->regmap[VAR_1]==VAR_0) VAR_19&=~(1<<VAR_1);
  if(VAR_9>=0) {
    if(!((VAR_8->isdoingcp>>VAR_9)&1)) {
      int VAR_20=0;

      FUNC_1(VAR_4[VAR_7]!=12);
      VAR_17=((VAR_6+VAR_7*2+4)&~3)+VAR_3[VAR_7];
      if(VAR_4[VAR_7]==9) VAR_17=(VAR_6+VAR_7*2+4)+VAR_3[VAR_7];
      FUNC_0("Can't do constant propagation, doing PC-relatve load\n");



      VAR_19&=~(1<<VAR_9);

      FUNC_1(FUNC_2(VAR_17));

      FUNC_3(FUNC_10(VAR_17),VAR_9);




      if(VAR_4[VAR_7]==9) {





        FUNC_5(0,VAR_9,VAR_9);


      }
      else {





        FUNC_7(0,VAR_9,VAR_9);

        FUNC_8(VAR_9,16,VAR_9);

      }
    }
  }
}
