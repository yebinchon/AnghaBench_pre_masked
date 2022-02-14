
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_IobaseAmcc; scalar_t__ iobase; int tsk_Current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16,
 struct comedi_insn *VAR_17, unsigned int *VAR_18)
{
 unsigned int VAR_19;
 int VAR_20;
 int VAR_21;
 VAR_14->tsk_Current = VAR_13;
 FUNC_3(0x0, VAR_14->i_IobaseAmcc + 0x38);
 if (VAR_18[0] == 1) {
  VAR_21 = 0xC0;
 }
 else {
  if (VAR_18[0] == 0) {
   VAR_21 = 0x00;
  }
  else {
   FUNC_4("\nThe parameter passed to driver is in error for enabling the voltage interrupt\n");
   return -VAR_12;
  }
 }




 FUNC_2(VAR_10,
  VAR_14->iobase + VAR_11);
 VAR_20 = FUNC_0(VAR_14->iobase + VAR_11);
 FUNC_2(VAR_10,
  VAR_14->iobase + VAR_11);



 VAR_20 = (VAR_20 & 0xF9) | VAR_0;

 FUNC_2(VAR_20, VAR_14->iobase + VAR_11);



 FUNC_2(VAR_6,
  VAR_14->iobase + VAR_11);



 FUNC_2(0xC0, VAR_14->iobase + VAR_11);



 FUNC_2(VAR_8,
  VAR_14->iobase + VAR_11);
 FUNC_2(VAR_21, VAR_14->iobase + VAR_11);



 FUNC_2(VAR_9,
  VAR_14->iobase + VAR_11);
 FUNC_2(VAR_21, VAR_14->iobase + VAR_11);



 FUNC_2(VAR_7,
  VAR_14->iobase + VAR_11);
 FUNC_2(VAR_21, VAR_14->iobase + VAR_11);




 FUNC_2(VAR_5,
  VAR_14->iobase + VAR_11);
 VAR_20 = FUNC_0(VAR_14->iobase + VAR_11);
 FUNC_2(VAR_5,
  VAR_14->iobase + VAR_11);




 VAR_20 = (VAR_20 & 0x0F) | 0x20;
 FUNC_2(VAR_20, VAR_14->iobase + VAR_11);



 FUNC_2(VAR_6,
  VAR_14->iobase + VAR_11);
 VAR_20 = FUNC_0(VAR_14->iobase + VAR_11);
 FUNC_2(VAR_6,
  VAR_14->iobase + VAR_11);




 VAR_20 = (VAR_20 & 0x0F) | 0x20;
 FUNC_2(VAR_20, VAR_14->iobase + VAR_11);




 FUNC_2(VAR_1,
  VAR_14->iobase + VAR_11);
 VAR_20 = FUNC_0(VAR_14->iobase + VAR_11);
 FUNC_2(VAR_1,
  VAR_14->iobase + VAR_11);




 VAR_20 = (VAR_20 & 0x0F) | 0x20;
 FUNC_2(VAR_20, VAR_14->iobase + VAR_11);




 FUNC_2(VAR_2,
  VAR_14->iobase + VAR_11);
 VAR_20 = FUNC_0(VAR_14->iobase + VAR_11);
 FUNC_2(VAR_2,
  VAR_14->iobase + VAR_11);




 VAR_20 = (VAR_20 & 0x0F) | 0x20;
 FUNC_2(VAR_20, VAR_14->iobase + VAR_11);




 FUNC_2(VAR_3,
  VAR_14->iobase + VAR_11);
 VAR_20 = FUNC_0(VAR_14->iobase + VAR_11);
 FUNC_2(VAR_3,
  VAR_14->iobase + VAR_11);




 VAR_20 = (VAR_20 & 0x0F) | 0x20;
 FUNC_2(VAR_20, VAR_14->iobase + VAR_11);




 FUNC_2(VAR_4,
  VAR_14->iobase + VAR_11);



 FUNC_2(0xD0, VAR_14->iobase + VAR_11);




 FUNC_3(0x3000, VAR_14->i_IobaseAmcc + 0x38);
 VAR_19 = FUNC_1(VAR_14->i_IobaseAmcc + 0x10);
 VAR_19 = FUNC_1(VAR_14->i_IobaseAmcc + 0x38);
 FUNC_3(0x23000, VAR_14->i_IobaseAmcc + 0x38);

 return VAR_17->n;
}
