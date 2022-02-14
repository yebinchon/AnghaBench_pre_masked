
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int minor; } ;
struct TYPE_4__ {unsigned int i8254_osc_base; } ;
struct TYPE_3__ {unsigned int ai_ns_min; unsigned int ai_pacer_min; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,...) ;
 unsigned int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (unsigned int,unsigned int*,unsigned int*,unsigned int*,unsigned int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(char VAR_3, struct comedi_device *VAR_4,
      struct comedi_subdevice *VAR_5,
      unsigned int *VAR_6, unsigned int *VAR_7,
      unsigned int VAR_8, int VAR_9,
      unsigned int *VAR_10, unsigned int *VAR_11,
      char VAR_12, unsigned int VAR_13)
{
 FUNC_0
     ("adl_pci9118 EDBG: BGN: pci9118_calc_divisors(%d,%d,.,%u,%u,%u,%d,.,.,,%u,%u)\n",
      VAR_3, VAR_4->minor, *VAR_6, *VAR_7, VAR_8, VAR_9, VAR_12, VAR_13);
 switch (VAR_3) {
 case 1:
 case 4:
  if (*VAR_7 < VAR_2->ai_ns_min)
   *VAR_7 = VAR_2->ai_ns_min;
  FUNC_1(VAR_1->i8254_osc_base, VAR_10, VAR_11,
       VAR_7, VAR_8 & VAR_0);
  FUNC_0("OSC base=%u div1=%u div2=%u timer1=%u\n",
   VAR_1->i8254_osc_base, *VAR_10, *VAR_11, *VAR_6);
  break;
 case 2:
  if (*VAR_7 < VAR_2->ai_ns_min)
   *VAR_7 = VAR_2->ai_ns_min;
  FUNC_0("1 div1=%u div2=%u timer1=%u timer2=%u\n", *VAR_10, *VAR_11,
   *VAR_6, *VAR_7);
  *VAR_10 = *VAR_7 / VAR_1->i8254_osc_base;
  FUNC_0("2 div1=%u div2=%u timer1=%u timer2=%u\n", *VAR_10, *VAR_11,
   *VAR_6, *VAR_7);
  if (*VAR_10 < VAR_2->ai_pacer_min)
   *VAR_10 = VAR_2->ai_pacer_min;
  FUNC_0("3 div1=%u div2=%u timer1=%u timer2=%u\n", *VAR_10, *VAR_11,
   *VAR_6, *VAR_7);
  *VAR_11 = *VAR_6 / VAR_1->i8254_osc_base;
  FUNC_0("4 div1=%u div2=%u timer1=%u timer2=%u\n", *VAR_10, *VAR_11,
   *VAR_6, *VAR_7);
  *VAR_11 = *VAR_11 / *VAR_10;
  FUNC_0("5 div1=%u div2=%u timer1=%u timer2=%u\n", *VAR_10, *VAR_11,
   *VAR_6, *VAR_7);
  if (*VAR_11 < VAR_9)
   *VAR_11 = VAR_9;
  FUNC_0("6 div1=%u div2=%u timer1=%u timer2=%u\n", *VAR_10, *VAR_11,
   *VAR_6, *VAR_7);

  *VAR_7 = *VAR_10 * VAR_1->i8254_osc_base;

  if (VAR_12 & (VAR_13 == 0))
   if (*VAR_11 < (VAR_9 + 2))
    *VAR_11 = VAR_9 + 2;

  FUNC_0("7 div1=%u div2=%u timer1=%u timer2=%u\n", *VAR_10, *VAR_11,
   *VAR_6, *VAR_7);
  *VAR_6 = *VAR_10 * *VAR_11 * VAR_1->i8254_osc_base;
  FUNC_0("OSC base=%u div1=%u div2=%u timer1=%u timer2=%u\n",
   VAR_1->i8254_osc_base, *VAR_10, *VAR_11, *VAR_6, *VAR_7);
  break;
 }
 FUNC_0("adl_pci9118 EDBG: END: pci9118_calc_divisors(%u,%u)\n",
  *VAR_10, *VAR_11);
}
