
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int command5_bits; int (* write_byte ) (int ,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4, unsigned int VAR_5,
        unsigned int VAR_6)
{
 int VAR_7;

 for (VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++) {

  VAR_3->command5_bits &= ~VAR_1;

  if (VAR_5 & (1 << (VAR_6 - VAR_7)))
   VAR_3->command5_bits |= VAR_2;
  else
   VAR_3->command5_bits &= ~VAR_2;
  FUNC_2(1);
  VAR_3->write_byte(VAR_3->command5_bits,
        VAR_4->iobase + VAR_0);

  VAR_3->command5_bits |= VAR_1;
  FUNC_2(1);
  VAR_3->write_byte(VAR_3->command5_bits,
        VAR_4->iobase + VAR_0);
 }
}
