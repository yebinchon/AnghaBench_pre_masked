
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_3__ {unsigned int scan_end_arg; } ;
struct comedi_async {unsigned int events; TYPE_1__ cmd; } ;
struct TYPE_4__ {unsigned int ai_scan_count; unsigned int ai_scan_pos; scalar_t__ hwver; scalar_t__ ai_continuous; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ FUNC_0 (struct comedi_async*,int ) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_11 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_12,
        struct comedi_subdevice *VAR_13)
{
 unsigned int VAR_14 = 0;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 struct comedi_async *VAR_19 = VAR_13->async;
 unsigned int VAR_20 = VAR_19->cmd.scan_end_arg;


 if (VAR_11->ai_continuous) {
  VAR_17 = VAR_7;
 } else if (VAR_11->ai_scan_count == 0) {
  VAR_17 = 0;
 } else if ((VAR_11->ai_scan_count > VAR_7)
     || (VAR_20 > VAR_7)) {
  VAR_17 = VAR_7;
 } else {
  VAR_17 = (VAR_11->ai_scan_count * VAR_20)
      - VAR_11->ai_scan_pos;
  if (VAR_17 > VAR_7) {
   VAR_17 = VAR_7;
  }
 }

 if (VAR_17 == 0) {
  return;
 }

 VAR_18 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  if (VAR_18 == 0) {

   VAR_15 = FUNC_2(VAR_12->iobase + VAR_6);

   if ((VAR_15 & VAR_9) != 0) {


    FUNC_1(VAR_12, "AI FIFO overrun");
    VAR_14 |= VAR_4 | VAR_3;
    break;
   } else if ((VAR_15 & VAR_8) != 0) {

    break;
   } else if ((VAR_15 & VAR_10) != 0) {

    VAR_18 = VAR_7;
   } else {

    if (VAR_11->hwver > 0) {

     VAR_18 = FUNC_2(VAR_12->iobase
        + VAR_5);
     if (VAR_18 == 0) {

      break;
     }
    } else {
     VAR_18 = 1;
    }
   }
  }


  if (FUNC_0(VAR_19, FUNC_3(VAR_12)) == 0) {
   VAR_14 |= VAR_3 | VAR_4;
   FUNC_1(VAR_12, "AI buffer overflow");
   break;
  }
  VAR_18--;
  VAR_11->ai_scan_pos++;
  if (VAR_11->ai_scan_pos == VAR_20) {

   VAR_11->ai_scan_pos = 0;
   VAR_11->ai_scan_count--;
   VAR_19->events |= VAR_2;
  }
 }

 if (!VAR_11->ai_continuous && (VAR_11->ai_scan_count == 0)) {

  VAR_14 |= VAR_1;
 } else {

  VAR_14 |= VAR_0;
 }
 VAR_19->events |= VAR_14;

 if ((VAR_19->events & (VAR_1 | VAR_3 |
         VAR_4)) != 0) {

  FUNC_4(VAR_12, VAR_13);
 } else {

  FUNC_5(VAR_12, VAR_13);
 }
}
