
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mite; void** eeprom_buffer; scalar_t__ serial_number; } ;
struct TYPE_3__ {int daq_phys_addr; scalar_t__ mite_io_addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_4 ;
 void* FUNC_2 (int const) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_5)
{
 static const int VAR_6 = 0x400;
 static const unsigned VAR_7 = 10;
 static const int VAR_8 = 0x4;
 static const int VAR_9 = 0x4;
 unsigned VAR_10;
 unsigned VAR_11;
 unsigned VAR_12;
 int VAR_13;

 VAR_10 = FUNC_3(VAR_4->mite->mite_io_addr + VAR_0);
 VAR_11 = FUNC_3(VAR_4->mite->mite_io_addr + VAR_1);
 VAR_12 = FUNC_3(VAR_4->mite->mite_io_addr + VAR_2);
 FUNC_4(0x0, VAR_4->mite->mite_io_addr + VAR_0);
 FUNC_4(((0x80 | VAR_7) | VAR_4->mite->daq_phys_addr),
        VAR_4->mite->mite_io_addr + VAR_1);
 FUNC_4(0x1 | VAR_12,
        VAR_4->mite->mite_io_addr + VAR_2);
 FUNC_4(0xf, VAR_4->mite->mite_io_addr + 0x30);

 FUNC_0(VAR_9 > sizeof(VAR_4->serial_number));
 for (VAR_13 = 0; VAR_13 < VAR_9; ++VAR_13) {
  char *VAR_14 = (char *)&VAR_4->serial_number + VAR_13;
  *VAR_14 = FUNC_2(VAR_8 + VAR_13);
 }
 VAR_4->serial_number = FUNC_1(VAR_4->serial_number);

 for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
  VAR_4->eeprom_buffer[VAR_13] = FUNC_2(VAR_6 + VAR_13);
 }

 FUNC_4(VAR_11, VAR_4->mite->mite_io_addr + VAR_1);
 FUNC_4(VAR_10, VAR_4->mite->mite_io_addr + VAR_0);
 FUNC_4(VAR_12, VAR_4->mite->mite_io_addr + VAR_2);
 FUNC_4(0x0, VAR_4->mite->mite_io_addr + 0x30);
}
