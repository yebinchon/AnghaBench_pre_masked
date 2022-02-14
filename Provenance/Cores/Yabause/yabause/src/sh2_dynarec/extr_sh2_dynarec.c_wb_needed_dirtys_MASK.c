
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* regmap_entry; int dirty; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (char,int) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

void FUNC_1(signed char VAR_6[],u32 VAR_7,int VAR_8)
{
  int VAR_9;
  int VAR_10=(VAR_8-VAR_5)>>1;
  for(VAR_9=0;VAR_9<VAR_2;VAR_9++) {
    if(VAR_9!=VAR_1) {
      if(VAR_6[VAR_9]>=0) {
        if(VAR_6[VAR_9]!=VAR_0) {
          if((VAR_6[VAR_9]==VAR_4[VAR_10].regmap_entry[VAR_9] && ((VAR_4[VAR_10].dirty>>VAR_9)&1)) || VAR_6[VAR_9]==VAR_3 || VAR_6[VAR_9]==15) {
            if((VAR_7>>VAR_9)&1) {
              FUNC_0(VAR_6[VAR_9],VAR_9);
            }
          }
        }
      }
    }
  }
}
