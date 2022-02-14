
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* phase_lut; struct TYPE_4__* bitinverse_buffer; struct TYPE_4__* interleave_buffer; } ;
typedef TYPE_1__ fft_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(fft_t *VAR_0)
{
   if (!VAR_0)
      return;

   FUNC_0(VAR_0->interleave_buffer);
   FUNC_0(VAR_0->bitinverse_buffer);
   FUNC_0(VAR_0->phase_lut);
   FUNC_0(VAR_0);
}
