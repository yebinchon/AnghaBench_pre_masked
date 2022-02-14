
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* caldac; int command5_bits; int (* write_byte ) (int,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_5, unsigned int VAR_6,
    unsigned int VAR_7)
{
 if (VAR_7 == VAR_4->caldac[VAR_6])
  return;
 VAR_4->caldac[VAR_6] = VAR_7;


 VAR_4->command5_bits &=
     ~VAR_0 & ~VAR_2 & ~VAR_3;
 FUNC_4(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_1);


 FUNC_0(VAR_5, VAR_6, 4);

 FUNC_0(VAR_5, VAR_7, 8);


 VAR_4->command5_bits |= VAR_0;
 FUNC_4(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_1);
 VAR_4->command5_bits &= ~VAR_0;
 FUNC_4(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_1);
}
