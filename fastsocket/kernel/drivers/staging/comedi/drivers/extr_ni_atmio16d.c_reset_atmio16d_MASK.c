
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int com_reg_1_state; int adc_coding; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_11)
{
 int VAR_12;


 FUNC_0(0, VAR_11->iobase + VAR_3);
 FUNC_0(0, VAR_11->iobase + VAR_4);
 FUNC_0(0, VAR_11->iobase + VAR_8);

 FUNC_0(0xFFFF, VAR_11->iobase + VAR_1);
 FUNC_0(0xFFEF, VAR_11->iobase + VAR_1);
 FUNC_0(0xFF17, VAR_11->iobase + VAR_1);
 FUNC_0(0xF000, VAR_11->iobase + VAR_2);
 for (VAR_12 = 1; VAR_12 <= 5; ++VAR_12) {
  FUNC_0(0xFF00 + VAR_12, VAR_11->iobase + VAR_1);
  FUNC_0(0x0004, VAR_11->iobase + VAR_2);
  FUNC_0(0xFF08 + VAR_12, VAR_11->iobase + VAR_1);
  FUNC_0(0x3, VAR_11->iobase + VAR_2);
 }
 FUNC_0(0xFF5F, VAR_11->iobase + VAR_1);

 FUNC_0(0, VAR_11->iobase + VAR_0);
 FUNC_0(0, VAR_11->iobase + VAR_7);

 VAR_10->com_reg_1_state |= 1;
 FUNC_0(VAR_10->com_reg_1_state, VAR_11->iobase + VAR_3);
 VAR_10->adc_coding = VAR_9;

 FUNC_0(2048, VAR_11->iobase + VAR_5);
 FUNC_0(2048, VAR_11->iobase + VAR_6);
}
