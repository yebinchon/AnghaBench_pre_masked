
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* regmap_entry; int dirty; } ;


 char VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 scalar_t__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;

int FUNC_0(signed char VAR_10[],u32 VAR_11,int VAR_12)
{
  if(VAR_12>=VAR_8 && VAR_12<VAR_8+VAR_7*2-2)
  {
    int VAR_13=(VAR_12-VAR_8)>>1;
    int VAR_14;
    if(VAR_6[VAR_13].regmap_entry[VAR_2]!=VAR_0) return 0;
    for(VAR_14=0;VAR_14<VAR_3;VAR_14++)
    {
      if(VAR_14!=VAR_1)
      {
        if(VAR_10[VAR_14]!=VAR_6[VAR_13].regmap_entry[VAR_14])
        {
          if(VAR_6[VAR_13].regmap_entry[VAR_14]>=0&&VAR_6[VAR_13].regmap_entry[VAR_14]<VAR_4)
          {
            return 0;
          }
          else
          if((VAR_11>>VAR_14)&1)
          {
            if(!((VAR_9[VAR_13]>>VAR_10[VAR_14])&1))
              return 0;
          }
        }
        else
        if(VAR_10[VAR_14]>=0)
        {
          if(!((VAR_6[VAR_13].dirty>>VAR_14)&1))
          {
            if((VAR_11>>VAR_14)&1)
            {
              if(!((VAR_9[VAR_13]>>VAR_10[VAR_14])&1))
              {

                return 0;
              }
            }
          }
        }
      }
    }

    if(VAR_5[VAR_13]) return 0;
  }
  else
  {
    int VAR_15;
    for(VAR_15=0;VAR_15<VAR_3;VAR_15++)
    {
      if(VAR_15!=VAR_1)
      {
        if(VAR_10[VAR_15]>=0)
        {
          if(VAR_15!=VAR_2||VAR_10[VAR_15]!=VAR_0)
          {
            if((VAR_11>>VAR_15)&1)
            {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}
