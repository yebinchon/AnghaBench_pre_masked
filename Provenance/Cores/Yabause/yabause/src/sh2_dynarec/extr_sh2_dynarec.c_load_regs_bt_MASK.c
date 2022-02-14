
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* regmap_entry; } ;


 char VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char,int) ;
 int FUNC_2 (char,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

void FUNC_4(signed char VAR_7[],u32 VAR_8,int VAR_9)
{

  if(FUNC_3(VAR_9))
  {
    int VAR_10=(VAR_9-VAR_6)>>1;
    int VAR_11;

    if(VAR_7[VAR_2]!=VAR_0) {
      FUNC_0(VAR_7[VAR_2]==-1);
    }
    if(VAR_5[VAR_10].regmap_entry[VAR_2]!=VAR_0) {
      FUNC_2(VAR_0,VAR_2);
    }

    for(VAR_11=0;VAR_11<VAR_3;VAR_11++) {
      if(VAR_11!=VAR_1&&VAR_5[VAR_10].regmap_entry[VAR_11]>=0&&VAR_5[VAR_10].regmap_entry[VAR_11]<VAR_4) {
        if(VAR_7[VAR_11]!=VAR_5[VAR_10].regmap_entry[VAR_11] ) {
          if(VAR_5[VAR_10].regmap_entry[VAR_11]!=VAR_0)
          {
            FUNC_1(VAR_5[VAR_10].regmap_entry[VAR_11],VAR_11);
          }
        }
      }
    }
  }
}
