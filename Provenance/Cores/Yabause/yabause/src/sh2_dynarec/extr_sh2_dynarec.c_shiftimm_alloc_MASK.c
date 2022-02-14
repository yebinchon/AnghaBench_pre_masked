
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {long long u; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (struct regstat*,int,int ) ;
 int FUNC_1 (struct regstat*,int ) ;
 int FUNC_2 (struct regstat*,int ) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

void FUNC_3(struct regstat *VAR_8,int VAR_9)
{
  FUNC_1(VAR_8,VAR_5[VAR_9]);
  FUNC_1(VAR_8,VAR_7[VAR_9]);
  FUNC_0(VAR_8,VAR_9,VAR_5[VAR_9]);
  FUNC_0(VAR_8,VAR_9,VAR_7[VAR_9]);
  FUNC_2(VAR_8,VAR_7[VAR_9]);
  if(VAR_2[VAR_9]==4) {
    if(VAR_3[VAR_9]<6) {
      if(VAR_3[VAR_9]<4||VAR_4[VAR_9]<2) {

        if(!(VAR_8->u&(1LL<<VAR_1))) {
          FUNC_0(VAR_8,VAR_9,VAR_0);
          FUNC_2(VAR_8,VAR_0);
        }
      }
      else {
        FUNC_0(VAR_8,VAR_9,VAR_0);
        FUNC_2(VAR_8,VAR_0);
      }
    }
  }
  if(VAR_2[VAR_9]==2&VAR_3[VAR_9]==13) {
    FUNC_1(VAR_8,VAR_6[VAR_9]);
    FUNC_0(VAR_8,VAR_9,VAR_6[VAR_9]);
  }
}
