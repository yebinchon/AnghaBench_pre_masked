
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {size_t minor; } ;
struct TYPE_4__ {scalar_t__ iobase; } ;
struct TYPE_3__ {unsigned int i_ADDIDATAConversionTimeUnit; unsigned int i_ADDIDATAConversionTime; scalar_t__ i_InterruptFlag; scalar_t__ i_Offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 TYPE_1__* VAR_3 ;

int FUNC_2(struct comedi_device *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7 = 0;
 unsigned int VAR_8 = 0;



 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;
 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1(VAR_3[VAR_4->minor].i_ADDIDATAConversionTimeUnit,
  VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 36);




 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1(VAR_3[VAR_4->minor].i_ADDIDATAConversionTime,
  VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 32);




 VAR_6 = FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 12);





 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1((VAR_6 | 0x00020000),
  VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 12);




 VAR_8 = 0;






 if (VAR_3[VAR_4->minor].i_InterruptFlag == VAR_1) {





  VAR_8 = VAR_8 | 0x00100000;

 }




 VAR_8 = VAR_8 | 0x00080000;





 while (((FUNC_0(VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1(VAR_8,
  VAR_2->iobase + VAR_3[VAR_4->minor].i_Offset + 8);






 if (VAR_3[VAR_4->minor].i_InterruptFlag == VAR_0) {

  do {





   VAR_7 = FUNC_0(VAR_2->iobase +
    VAR_3[VAR_4->minor].i_Offset + 20) & 1;

  } while (VAR_7 != 1);






  VAR_5[0] =
   FUNC_0(VAR_2->iobase +
   VAR_3[VAR_4->minor].i_Offset + 28);
 }
 return 0;
}
