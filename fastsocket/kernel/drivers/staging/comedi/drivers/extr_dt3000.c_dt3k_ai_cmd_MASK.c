
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int chanlist_len; int scan_end_arg; scalar_t__ convert_src; int flags; scalar_t__ scan_begin_src; int scan_begin_arg; int convert_arg; int * chanlist; } ;
struct TYPE_4__ {scalar_t__ io_addr; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_2__* VAR_15 ;
 unsigned int FUNC_4 (int,int *,int) ;
 int FUNC_5 (struct comedi_device*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_16, struct comedi_subdevice *VAR_17)
{
 struct comedi_cmd *VAR_18 = &VAR_17->async->cmd;
 int VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 int VAR_25;
 unsigned int VAR_26;

 FUNC_6("dt3k_ai_cmd:\n");
 for (VAR_19 = 0; VAR_19 < VAR_18->chanlist_len; VAR_19++) {
  VAR_20 = FUNC_1(VAR_18->chanlist[VAR_19]);
  VAR_21 = FUNC_2(VAR_18->chanlist[VAR_19]);

  FUNC_7((VAR_21 << 6) | VAR_20,
         VAR_15->io_addr + VAR_4 + VAR_19);
 }
 VAR_22 = FUNC_0(VAR_18->chanlist[0]);

 FUNC_7(VAR_18->scan_end_arg, VAR_15->io_addr + FUNC_3(0));
 FUNC_6("param[0]=0x%04x\n", VAR_18->scan_end_arg);

 if (VAR_18->convert_src == VAR_13) {
  VAR_23 = FUNC_4(50, &VAR_18->convert_arg,
        VAR_18->flags & VAR_12);
  FUNC_7((VAR_23 >> 16), VAR_15->io_addr + FUNC_3(1));
  FUNC_6("param[1]=0x%04x\n", VAR_23 >> 16);
  FUNC_7((VAR_23 & 0xffff), VAR_15->io_addr + FUNC_3(2));
  FUNC_6("param[2]=0x%04x\n", VAR_23 & 0xffff);
 } else {

 }

 if (VAR_18->scan_begin_src == VAR_13) {
  VAR_24 = FUNC_4(100, &VAR_18->scan_begin_arg,
         VAR_18->flags & VAR_12);
  FUNC_7((VAR_24 >> 16), VAR_15->io_addr + FUNC_3(3));
  FUNC_6("param[3]=0x%04x\n", VAR_24 >> 16);
  FUNC_7((VAR_24 & 0xffff), VAR_15->io_addr + FUNC_3(4));
  FUNC_6("param[4]=0x%04x\n", VAR_24 & 0xffff);
 } else {

 }

 VAR_26 = VAR_10 | 0 | 0;
 FUNC_7(VAR_26, VAR_15->io_addr + FUNC_3(5));
 FUNC_6("param[5]=0x%04x\n", VAR_26);
 FUNC_7(VAR_22 == VAR_1, VAR_15->io_addr + FUNC_3(6));
 FUNC_6("param[6]=0x%04x\n", VAR_22 == VAR_1);

 FUNC_7(VAR_0 / 2, VAR_15->io_addr + FUNC_3(7));
 FUNC_6("param[7]=0x%04x\n", VAR_0 / 2);

 FUNC_7(VAR_11, VAR_15->io_addr + VAR_6);
 VAR_25 = FUNC_5(VAR_16, VAR_2);

 FUNC_7(VAR_7 | VAR_9 | VAR_8,
        VAR_15->io_addr + VAR_5);

 VAR_14 = 0;

 FUNC_7(VAR_11, VAR_15->io_addr + VAR_6);
 VAR_25 = FUNC_5(VAR_16, VAR_3);

 return 0;
}
