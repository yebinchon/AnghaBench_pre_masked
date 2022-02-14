
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; unsigned int state; TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int scan_begin_src; int scan_begin_arg; } ;
struct TYPE_2__ {int * inttrig; struct comedi_cmd cmd; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int FUNC_2 (struct comedi_device*,char*) ;
 int VAR_12 ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_13, struct comedi_subdevice *VAR_14)
{
 const struct comedi_cmd *VAR_15 = &VAR_14->async->cmd;
 unsigned VAR_16 = VAR_0 | VAR_1;
 int VAR_17;

 FUNC_4(VAR_3, VAR_8);
 switch (VAR_15->scan_begin_src) {
 case 128:
  VAR_16 |=
      FUNC_1(VAR_15->scan_begin_arg) &
      VAR_5;
  break;
 default:
  FUNC_0();
  break;
 }
 if (VAR_15->scan_begin_arg & VAR_6)
  VAR_16 |= VAR_2;
 FUNC_4(VAR_16, VAR_11);
 if (VAR_14->io_bits) {
  FUNC_4(VAR_14->state, VAR_9);
  FUNC_4(VAR_4, VAR_8);
  FUNC_4(VAR_14->io_bits, VAR_10);
 } else {
  FUNC_2(VAR_13,
        "attempted to run digital output command with no lines configured as outputs");
  return -VAR_7;
 }
 VAR_17 = FUNC_3(VAR_13);
 if (VAR_17 < 0) {
  return VAR_17;
 }
 VAR_14->async->inttrig = &VAR_12;
 return 0;
}
