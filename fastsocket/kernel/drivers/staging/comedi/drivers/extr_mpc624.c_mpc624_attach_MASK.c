
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skel_private {int dummy; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int len_chanlist; int insn_read; int * range_table; int type; } ;
struct comedi_device {unsigned long iobase; char* board_name; struct comedi_subdevice* subdevices; int minor; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_2__ {void* ulConvertionRate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 TYPE_1__* VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (char*,...) ;
 int VAR_18 ;
 int VAR_19 ;
 int * FUNC_3 (unsigned long,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_20, struct comedi_devconfig *VAR_21)
{
 struct comedi_subdevice *VAR_22;
 unsigned long VAR_23;

 VAR_23 = VAR_21->options[0];
 FUNC_2("comedi%d: mpc624 [0x%04lx, ", VAR_20->minor, VAR_23);
 if (FUNC_3(VAR_23, VAR_3, "mpc624") == ((void*)0)) {
  FUNC_2("I/O port(s) in use\n");
  return -VAR_1;
 }

 VAR_20->iobase = VAR_23;
 VAR_20->board_name = "mpc624";


 if (FUNC_0(VAR_20, sizeof(struct skel_private)) < 0)
  return -VAR_2;

 switch (VAR_21->options[1]) {
 case 0:
  VAR_16->ulConvertionRate = VAR_9;
  FUNC_2("3.52 kHz, ");
  break;
 case 1:
  VAR_16->ulConvertionRate = VAR_6;
  FUNC_2("1.76 kHz, ");
  break;
 case 2:
  VAR_16->ulConvertionRate = VAR_13;
  FUNC_2("880 Hz, ");
  break;
 case 3:
  VAR_16->ulConvertionRate = VAR_10;
  FUNC_2("440 Hz, ");
  break;
 case 4:
  VAR_16->ulConvertionRate = VAR_7;
  FUNC_2("220 Hz, ");
  break;
 case 5:
  VAR_16->ulConvertionRate = VAR_4;
  FUNC_2("110 Hz, ");
  break;
 case 6:
  VAR_16->ulConvertionRate = VAR_11;
  FUNC_2("55 Hz, ");
  break;
 case 7:
  VAR_16->ulConvertionRate = VAR_8;
  FUNC_2("27.5 Hz, ");
  break;
 case 8:
  VAR_16->ulConvertionRate = VAR_5;
  FUNC_2("13.75 Hz, ");
  break;
 case 9:
  VAR_16->ulConvertionRate = VAR_12;
  FUNC_2("6.875 Hz, ");
  break;
 default:
  FUNC_2
      ("illegal convertion rate setting! Valid numbers are 0..9. Using 9 => 6.875 Hz, ");
  VAR_16->ulConvertionRate = VAR_9;
 }


 if (FUNC_1(VAR_20, 1) < 0)
  return -VAR_2;

 VAR_22 = VAR_20->subdevices + 0;
 VAR_22->type = VAR_0;
 VAR_22->subdev_flags = VAR_15 | VAR_14;
 VAR_22->n_chan = 8;
 switch (VAR_21->options[1]) {
 default:
  VAR_22->maxdata = 0x3FFFFFFF;
  FUNC_2("30 bit, ");
 }

 switch (VAR_21->options[1]) {
 case 0:
  VAR_22->range_table = &VAR_18;
  FUNC_2("1.01V]: ");
  break;
 default:
  VAR_22->range_table = &VAR_19;
  FUNC_2("10.1V]: ");
 }
 VAR_22->len_chanlist = 1;
 VAR_22->insn_read = VAR_17;

 FUNC_2("attached\n");

 return 1;
}
