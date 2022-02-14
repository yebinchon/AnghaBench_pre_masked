
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char,int) ;
 scalar_t__ FUNC_3 (char*,char) ;

void FUNC_4(signed char VAR_3[],signed char VAR_4[],u32 VAR_5, u64 VAR_6)
{
  int VAR_7;
  for(VAR_7=0;VAR_7<VAR_1;VAR_7++) {
    if(VAR_7!=VAR_0) {
      if(VAR_3[VAR_7]!=VAR_4[VAR_7]) {
        if(VAR_3[VAR_7]>=0) {
          if((VAR_5>>VAR_7)&1) {
            if(!((VAR_6>>VAR_3[VAR_7])&1)) {
              int VAR_8;
              if((VAR_8=FUNC_3(VAR_4,VAR_3[VAR_7]))<0) {
                FUNC_2(VAR_3[VAR_7],VAR_7);
              }else{

                if(VAR_3[VAR_8]>=0)
                  if(FUNC_3(VAR_4,VAR_3[VAR_8])>=0)
                    FUNC_2(VAR_3[VAR_7],VAR_7);
              }
            }
          }
        }
      }
    }
  }

  for(VAR_7=0;VAR_7<VAR_1;VAR_7++) {
    if(VAR_7!=VAR_0) {
      if(VAR_3[VAR_7]!=VAR_4[VAR_7]) {
        if(VAR_3[VAR_7]>=0&&(VAR_3[VAR_7]&63)<VAR_2) {
          int VAR_9;
          if((VAR_9=FUNC_3(VAR_4,VAR_3[VAR_7]))>=0) {
            if(VAR_3[VAR_9]<0||FUNC_3(VAR_4,VAR_3[VAR_9])<0) {
              FUNC_1(VAR_7,VAR_9);
            }
          }
        }
      }
    }
  }

  for(VAR_7=0;VAR_7<VAR_1;VAR_7++) {
    if(VAR_7!=VAR_0) {
      if(VAR_3[VAR_7]!=VAR_4[VAR_7]) {
        if(VAR_3[VAR_7]>=0&&(VAR_3[VAR_7]&63)<VAR_2) {
          int VAR_10;
          if((VAR_10=FUNC_3(VAR_4,VAR_3[VAR_7]))>=0) {
            if(VAR_3[VAR_10]>=0) {
              if(FUNC_3(VAR_4,VAR_3[VAR_10])>=0) {
                FUNC_0(VAR_3[VAR_7],VAR_10);
              }
            }
          }
        }
      }
    }
  }
}
