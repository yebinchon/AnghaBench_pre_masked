
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* regmap; int isdoingcp; int wasdoingcp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int** VAR_9 ;
 int* VAR_10 ;
 scalar_t__* VAR_11 ;
 int FUNC_1 (int) ;
 int* VAR_12 ;
 TYPE_1__* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;

int FUNC_2(int VAR_18, int VAR_19, int *VAR_20)
{
  int VAR_21=VAR_13[VAR_19].regmap[VAR_18];
  while(VAR_19<VAR_16-1) {
    if(VAR_13[VAR_19+1].regmap[VAR_18]!=VAR_21) break;
    if(!((VAR_13[VAR_19+1].isdoingcp>>VAR_18)&1)) break;
    if(VAR_8[VAR_19+1]) break;
    VAR_19++;
  }
  if(VAR_19<VAR_16-1) {
    if(VAR_11[VAR_19]==VAR_6||VAR_11[VAR_19]==VAR_4||VAR_11[VAR_19]==VAR_0||VAR_11[VAR_19]==VAR_5) {
      *VAR_20=VAR_9[VAR_19][VAR_18];
      return 1;
    }
    if(!VAR_8[VAR_19+1]) {
      if(VAR_11[VAR_19+1]==VAR_6||VAR_11[VAR_19+1]==VAR_4||VAR_11[VAR_19+1]==VAR_5) {

        if(VAR_11[VAR_19+2]==VAR_3&&VAR_14[VAR_19+2]==VAR_21&&VAR_15[VAR_19+2]==VAR_21&&((VAR_13[VAR_19+1].wasdoingcp>>VAR_18)&1))
        {
          if(VAR_7[VAR_19+2]==VAR_1||VAR_7[VAR_19+2]==VAR_2) {
            *VAR_20=VAR_9[VAR_19][VAR_18];
            return 1;
          }





          *VAR_20=VAR_9[VAR_19][VAR_18]+VAR_10[VAR_19+2];
          if(FUNC_0(*VAR_20)) *VAR_20=FUNC_1(*VAR_20);
          if((VAR_12[VAR_19+2]&3)==0) *VAR_20^=1;
          return 1;
        }
      }
      if(VAR_11[VAR_19+1]==VAR_3&&VAR_14[VAR_19+1]==VAR_21&&VAR_15[VAR_19+1]==VAR_21)
      {
        if(VAR_7[VAR_19+1]==VAR_1||VAR_7[VAR_19+1]==VAR_2) {
          *VAR_20=VAR_9[VAR_19][VAR_18];
          return 1;
        }





        *VAR_20=VAR_9[VAR_19][VAR_18]+VAR_10[VAR_19+1];
        if(FUNC_0(*VAR_20)) *VAR_20=FUNC_1(*VAR_20);
        if((VAR_12[VAR_19+1]&3)==0) *VAR_20^=1;

        return 1;
      }
    }
  }
  *VAR_20=VAR_9[VAR_19][VAR_18];

  if(VAR_19==VAR_16-1) return 1;
  return !((VAR_17[VAR_19+1]>>VAR_21)&1);
}
