
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int command5_bits; int (* write_byte ) (int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int const,int const) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static unsigned int FUNC_6(struct comedi_device *VAR_4,
          unsigned int VAR_5)
{
 unsigned int VAR_6;
 const int VAR_7 = 0x3;
 const int VAR_8 = 8;


 VAR_3->command5_bits &= ~VAR_1;
 FUNC_5(1);
 VAR_3->write_byte(VAR_3->command5_bits, VAR_4->iobase + VAR_0);
 VAR_3->command5_bits |= VAR_1 | VAR_2;
 FUNC_5(1);
 VAR_3->write_byte(VAR_3->command5_bits, VAR_4->iobase + VAR_0);


 FUNC_1(VAR_4, VAR_7, VAR_8);

 FUNC_1(VAR_4, VAR_5, VAR_8);

 VAR_6 = FUNC_0(VAR_4);


 VAR_3->command5_bits &= ~VAR_1 & ~VAR_2;
 FUNC_5(1);
 VAR_3->write_byte(VAR_3->command5_bits, VAR_4->iobase + VAR_0);

 return VAR_6;
}
