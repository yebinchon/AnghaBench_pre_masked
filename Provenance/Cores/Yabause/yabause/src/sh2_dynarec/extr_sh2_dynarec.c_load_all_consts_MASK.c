
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int isdoingcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_3 ;

void FUNC_1(signed char VAR_4[],u32 VAR_5,int VAR_6)
{
  int VAR_7;

  for(VAR_7=0;VAR_7<VAR_1;VAR_7++) {
    if(VAR_7!=VAR_0&&VAR_4[VAR_7]>=0&&((VAR_5>>VAR_7)&1)) {
      if(((VAR_3[VAR_6].isdoingcp>>VAR_7)&1)&&VAR_4[VAR_7]<64&&VAR_4[VAR_7]>=0) {
        int VAR_8=VAR_2[VAR_6][VAR_7];
        FUNC_0(VAR_8,VAR_7);
      }
    }
  }
}
