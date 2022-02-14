
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regmap_entry; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (int ,int) ;
 scalar_t__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;

int FUNC_1(int VAR_10, int VAR_11, int VAR_12)
{
  int VAR_13,VAR_14;
  for(VAR_13=0;VAR_13<9;VAR_13++)
  {
    if(VAR_10+VAR_13>=VAR_7) {
      VAR_13=VAR_7-VAR_10-1;
      break;
    }
    if(VAR_5[VAR_10+VAR_13]==VAR_3||VAR_5[VAR_10+VAR_13]==VAR_1)
    {

      VAR_13++;
      break;
    }
  }
  VAR_14=0;
  if(VAR_10>0){
    if(VAR_5[VAR_10-1]==VAR_3||VAR_5[VAR_10-1]==VAR_0||VAR_5[VAR_10-1]==VAR_2)
      VAR_14--;
  }
  for(;VAR_14<VAR_13;VAR_14++)
  {
    if(VAR_11<64&&((VAR_9[VAR_10+VAR_14]>>VAR_11)&1)) return VAR_12;
    if(VAR_10+VAR_14>=0&&(VAR_5[VAR_10+VAR_14]==VAR_3||VAR_5[VAR_10+VAR_14]==VAR_0||VAR_5[VAR_10+VAR_14]==VAR_2))
    {
      if(VAR_4[VAR_10+VAR_14]>=VAR_8 && VAR_4[VAR_10+VAR_14]<(VAR_8+VAR_10*2))
      {
        int VAR_15=(VAR_4[VAR_10+VAR_14]-VAR_8)>>1;
        int VAR_16=FUNC_0(VAR_6[VAR_15].regmap_entry,VAR_11);
        if(VAR_16>=0) return VAR_16;


      }
    }
  }
  return VAR_12;
}
