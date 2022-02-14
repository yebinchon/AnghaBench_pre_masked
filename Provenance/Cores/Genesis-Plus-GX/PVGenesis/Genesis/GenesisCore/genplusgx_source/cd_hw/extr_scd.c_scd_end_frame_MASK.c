
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {unsigned int cycles; } ;
struct TYPE_8__ {scalar_t__ cycle; } ;
struct TYPE_13__ {TYPE_1__ poll; } ;
struct TYPE_9__ {scalar_t__ cycle; } ;
struct TYPE_12__ {unsigned int cycles; TYPE_2__ poll; } ;
struct TYPE_11__ {unsigned int stopwatch; TYPE_3__* regs; } ;
struct TYPE_10__ {int w; } ;


 unsigned int VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;

void FUNC_0(unsigned int VAR_5)
{

  int VAR_6 = (VAR_5 - VAR_4.stopwatch) / VAR_0;
  VAR_4.regs[0x0c>>1].w = (VAR_4.regs[0x0c>>1].w + VAR_6) & 0xfff;


  VAR_4.stopwatch += (VAR_6 * VAR_0) - VAR_5;


  VAR_3.cycles -= VAR_5;
  VAR_1.cycles -= VAR_5;


  VAR_2.poll.cycle = 0;
  VAR_3.poll.cycle = 0;
}
