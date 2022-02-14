
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iobase; int tsk_Current; void* b_TimerSelectMode; scalar_t__ i_IobaseAmcc; } ;


 void* VAR_0 ;
 void* VAR_1 ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_4(int VAR_20, void *VAR_21)
{
 struct comedi_device *VAR_22 = VAR_21;
 unsigned int VAR_23, VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26, VAR_27, VAR_28, VAR_29;
 unsigned int VAR_30 = 0;
 VAR_24 = FUNC_0(VAR_17->i_IobaseAmcc + VAR_6 +
  VAR_8) & 0x01;
 VAR_23 = FUNC_0(VAR_17->i_IobaseAmcc + VAR_9 +
  VAR_12) & 0x01;
 VAR_25 =
  FUNC_0(VAR_17->i_IobaseAmcc + VAR_15 +
  VAR_13) & 0x01;
 VAR_26 = FUNC_0(VAR_17->iobase + VAR_2 +
  VAR_13) & 0x1;
 VAR_27 = FUNC_0(VAR_17->iobase + VAR_3 +
  VAR_13) & 0x1;
 VAR_28 = FUNC_0(VAR_17->iobase + VAR_4 +
  VAR_13) & 0x1;
 VAR_29 = FUNC_0(VAR_17->iobase + VAR_5 +
  VAR_13) & 0x1;
 if (VAR_24 == 0 && VAR_23 == 0 && VAR_25 == 0 && VAR_26 == 0
  && VAR_27 == 0 && VAR_28 == 0 && VAR_29 == 0) {
  FUNC_2("\nInterrupt from unknown source\n");
 }

 if (VAR_24 == 1) {
  VAR_24 = FUNC_0(VAR_17->i_IobaseAmcc + VAR_6 +
   VAR_8);
  FUNC_1(0x0,
   VAR_17->i_IobaseAmcc + VAR_6 +
   VAR_8);
  VAR_18 =
   FUNC_0(VAR_17->i_IobaseAmcc + VAR_6 +
   VAR_7);
  VAR_18 = VAR_18 & 0X000FFFF0;
  FUNC_3(VAR_16, VAR_17->tsk_Current, 0);
  FUNC_1(VAR_24, VAR_17->i_IobaseAmcc + VAR_6 + VAR_8);
  return;
 }

 if (VAR_23 == 1) {

  VAR_19 =
   FUNC_0(VAR_17->i_IobaseAmcc + VAR_9 +
   VAR_11) & 0x3;

  FUNC_1(0x0,
   VAR_17->i_IobaseAmcc + VAR_9 +
   VAR_10);


  FUNC_3(VAR_16, VAR_17->tsk_Current, 0);

 }

 if (VAR_25 == 1) {
  VAR_17->b_TimerSelectMode = VAR_1;
  if (VAR_17->b_TimerSelectMode) {


   VAR_30 =
    FUNC_0(VAR_17->i_IobaseAmcc + VAR_15 +
        VAR_14);
   FUNC_1(0x0,
        VAR_17->i_IobaseAmcc + VAR_15 +
        VAR_14);


   FUNC_3(VAR_16, VAR_17->tsk_Current, 0);



   FUNC_1(VAR_30,
        VAR_17->i_IobaseAmcc + VAR_15 +
        VAR_14);
  }
 }


 if (VAR_26 == 1) {
  VAR_17->b_TimerSelectMode = VAR_0;
  if (VAR_17->b_TimerSelectMode) {


   VAR_30 =
    FUNC_0(VAR_17->iobase + VAR_2 +
        VAR_14);
   FUNC_1(0x0,
        VAR_17->iobase + VAR_2 +
        VAR_14);


   FUNC_3(VAR_16, VAR_17->tsk_Current, 0);


   FUNC_1(VAR_30,
        VAR_17->iobase + VAR_2 +
        VAR_14);
  }
 }

 if (VAR_27 == 1) {
  VAR_17->b_TimerSelectMode = VAR_0;
  if (VAR_17->b_TimerSelectMode) {


   VAR_30 =
    FUNC_0(VAR_17->iobase + VAR_3 +
        VAR_14);
   FUNC_1(0x0,
        VAR_17->iobase + VAR_3 +
        VAR_14);


   FUNC_3(VAR_16, VAR_17->tsk_Current, 0);


   FUNC_1(VAR_30,
        VAR_17->iobase + VAR_3 +
        VAR_14);
  }
 }

 if (VAR_28 == 1) {
  VAR_17->b_TimerSelectMode = VAR_0;
  if (VAR_17->b_TimerSelectMode) {


   VAR_30 =
    FUNC_0(VAR_17->iobase + VAR_4 +
        VAR_14);
   FUNC_1(0x0,
        VAR_17->iobase + VAR_4 +
        VAR_14);


   FUNC_3(VAR_16, VAR_17->tsk_Current, 0);


   FUNC_1(VAR_30,
        VAR_17->iobase + VAR_4 +
        VAR_14);
  }
 }

 if (VAR_29 == 1) {
  VAR_17->b_TimerSelectMode = VAR_0;
  if (VAR_17->b_TimerSelectMode) {


   VAR_30 =
    FUNC_0(VAR_17->iobase + VAR_5 +
        VAR_14);
   FUNC_1(0x0,
        VAR_17->iobase + VAR_5 +
        VAR_14);


   FUNC_3(VAR_16, VAR_17->tsk_Current, 0);


   FUNC_1(VAR_30,
        VAR_17->iobase + VAR_5 +
        VAR_14);
  }
 }
 return;
}
