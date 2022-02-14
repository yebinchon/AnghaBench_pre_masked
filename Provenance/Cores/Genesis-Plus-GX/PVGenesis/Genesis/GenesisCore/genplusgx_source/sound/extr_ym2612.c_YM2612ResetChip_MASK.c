
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int TBL; int TAL; scalar_t__ TA; scalar_t__ TB; scalar_t__ TBC; scalar_t__ TAC; } ;
struct TYPE_5__ {scalar_t__ key_csm; } ;
struct TYPE_7__ {int LFO_AM; TYPE_2__ ST; TYPE_1__ SL3; scalar_t__ LFO_PM; scalar_t__ lfo_cnt; scalar_t__ lfo_timer; scalar_t__ lfo_timer_overflow; scalar_t__ eg_cnt; scalar_t__ eg_timer; } ;
struct TYPE_8__ {int * CH; TYPE_3__ OPN; scalar_t__ dacout; scalar_t__ dacen; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 TYPE_4__ VAR_0 ;

void FUNC_3(void)
{
  int VAR_1;

  VAR_0 = 0;
  VAR_0 = 0;

  VAR_0 = 0;
  VAR_0 = 0;
  VAR_0 = 0;
  VAR_0 = 126;
  VAR_0 = 0;

  VAR_0 = 0;
  VAR_0 = 0;

  VAR_0 = 0;

  VAR_0 = 0;
  VAR_0 = 0;

  FUNC_2(0x30);
  VAR_0 = 0;
  VAR_0 = 256 << 4;
  VAR_0 = 0;
  VAR_0 = 1024;

  FUNC_1(&VAR_0[0] , 6 );

  for(VAR_1 = 0xb6 ; VAR_1 >= 0xb4 ; VAR_1-- )
  {
    FUNC_0(VAR_1 ,0xc0);
    FUNC_0(VAR_1|0x100,0xc0);
  }
  for(VAR_1 = 0xb2 ; VAR_1 >= 0x30 ; VAR_1-- )
  {
    FUNC_0(VAR_1 ,0);
    FUNC_0(VAR_1|0x100,0);
  }
}
