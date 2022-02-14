
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned char chanlist_len; scalar_t__ stop_src; int stop_arg; int scan_begin_arg; int * chanlist; } ;
struct TYPE_4__ {int ai_scans_left; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_2__* VAR_16 ;
 int* VAR_17 ;
 int FUNC_2 (struct comedi_device*,int ) ;
 unsigned char FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,int ,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_18, struct comedi_subdevice *VAR_19)
{
 struct comedi_cmd *VAR_20 = &VAR_19->async->cmd;
 int VAR_21, VAR_22;
 unsigned char VAR_23, VAR_24, VAR_25;

 if (!VAR_20->chanlist)
  return -VAR_13;


 VAR_23 = FUNC_0(VAR_20->chanlist[0]) & (VAR_19->n_chan - 1);
 VAR_24 = VAR_23 + VAR_20->chanlist_len - 1;
 if (VAR_24 >= VAR_19->n_chan)
  return -VAR_13;
 VAR_22 = FUNC_1(VAR_20->chanlist[0]);


 FUNC_4(VAR_18, VAR_7, VAR_8);


 FUNC_4(VAR_18, VAR_7, VAR_11);


 FUNC_4(VAR_18, VAR_3, VAR_23);
 FUNC_4(VAR_18, VAR_2, VAR_24);


 FUNC_4(VAR_18, VAR_1, VAR_17[VAR_22]);


 FUNC_4(VAR_18, VAR_5, VAR_10);

 if (VAR_20->stop_src == VAR_15)
  VAR_16->ai_scans_left = VAR_20->stop_arg;
 else {
  VAR_16->ai_scans_left = 0xffffffff;
 }


 for (VAR_21 = 0; VAR_21 < 40000; VAR_21++) {
  VAR_25 = FUNC_3(VAR_18, VAR_4);
  if ((VAR_25 & VAR_12) == 0)
   break;
 }
 if (VAR_21 == 40000) {
  FUNC_5("timeout\n");
  return -VAR_14;
 }

 if (VAR_16->ai_scans_left > 1) {

  FUNC_2(VAR_18, VAR_20->scan_begin_arg);
 } else {

  FUNC_4(VAR_18, VAR_9, VAR_0);
  FUNC_4(VAR_18, VAR_6, 0xff);
 }
 return 0;

}
