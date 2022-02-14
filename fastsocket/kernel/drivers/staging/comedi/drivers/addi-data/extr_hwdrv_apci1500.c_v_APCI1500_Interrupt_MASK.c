
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; int tsk_Current; scalar_t__ i_IobaseAmcc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(int VAR_18, void *VAR_19)
{

 struct comedi_device *VAR_20 = VAR_19;
 unsigned int VAR_21 = 0;
 int VAR_22 = 0;
 VAR_16 = 0;




 VAR_21 = FUNC_1(VAR_13->i_IobaseAmcc + 0x38);




 if ((VAR_21 & 0x800000) == 0x800000) {
  FUNC_2(VAR_6,
   VAR_13->iobase + VAR_10);
  VAR_22 =
   FUNC_0(VAR_13->iobase + VAR_10);
  if ((VAR_22 & 0x60) == 0x60) {



   FUNC_2(VAR_6,
    VAR_13->iobase +
    VAR_10);



   VAR_22 = (VAR_22 & 0x0F) | 0x20;
   FUNC_2(VAR_22,
    VAR_13->iobase +
    VAR_10);
   VAR_16 = VAR_16 | 1;
   if (VAR_17 == VAR_1) {
    FUNC_2(VAR_8,
     VAR_13->iobase +
     VAR_10);
    VAR_22 =
     FUNC_0(VAR_13->iobase +
     VAR_10);




    FUNC_2(VAR_7,
     VAR_13->iobase +
     VAR_10);
    VAR_22 =
     FUNC_0(VAR_13->iobase +
     VAR_10);

    VAR_15 = 1 + (VAR_22 >> 1);

   }
   else {
    VAR_15 = 0;
   }
  }




  FUNC_2(VAR_9,
   VAR_13->iobase + VAR_10);
  VAR_22 =
   FUNC_0(VAR_13->iobase + VAR_10);
  if ((VAR_22 & 0x60) == 0x60) {



   FUNC_2(VAR_9,
    VAR_13->iobase +
    VAR_10);



   VAR_22 = (VAR_22 & 0x0F) | 0x20;
   FUNC_2(VAR_22,
    VAR_13->iobase +
    VAR_10);
   FUNC_4("\n\n\n");



   VAR_22 =
    FUNC_0((unsigned int) VAR_13->iobase +
    VAR_11);

   VAR_22 = VAR_22 & 0xC0;




   if (VAR_22) {




    FUNC_3(0x0, VAR_13->i_IobaseAmcc + 0x38);

    if (VAR_22 & 0x80) {
     VAR_16 =
      VAR_16 | 0x40;
    }

    if (VAR_22 & 0x40) {
     VAR_16 =
      VAR_16 | 0x80;
    }
   }
   else {
    VAR_16 = VAR_16 | 2;
   }
  }




  FUNC_2(VAR_2,
   VAR_13->iobase + VAR_10);
  VAR_22 =
   FUNC_0(VAR_13->iobase + VAR_10);
  if ((VAR_22 & 0x60) == 0x60) {



   FUNC_2(VAR_2,
    VAR_13->iobase +
    VAR_10);



   VAR_22 = (VAR_22 & 0x0F) | 0x20;
   FUNC_2(VAR_22,
    VAR_13->iobase +
    VAR_10);
   VAR_16 = VAR_16 | 4;
  }



  FUNC_2(VAR_3,
   VAR_13->iobase + VAR_10);
  VAR_22 =
   FUNC_0(VAR_13->iobase + VAR_10);
  if ((VAR_22 & 0x60) == 0x60) {



   FUNC_2(VAR_3,
    VAR_13->iobase +
    VAR_10);



   VAR_22 = (VAR_22 & 0x0F) | 0x20;
   FUNC_2(VAR_22,
    VAR_13->iobase +
    VAR_10);
   VAR_16 = VAR_16 | 8;
  }




  FUNC_2(VAR_4,
   VAR_13->iobase + VAR_10);
  VAR_22 =
   FUNC_0(VAR_13->iobase + VAR_10);
  if ((VAR_22 & 0x60) == 0x60) {



   FUNC_2(VAR_4,
    VAR_13->iobase +
    VAR_10);



   VAR_22 = (VAR_22 & 0x0F) | 0x20;
   FUNC_2(VAR_22,
    VAR_13->iobase +
    VAR_10);
   if (VAR_14 == VAR_0) {
    VAR_16 = VAR_16 | 0x10;
   }
   else {
    VAR_16 = VAR_16 | 0x20;
   }
  }

  FUNC_5(VAR_12, VAR_13->tsk_Current, 0);







  FUNC_2(VAR_5,
   VAR_13->iobase + VAR_10);



  FUNC_2(0xD0, VAR_13->iobase + VAR_10);
 }
 else {
  FUNC_4("\nInterrupt from unknown source\n");

 }
 return;
}
