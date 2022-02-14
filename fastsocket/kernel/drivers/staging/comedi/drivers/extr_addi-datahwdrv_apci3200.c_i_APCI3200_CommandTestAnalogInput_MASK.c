
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {size_t minor; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; int start_arg; int* chanlist; int convert_arg; int scan_begin_arg; } ;
struct TYPE_2__ {scalar_t__ i_InterruptFlag; int i_FirstChannel; int i_LastChannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_6 ;

int FUNC_4(struct comedi_device *VAR_7, struct comedi_subdevice *VAR_8,
 struct comedi_cmd *VAR_9)
{

 int VAR_10 = 0;
 int VAR_11;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 double VAR_20 = 0.0;
 double VAR_21 = 0.0;


 VAR_11 = VAR_9->start_src;
 VAR_9->start_src &= VAR_4 | VAR_1;
 if (!VAR_9->start_src || VAR_11 != VAR_9->start_src)
  VAR_10++;
 VAR_11 = VAR_9->scan_begin_src;
 VAR_9->scan_begin_src &= VAR_5 | VAR_2;
 if (!VAR_9->scan_begin_src || VAR_11 != VAR_9->scan_begin_src)
  VAR_10++;
 VAR_11 = VAR_9->convert_src;
 VAR_9->convert_src &= VAR_5;
 if (!VAR_9->convert_src || VAR_11 != VAR_9->convert_src)
  VAR_10++;
 VAR_11 = VAR_9->scan_end_src;
 VAR_9->scan_end_src &= VAR_0;
 if (!VAR_9->scan_end_src || VAR_11 != VAR_9->scan_end_src)
  VAR_10++;
 VAR_11 = VAR_9->stop_src;
 VAR_9->stop_src &= VAR_0 | VAR_3;
 if (!VAR_9->stop_src || VAR_11 != VAR_9->stop_src)
  VAR_10++;

 if (VAR_6[VAR_7->minor].i_InterruptFlag == 0) {
  VAR_10++;

 }
 if (VAR_10) {
  FUNC_2(VAR_7);
  return 1;
 }

 if (VAR_9->start_src != VAR_4 && VAR_9->start_src != VAR_1) {
  VAR_10++;
 }
 if (VAR_9->start_src == VAR_1) {
  VAR_17 = VAR_9->start_arg & 0xFFFF;
  VAR_16 = VAR_9->start_arg >> 16;
  if (VAR_17 < 1 || VAR_17 > 3) {
   VAR_10++;
   FUNC_3("\nThe trigger edge selection is in error\n");
  }
  if (VAR_16 != 2) {
   VAR_10++;
   FUNC_3("\nThe trigger mode selection is in error\n");
  }
 }

 if (VAR_9->scan_begin_src != VAR_5 &&
  VAR_9->scan_begin_src != VAR_2)
  VAR_10++;

 if (VAR_9->convert_src != VAR_5)
  VAR_10++;

 if (VAR_9->scan_end_src != VAR_0) {
  VAR_9->scan_end_src = VAR_0;
  VAR_10++;
 }

 if (VAR_9->stop_src != VAR_3 && VAR_9->stop_src != VAR_0)
  VAR_10++;

 if (VAR_10) {
  FUNC_2(VAR_7);
  return 2;
 }

 VAR_6[VAR_7->minor].i_FirstChannel = VAR_9->chanlist[0];

 VAR_6[VAR_7->minor].i_LastChannel = VAR_9->chanlist[1];

 if (VAR_9->convert_src == VAR_5) {
  VAR_12 = VAR_9->convert_arg & 0xFFFF;
  VAR_13 = VAR_9->convert_arg >> 16;
  if (VAR_12 != 20 && VAR_12 != 40
   && VAR_12 != 80 && VAR_12 != 160)
  {
   FUNC_3("\nThe selection of conversion time reload value is in error\n");
   VAR_10++;
  }
  if (VAR_13 != 2) {
   FUNC_3("\nThe selection of conversion time unit  is in error\n");
   VAR_10++;
  }
 } else {
  VAR_12 = 0;
  VAR_13 = 0;
 }
 if (VAR_9->scan_begin_src == VAR_2) {
  VAR_14 = 0;
  VAR_15 = 0;
 }
 else {
  VAR_14 = VAR_9->scan_begin_arg & 0xFFFF;
  VAR_15 = VAR_9->scan_begin_arg >> 16;
  if (VAR_15 != 2 && VAR_15 != 3) {
   VAR_10++;
   FUNC_3("\nThe Delay time base selection is in error\n");
  }
  if (VAR_14 < 1 || VAR_14 > 1023) {
   VAR_10++;
   FUNC_3("\nThe Delay time value is in error\n");
  }
  if (VAR_10) {
   FUNC_2(VAR_7);
   return 3;
  }
  FUNC_0();
  VAR_21 = (double)VAR_14;

  VAR_18 =
   VAR_6[VAR_7->minor].i_LastChannel -
   VAR_6[VAR_7->minor].i_FirstChannel + 4;



  VAR_20 =
   (double)((double)VAR_12 /
   (double)VAR_18);




  VAR_20 =
   (double)1.0 / VAR_20;
  VAR_13 = 3;




  if (VAR_15 <= VAR_13) {

   for (VAR_19 = 0;
    VAR_19 < (VAR_13 - VAR_15);
    VAR_19++) {

    VAR_20 =
     VAR_20 * 1000;
    VAR_20 =
     VAR_20 + 1;
   }
  } else {
   for (VAR_19 = 0;
    VAR_19 < (VAR_15 - VAR_13);
    VAR_19++) {
    VAR_21 = VAR_21 * 1000;

   }
  }

  if (VAR_20 >= VAR_21) {

   FUNC_3("\nSCAN Delay value cannot be used\n");



   VAR_10++;
  }
  FUNC_1();
 }

 if (VAR_10) {
  FUNC_2(VAR_7);
  return 4;
 }

 return 0;
}
