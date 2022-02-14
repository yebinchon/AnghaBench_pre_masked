
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* regmap_entry; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (size_t,int,size_t) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,size_t) ;
 scalar_t__* VAR_6 ;
 TYPE_1__* VAR_7 ;

void FUNC_3(int VAR_8)
{
  int VAR_9;
  if(VAR_6[VAR_8]) FUNC_0(VAR_2,VAR_1,VAR_2);
  else if(VAR_5[VAR_8]) FUNC_0(VAR_2,-VAR_5[VAR_8]*VAR_1,VAR_2);
  if(VAR_7[VAR_8].regmap_entry[VAR_2]!=VAR_0) {
    FUNC_2(VAR_0,VAR_2);
  }

  for(VAR_9=0;VAR_9<VAR_3;VAR_9++) {
    if(VAR_7[VAR_8].regmap_entry[VAR_9]>=0&&VAR_7[VAR_8].regmap_entry[VAR_9]<VAR_4) {
      if(VAR_7[VAR_8].regmap_entry[VAR_9]!=VAR_0)
      {
        FUNC_1(VAR_7[VAR_8].regmap_entry[VAR_9],VAR_9);
      }
    }
  }
}
