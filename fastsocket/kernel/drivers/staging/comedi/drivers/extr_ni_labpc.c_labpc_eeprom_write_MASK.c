
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned int* eeprom_data; int command5_bits; int (* write_byte ) (int,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_4 ;
 int const FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int const,int const) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int) ;

__attribute__((used)) static unsigned int FUNC_10(struct comedi_device *VAR_5,
           unsigned int VAR_6, unsigned int VAR_7)
{
 const int VAR_8 = 0x6;
 const int VAR_9 = 0x2;
 const int VAR_10 = 8;
 const int VAR_11 = 0x1;
 const int VAR_12 = 10000;
 int VAR_13;


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  if ((FUNC_1(VAR_5) & VAR_11) ==
      0)
   break;
 }
 if (VAR_13 == VAR_12) {
  FUNC_0(VAR_5, "eeprom write timed out");
  return -VAR_3;
 }

 VAR_4->eeprom_data[VAR_6] = VAR_7;


 VAR_4->command5_bits &= ~VAR_1;
 FUNC_9(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_0);
 VAR_4->command5_bits |= VAR_1 | VAR_2;
 FUNC_9(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_0);


 FUNC_2(VAR_5, VAR_8, VAR_10);
 VAR_4->command5_bits &= ~VAR_1;
 FUNC_9(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_0);


 VAR_4->command5_bits |= VAR_1;
 FUNC_9(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_0);
 FUNC_2(VAR_5, VAR_9, VAR_10);

 FUNC_2(VAR_5, VAR_6, VAR_10);

 FUNC_2(VAR_5, VAR_7, VAR_10);
 VAR_4->command5_bits &= ~VAR_1;
 FUNC_9(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_0);


 VAR_4->command5_bits &= ~VAR_1 & ~VAR_2;
 FUNC_9(1);
 VAR_4->write_byte(VAR_4->command5_bits, VAR_5->iobase + VAR_0);

 return 0;
}
