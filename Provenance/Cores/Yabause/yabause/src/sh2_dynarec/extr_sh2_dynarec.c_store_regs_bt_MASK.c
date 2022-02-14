
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
 int FUNC_0 (char,int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (char*,int) ;

void FUNC_3(signed char VAR_6[],u32 VAR_7,int VAR_8)
{
  if(FUNC_1(VAR_8))
  {
    int VAR_9=(VAR_8-VAR_4)>>1;
    int VAR_10;
    for(VAR_10=0;VAR_10<VAR_2;VAR_10++) {
      if(VAR_10!=VAR_1) {
        if(VAR_6[VAR_10]>=0 && VAR_6[VAR_10]!=VAR_0) {
          if(VAR_6[VAR_10]!=VAR_3[VAR_9].regmap_entry[VAR_10] || !((VAR_3[VAR_9].dirty>>VAR_10)&1) ) {
            if((VAR_7>>VAR_10)&1) {
              if(!((VAR_5[VAR_9]>>VAR_6[VAR_10])&1)) {
                FUNC_0(VAR_6[VAR_10],VAR_10);
              }
            }
          }
        }
      }
    }
  }
  else
  {

    FUNC_2(VAR_6,VAR_7);
  }
}
