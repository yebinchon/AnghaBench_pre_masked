
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer_tgcr; int timer_tmr1; int timer_tcn1; unsigned char timer_trr1; int timer_ter1; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_0 (int,int ,int ,char*,int *) ;
 int FUNC_1 (int ,int *) ;
 unsigned char VAR_13 ;
 int VAR_14 ;

void FUNC_2(void)
{
  unsigned char VAR_15;
  unsigned short VAR_16;
  VAR_16 = VAR_12->timer_tgcr & 0xfff0;
  VAR_12->timer_tgcr = VAR_16;


  VAR_15 = 8;
  VAR_12->timer_tmr1 = 0x001a |
                           (unsigned short)((VAR_15 - 1) << 8);

  VAR_12->timer_tcn1 = 0x0000;

  VAR_12->timer_trr1 = (VAR_13/ VAR_15) / VAR_1;

  VAR_12->timer_ter1 = 0x0003;


  FUNC_1(VAR_0, &VAR_11);


  VAR_16 = (VAR_12->timer_tgcr & 0xfff0) | 0x0001;
  VAR_12->timer_tgcr = VAR_16;
}
