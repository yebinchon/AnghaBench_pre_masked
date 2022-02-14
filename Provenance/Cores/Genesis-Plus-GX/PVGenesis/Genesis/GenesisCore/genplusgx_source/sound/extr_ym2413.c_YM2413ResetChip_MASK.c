
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* SLOT; } ;
typedef TYPE_2__ YM2413_OPLL_CH ;
struct TYPE_6__ {int noise_rng; TYPE_2__* P_CH; int ** inst_tab; scalar_t__ eg_cnt; scalar_t__ eg_timer; } ;
struct TYPE_4__ {int volume; int state; scalar_t__ wavetable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int ** VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_1(void)
{
  int VAR_4,VAR_5;
  int VAR_6;

  VAR_3 = 0;
  VAR_3 = 0;

  VAR_3 = 1;



  for (VAR_6=0; VAR_6<19; VAR_6++)
  {
    for (VAR_4=0; VAR_4<8; VAR_4++)
    {
      VAR_3[VAR_6][VAR_4] = VAR_2[VAR_6][VAR_4];
    }
  }



  FUNC_0(0x0f,0);
  for(VAR_6 = 0x3f ; VAR_6 >= 0x10 ; VAR_6-- ) FUNC_0(VAR_6,0x00);


  for( VAR_4 = 0 ; VAR_4 < 9 ; VAR_4++ )
  {
    YM2413_OPLL_CH *VAR_7 = &VAR_3[VAR_4];
    for(VAR_5 = 0 ; VAR_5 < 2 ; VAR_5++ )
    {

      VAR_7->SLOT[VAR_5].wavetable = 0;
      VAR_7->SLOT[VAR_5].state = VAR_0;
      VAR_7->SLOT[VAR_5].volume = VAR_1;
    }
  }
}
