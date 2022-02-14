
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ plx9080_iobase; scalar_t__ plx_intcsr_bits; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_1)
{
 FUNC_0(VAR_1)->plx_intcsr_bits = 0;
 FUNC_1(FUNC_0(VAR_1)->plx_intcsr_bits,
        FUNC_0(VAR_1)->plx9080_iobase + VAR_0);
}
