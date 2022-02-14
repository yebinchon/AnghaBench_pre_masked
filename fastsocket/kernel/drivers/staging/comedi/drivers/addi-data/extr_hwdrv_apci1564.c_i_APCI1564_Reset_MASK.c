
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; scalar_t__ i_IobaseAmcc; scalar_t__ b_DigitalOutputRegister; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_15 ;

int FUNC_2(struct comedi_device *VAR_16)
{
 FUNC_1(0x0, VAR_14->i_IobaseAmcc + VAR_7);
 FUNC_0(VAR_14->i_IobaseAmcc + VAR_6);
 FUNC_1(0x0, VAR_14->i_IobaseAmcc + VAR_4);
 FUNC_1(0x0, VAR_14->i_IobaseAmcc + VAR_5);
 VAR_14->b_DigitalOutputRegister = 0;
 VAR_15 = 0;
 FUNC_1(0x0, VAR_14->i_IobaseAmcc + VAR_8);
 FUNC_1(0x0, VAR_14->i_IobaseAmcc + VAR_9);
 FUNC_1(0x0,
  VAR_14->i_IobaseAmcc + VAR_10 +
  VAR_12);
 FUNC_1(0x0, VAR_14->i_IobaseAmcc + VAR_13);
 FUNC_1(0x0, VAR_14->i_IobaseAmcc + VAR_13 + VAR_11);

 FUNC_1(0x0, VAR_14->iobase + VAR_0 + VAR_11);
 FUNC_1(0x0, VAR_14->iobase + VAR_1 + VAR_11);
 FUNC_1(0x0, VAR_14->iobase + VAR_2 + VAR_11);
 FUNC_1(0x0, VAR_14->iobase + VAR_3 + VAR_11);
 return 0;
}
