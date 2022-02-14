
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {unsigned int scan_end_arg; int flags; } ;
struct TYPE_4__ {unsigned int ai_scan_pos; unsigned int ai_scan_count; scalar_t__ hwver; unsigned int adcfifothresh; unsigned short adccon; scalar_t__ ai_continuous; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (unsigned short,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_9,
      struct comedi_subdevice *VAR_10)
{
 struct comedi_cmd *VAR_11 = &VAR_10->async->cmd;
 unsigned int VAR_12 = VAR_11->scan_end_arg;
 unsigned int VAR_13;
 unsigned short VAR_14;
 unsigned short VAR_15;

 if ((VAR_11->flags & VAR_7) != 0) {

  VAR_13 = VAR_12 - VAR_8->ai_scan_pos;
 } else {
  if (VAR_8->ai_continuous
      || (VAR_8->ai_scan_count >= VAR_3)
      || (VAR_12 >= VAR_3)) {
   VAR_13 = VAR_3;
  } else {
   VAR_13 = (VAR_8->ai_scan_count * VAR_12)
       - VAR_8->ai_scan_pos;
  }
 }
 if (VAR_13 >= VAR_3) {
  VAR_14 = VAR_4;
 } else {
  if ((VAR_13 > 1) && (VAR_8->hwver > 0)) {

   if (VAR_8->adcfifothresh != VAR_13) {
    VAR_8->adcfifothresh = VAR_13;
    FUNC_0(VAR_13, VAR_9->iobase + VAR_0);
   }
   VAR_14 = VAR_1;
  } else {
   VAR_14 = VAR_6;
  }
 }
 VAR_15 = (VAR_8->adccon & ~VAR_5) | VAR_14;
 if (VAR_15 != VAR_8->adccon) {
  VAR_8->adccon = VAR_15;
  FUNC_0(VAR_15, VAR_9->iobase + VAR_2);
 }
}
