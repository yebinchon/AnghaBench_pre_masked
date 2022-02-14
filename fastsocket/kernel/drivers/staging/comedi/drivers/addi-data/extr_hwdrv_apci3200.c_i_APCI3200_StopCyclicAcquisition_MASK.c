
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {size_t minor; } ;
struct TYPE_4__ {scalar_t__ iobase; } ;
struct TYPE_3__ {scalar_t__ i_Offset; scalar_t__ i_Sum; scalar_t__ i_Count; scalar_t__ i_Initialised; scalar_t__ i_InterruptFlag; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 TYPE_1__* VAR_1 ;

int FUNC_2(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3)
{
 unsigned int VAR_4 = 0;




 VAR_1[VAR_2->minor].i_InterruptFlag = 0;
 VAR_1[VAR_2->minor].i_Initialised = 0;
 VAR_1[VAR_2->minor].i_Count = 0;
 VAR_1[VAR_2->minor].i_Sum = 0;





 VAR_4 =
  FUNC_0(VAR_0->iobase + VAR_1[VAR_2->minor].i_Offset + 8);




 while (((FUNC_0(VAR_0->iobase + VAR_1[VAR_2->minor].i_Offset +
     12) >> 19) & 1) != 1) ;

 FUNC_1((VAR_4 & 0xFFE7FFFF),
  VAR_0->iobase + VAR_1[VAR_2->minor].i_Offset + 8);
 return 0;
}
