
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ dac; int dac_cal1_bits; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_3, unsigned int VAR_4,
     unsigned int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 1; VAR_6 <= VAR_5; VAR_6++) {

  if (VAR_4 & (1 << (VAR_5 - VAR_6)))
   VAR_2->dac_cal1_bits |= VAR_1;
  else
   VAR_2->dac_cal1_bits &= ~VAR_1;
  FUNC_0(VAR_2->dac_cal1_bits, VAR_2->dac + VAR_0);
 }
}
