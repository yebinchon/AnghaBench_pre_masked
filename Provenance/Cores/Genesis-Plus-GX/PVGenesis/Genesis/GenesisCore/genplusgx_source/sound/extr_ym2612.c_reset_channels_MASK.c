
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* SLOT; scalar_t__* op1_out; scalar_t__ mem_value; } ;
struct TYPE_4__ {int Incr; void* vol_out; void* volume; int state; scalar_t__ ssgn; scalar_t__ phase; scalar_t__ key; } ;
typedef TYPE_2__ FM_CH ;


 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_0(FM_CH *VAR_2 , int VAR_3 )
{
  int VAR_4,VAR_5;

  for( VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++ )
  {
    VAR_2[VAR_4].mem_value = 0;
    VAR_2[VAR_4].op1_out[0] = 0;
    VAR_2[VAR_4].op1_out[1] = 0;
    for(VAR_5 = 0 ; VAR_5 < 4 ; VAR_5++ )
    {
      VAR_2[VAR_4].SLOT[VAR_5].Incr = -1;
      VAR_2[VAR_4].SLOT[VAR_5].key = 0;
      VAR_2[VAR_4].SLOT[VAR_5].phase = 0;
      VAR_2[VAR_4].SLOT[VAR_5].ssgn = 0;
      VAR_2[VAR_4].SLOT[VAR_5].state = VAR_0;
      VAR_2[VAR_4].SLOT[VAR_5].volume = VAR_1;
      VAR_2[VAR_4].SLOT[VAR_5].vol_out = VAR_1;
    }
  }
}
