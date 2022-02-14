
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int LSR; int IIR; } ;
struct TYPE_4__ {scalar_t__ outbuffersize; TYPE_1__ reg; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;

void FUNC_1()
{
   if (VAR_0->outbuffersize > 0)
   {

      VAR_0->reg.LSR |= 0x01;


      VAR_0->reg.IIR = 0x4;
      FUNC_0();
  }
}
