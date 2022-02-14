
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isdoingcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int,int*) ;
 TYPE_1__* VAR_3 ;

void FUNC_2(signed char VAR_4[],signed char VAR_5[],int VAR_6)
{
  int VAR_7;

  for(VAR_7=0;VAR_7<VAR_1;VAR_7++) {
    if(VAR_7!=VAR_0&&VAR_5[VAR_7]>=0) {
      if(VAR_6==0||!((VAR_3[VAR_6-1].isdoingcp>>VAR_7)&1)||VAR_4[VAR_7]!=VAR_5[VAR_7]||VAR_2[VAR_6]) {
        if(((VAR_3[VAR_6].isdoingcp>>VAR_7)&1)&&VAR_5[VAR_7]<64&&VAR_5[VAR_7]>=0) {
          int VAR_8;
          if(FUNC_1(VAR_7,VAR_6,&VAR_8)) {
            FUNC_0(VAR_8,VAR_7);
          }
        }
      }
    }
  }
}
