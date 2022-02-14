
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {size_t minor; } ;
struct TYPE_4__ {scalar_t__ iobase; scalar_t__ i_IobaseAddon; scalar_t__ i_IobaseAmcc; } ;
struct TYPE_3__ {scalar_t__* ui_InterruptChannelValue; scalar_t__ b_StructInitialized; scalar_t__ i_Sum; scalar_t__ i_Count; scalar_t__ i_Initialised; scalar_t__ i_InterruptFlag; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 TYPE_1__* VAR_1 ;

int FUNC_2(struct comedi_device *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;





 VAR_1[VAR_2->minor].i_InterruptFlag = 0;
 VAR_1[VAR_2->minor].i_Initialised = 0;
 VAR_1[VAR_2->minor].i_Count = 0;
 VAR_1[VAR_2->minor].i_Sum = 0;
 VAR_1[VAR_2->minor].b_StructInitialized = 0;

 FUNC_1(0x83838383, VAR_0->i_IobaseAmcc + 0x60);


 VAR_4 = FUNC_0(VAR_0->i_IobaseAmcc + 0x38);
 FUNC_1(VAR_4 | 0x2000, VAR_0->i_IobaseAmcc + 0x38);
 FUNC_1(0, VAR_0->i_IobaseAddon);



 for (VAR_3 = 0; VAR_3 <= 95; VAR_3++) {

  VAR_1[VAR_2->minor].ui_InterruptChannelValue[VAR_3] = 0;
 }



 for (VAR_3 = 0; VAR_3 <= 192;) {
  while (((FUNC_0(VAR_0->iobase + VAR_3 + 12) >> 19) & 1) != 1) ;
  FUNC_1(0, VAR_0->iobase + VAR_3 + 8);
  VAR_3 = VAR_3 + 64;
 }
 return 0;
}
