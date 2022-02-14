
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {size_t minor; } ;
struct TYPE_4__ {scalar_t__ iobase; } ;
struct TYPE_3__ {unsigned int i_ChannelNo; unsigned int i_ADDIDATAConversionTimeUnit; unsigned int i_ADDIDATAConversionTime; scalar_t__ i_InterruptFlag; scalar_t__ i_Offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 TYPE_1__* VAR_3 ;

int FUNC_2(struct comedi_device *VAR_4,
 struct comedi_subdevice *VAR_5, struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;



 VAR_9 = VAR_3[VAR_4->minor].i_ChannelNo;


 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;






 FUNC_1(0 | VAR_3[VAR_4->minor].i_ChannelNo,
  VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 0x4);






 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;


 FUNC_1(VAR_3[VAR_4->minor].i_ADDIDATAConversionTimeUnit,
  VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 36);





 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;


 FUNC_1(VAR_3[VAR_4->minor].i_ADDIDATAConversionTime,
  VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 32);





 VAR_10 = VAR_9 | (VAR_9 << 8) | 0x80000;






 if (VAR_3[VAR_4->minor].i_InterruptFlag == VAR_1) {



  VAR_10 = VAR_10 | 0x00100000;
 }





 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;


 FUNC_1(VAR_10,
  VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 8);





 if (VAR_3[VAR_4->minor].i_InterruptFlag == VAR_0) {
  do {





   VAR_8 = FUNC_0(VAR_2->iobase +
    VAR_3[VAR_4->minor].i_Offset + 20) & 1;

  } while (VAR_8 != 1);






  VAR_7[0] =
   FUNC_0(VAR_2->iobase +
   VAR_3[VAR_4->minor].i_Offset + 28);


 }
 return 0;
}
