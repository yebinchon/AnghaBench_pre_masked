
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int volume; scalar_t__* audio; scalar_t__ loaded; int status; scalar_t__ lba; scalar_t__ index; scalar_t__ latency; scalar_t__ cycles; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_0(void)
{

  VAR_2.cycles = 0;


  VAR_2.latency = 0;


  VAR_2.index = 0;


  VAR_2.lba = 0;


  VAR_2.status = VAR_2.loaded ? VAR_0 : VAR_1;


  VAR_2.volume = 0x400;


  VAR_2.audio[0] = VAR_2.audio[1] = 0;
}
