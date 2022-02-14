
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {size_t minor; } ;
struct TYPE_4__ {scalar_t__ iobase; } ;
struct TYPE_3__ {scalar_t__ i_Initialised; int i_ChannelNo; int i_InterruptFlag; scalar_t__ i_AutoCalibration; scalar_t__ i_Offset; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,unsigned int*) ;
 int FUNC_2 (struct comedi_device*,unsigned int*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (char*) ;
 TYPE_1__* VAR_4 ;

int FUNC_7(struct comedi_device *VAR_5,
 struct comedi_subdevice *VAR_6, struct comedi_insn *VAR_7, unsigned int *VAR_8)
{
 unsigned int VAR_9 = 0;
 int VAR_10;


 if (VAR_4[VAR_5->minor].i_Initialised == 0) {
  FUNC_3(VAR_5);
  return -VAR_1;
 }
 if (VAR_8[0] != 0 && VAR_8[0] != 1) {
  FUNC_6("\nError in selection of functionality\n");
  FUNC_3(VAR_5);
  return -VAR_1;
 }

 if (VAR_8[0] == 1)
 {




  while (((FUNC_4(VAR_3->iobase + VAR_4[VAR_5->minor].
      i_Offset + 12) >> 19) & 1) !=
   1) ;

  FUNC_5((0x00001000 | VAR_4[VAR_5->minor].i_ChannelNo),
   VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset +
   4);






  VAR_10 = VAR_4[VAR_5->minor].i_InterruptFlag;

  VAR_4[VAR_5->minor].i_InterruptFlag = VAR_0;
  FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);

  if (VAR_4[VAR_5->minor].i_AutoCalibration == VAR_2) {

   while (((FUNC_4(VAR_3->iobase + VAR_4[VAR_5->minor].
       i_Offset +
       12) >> 19) & 1) != 1) ;


   FUNC_5((0x00001000 | VAR_4[VAR_5->minor].
     i_ChannelNo),
    VAR_3->iobase +
    VAR_4[VAR_5->minor].i_Offset + 4);
   VAR_8++;
   FUNC_2(VAR_5, VAR_8);
   VAR_8++;
   FUNC_1(VAR_5, VAR_8);
  }
 } else {

  while (((FUNC_4(VAR_3->iobase + VAR_4[VAR_5->minor].
      i_Offset + 12) >> 19) & 1) !=
   1) ;

  FUNC_5((0x00000800 | VAR_4[VAR_5->minor].i_ChannelNo),
   VAR_3->iobase + VAR_4[VAR_5->minor].i_Offset +
   4);

  VAR_9 =
   FUNC_4(VAR_3->iobase +
   VAR_4[VAR_5->minor].i_Offset + 0);






  VAR_10 = VAR_4[VAR_5->minor].i_InterruptFlag;

  VAR_4[VAR_5->minor].i_InterruptFlag = VAR_0;
  FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);

  if (VAR_4[VAR_5->minor].i_AutoCalibration == VAR_2) {

   while (((FUNC_4(VAR_3->iobase + VAR_4[VAR_5->minor].
       i_Offset +
       12) >> 19) & 1) != 1) ;

   FUNC_5((0x00000800 | VAR_4[VAR_5->minor].
     i_ChannelNo),
    VAR_3->iobase +
    VAR_4[VAR_5->minor].i_Offset + 4);
   VAR_8++;
   FUNC_2(VAR_5, VAR_8);
   VAR_8++;
   FUNC_1(VAR_5, VAR_8);
  }
 }

 VAR_4[VAR_5->minor].i_InterruptFlag = VAR_10;

 return VAR_7->n;
}
