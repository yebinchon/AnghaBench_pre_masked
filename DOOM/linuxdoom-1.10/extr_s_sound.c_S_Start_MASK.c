
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sfxinfo; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_2(void)
{
  int VAR_19;
  int VAR_20;



  for (VAR_19=0 ; VAR_19<VAR_18 ; VAR_19++)
    if (VAR_0[VAR_19].sfxinfo)
      FUNC_1(VAR_19);


  VAR_15 = 0;

  if (VAR_4 == VAR_1)
    VAR_20 = VAR_16 + VAR_3 - 1;
  else
  {
    int VAR_21[]=
    {


      VAR_14,
      VAR_12,
      VAR_13,
      VAR_6,
      VAR_11,
      VAR_8,
      VAR_10,
      VAR_9,
      VAR_7
    };

    if (VAR_2 < 4)
      VAR_20 = VAR_5 + (VAR_2-1)*9 + VAR_3-1;
    else
      VAR_20 = VAR_21[VAR_3-1];
    }





  FUNC_0(VAR_20, 1);

  VAR_17 = 15;
}
