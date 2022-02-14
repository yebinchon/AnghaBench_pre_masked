
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pcm_t ;
struct TYPE_5__ {scalar_t__ cycles; TYPE_1__* chan; int ram; int bank; } ;
struct TYPE_4__ {int pan; } ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 TYPE_2__ VAR_1 ;

void FUNC_2(void)
{

  FUNC_1(&VAR_1, 0, sizeof(pcm_t));


  VAR_1.bank = VAR_1.ram;


  VAR_1.chan[0].pan = 0xff;
  VAR_1.chan[1].pan = 0xff;
  VAR_1.chan[2].pan = 0xff;
  VAR_1.chan[3].pan = 0xff;
  VAR_1.chan[4].pan = 0xff;
  VAR_1.chan[5].pan = 0xff;
  VAR_1.chan[6].pan = 0xff;
  VAR_1.chan[7].pan = 0xff;


  VAR_1.cycles = 0;


  FUNC_0(VAR_0[0]);
  FUNC_0(VAR_0[1]);
}
