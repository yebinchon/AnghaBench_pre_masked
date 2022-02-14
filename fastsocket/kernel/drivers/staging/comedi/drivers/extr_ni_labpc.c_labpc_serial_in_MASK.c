
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int status2_bits; int (* read_byte ) (scalar_t__) ;int command5_bits; int (* write_byte ) (int ,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static unsigned int FUNC_4(struct comedi_device *VAR_5)
{
 unsigned int VAR_6 = 0;
 int VAR_7;
 const int VAR_8 = 8;

 for (VAR_7 = 1; VAR_7 <= VAR_8; VAR_7++) {

  VAR_4->command5_bits |= VAR_2;
  FUNC_3(1);
  VAR_4->write_byte(VAR_4->command5_bits,
        VAR_5->iobase + VAR_0);

  VAR_4->command5_bits &= ~VAR_2;
  FUNC_3(1);
  VAR_4->write_byte(VAR_4->command5_bits,
        VAR_5->iobase + VAR_0);

  FUNC_3(1);
  VAR_4->status2_bits =
      VAR_4->read_byte(VAR_5->iobase + VAR_3);
  if (VAR_4->status2_bits & VAR_1) {
   VAR_6 |= 1 << (VAR_8 - VAR_7);
  }
 }

 return VAR_6;
}
