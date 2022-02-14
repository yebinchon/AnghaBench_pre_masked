
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

void FUNC_1(signed char VAR_3[],signed char VAR_4[],u32 VAR_5,u32 VAR_6,u64 VAR_7)
{

  int VAR_8,VAR_9,VAR_10;
  for(VAR_8=0;VAR_8<VAR_1;VAR_8++) {
    if(VAR_8!=VAR_0) {
      VAR_9=VAR_3[VAR_8];
      if(((~VAR_7)>>(VAR_9&63))&1) {
        if(VAR_9>=0) {
          if(((VAR_5&~VAR_6)>>VAR_8)&1) {
            if(VAR_9>=0&&VAR_9<VAR_2) {
              FUNC_0(VAR_9,VAR_8);
            }
          }
        }
      }
    }
  }
}
