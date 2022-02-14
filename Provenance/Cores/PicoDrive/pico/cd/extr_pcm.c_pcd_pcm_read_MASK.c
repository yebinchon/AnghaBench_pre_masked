
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int update_cycles; TYPE_1__* ch; } ;
struct TYPE_6__ {TYPE_2__ pcm; } ;
struct TYPE_4__ {unsigned int addr; } ;


 unsigned int VAR_0 ;
 TYPE_3__* VAR_1 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;

unsigned int FUNC_2(unsigned int VAR_2)
{
  unsigned int VAR_3, VAR_4 = FUNC_0();
  if ((int)(VAR_4 - VAR_1->pcm.update_cycles) >= 384)
    FUNC_1(VAR_4);

  VAR_3 = VAR_1->pcm.ch[(VAR_2 >> 1) & 7].addr >> VAR_0;
  if (VAR_2 & 1)
    VAR_3 >>= 8;

  return VAR_3 & 0xff;
}
