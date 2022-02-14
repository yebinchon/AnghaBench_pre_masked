
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regstat {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (struct regstat*,int,int ) ;
 int FUNC_1 (struct regstat*,int ) ;
 int FUNC_2 (struct regstat*,int ) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (struct regstat*,int ,int) ;
 unsigned int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;

void FUNC_4(struct regstat *VAR_6,int VAR_7)
{
  u32 VAR_8;
  FUNC_0(VAR_6,VAR_7,VAR_2[VAR_7]);
  VAR_8=((VAR_5+VAR_7*2+4)&~3)+VAR_0[VAR_7];
  if(VAR_1[VAR_7]==12) {
    FUNC_3(VAR_6,VAR_2[VAR_7],VAR_8);
  }else if((unsigned)((VAR_8-VAR_5)>>1)<VAR_3) {
    if(VAR_1[VAR_7]==9) {
      VAR_8=(VAR_5+VAR_7*2+4)+VAR_0[VAR_7];
      FUNC_3(VAR_6,VAR_2[VAR_7],(s16)VAR_4[(VAR_8-VAR_5)>>1]);
    }
    else
      FUNC_3(VAR_6,VAR_2[VAR_7],(VAR_4[(VAR_8-VAR_5)>>1]<<16)+VAR_4[(VAR_8+2-VAR_5)>>1]);
  }
  else {


    FUNC_1(VAR_6,VAR_2[VAR_7]);
  }
  FUNC_2(VAR_6,VAR_2[VAR_7]);
}
