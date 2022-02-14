
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_range_code; } ;


 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,char*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
          volatile uint16_t * VAR_1, unsigned int VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0)->ao_range_code[VAR_3];

 if (VAR_2 > 1)
  FUNC_1(VAR_0, "bug! bad channel?");
 if (VAR_4 & ~0x3)
  FUNC_1(VAR_0, "bug! bad range code?");

 *VAR_1 &= ~(0x3 << (2 * VAR_2));
 *VAR_1 |= VAR_4 << (2 * VAR_2);
}
