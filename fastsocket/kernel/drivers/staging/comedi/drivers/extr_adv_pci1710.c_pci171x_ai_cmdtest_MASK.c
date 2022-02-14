
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int start_src; int scan_begin_src; int convert_src; int scan_end_src; int stop_src; scalar_t__ start_arg; scalar_t__ scan_begin_arg; int convert_arg; int chanlist_len; int scan_end_arg; int stop_arg; int flags; scalar_t__ chanlist; } ;
struct TYPE_4__ {int i8254_osc_base; } ;
struct TYPE_3__ {int ai_ns_min; int n_aichan; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,scalar_t__,int) ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (int ,int*,int*,int*,int) ;
 int FUNC_3 (int,struct comedi_cmd*) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_9,
         struct comedi_subdevice *VAR_10,
         struct comedi_cmd *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13, VAR_14, VAR_15;

 FUNC_0("adv_pci1710 EDBG: BGN: pci171x_ai_cmdtest(...)\n");





 VAR_13 = VAR_11->start_src;
 VAR_11->start_src &= VAR_4 | VAR_1;
 if (!VAR_11->start_src || VAR_13 != VAR_11->start_src)
  VAR_12++;

 VAR_13 = VAR_11->scan_begin_src;
 VAR_11->scan_begin_src &= VAR_2;
 if (!VAR_11->scan_begin_src || VAR_13 != VAR_11->scan_begin_src)
  VAR_12++;

 VAR_13 = VAR_11->convert_src;
 VAR_11->convert_src &= VAR_6 | VAR_1;
 if (!VAR_11->convert_src || VAR_13 != VAR_11->convert_src)
  VAR_12++;

 VAR_13 = VAR_11->scan_end_src;
 VAR_11->scan_end_src &= VAR_0;
 if (!VAR_11->scan_end_src || VAR_13 != VAR_11->scan_end_src)
  VAR_12++;

 VAR_13 = VAR_11->stop_src;
 VAR_11->stop_src &= VAR_0 | VAR_3;
 if (!VAR_11->stop_src || VAR_13 != VAR_11->stop_src)
  VAR_12++;

 if (VAR_12) {



  FUNC_0
      ("adv_pci1710 EDBG: BGN: pci171x_ai_cmdtest(...) err=%d ret=1\n",
       VAR_12);
  return 1;
 }



 if (VAR_11->start_src != VAR_4 && VAR_11->start_src != VAR_1) {
  VAR_11->start_src = VAR_4;
  VAR_12++;
 }

 if (VAR_11->scan_begin_src != VAR_2) {
  VAR_11->scan_begin_src = VAR_2;
  VAR_12++;
 }

 if (VAR_11->convert_src != VAR_6 && VAR_11->convert_src != VAR_1)
  VAR_12++;

 if (VAR_11->scan_end_src != VAR_0) {
  VAR_11->scan_end_src = VAR_0;
  VAR_12++;
 }

 if (VAR_11->stop_src != VAR_3 && VAR_11->stop_src != VAR_0)
  VAR_12++;

 if (VAR_12) {



  FUNC_0
      ("adv_pci1710 EDBG: BGN: pci171x_ai_cmdtest(...) err=%d ret=2\n",
       VAR_12);
  return 2;
 }



 if (VAR_11->start_arg != 0) {
  VAR_11->start_arg = 0;
  VAR_12++;
 }

 if (VAR_11->scan_begin_arg != 0) {
  VAR_11->scan_begin_arg = 0;
  VAR_12++;
 }

 if (VAR_11->convert_src == VAR_6) {
  if (VAR_11->convert_arg < VAR_8->ai_ns_min) {
   VAR_11->convert_arg = VAR_8->ai_ns_min;
   VAR_12++;
  }
 } else {
  if (VAR_11->convert_arg != 0) {
   VAR_11->convert_arg = 0;
   VAR_12++;
  }
 }

 if (!VAR_11->chanlist_len) {
  VAR_11->chanlist_len = 1;
  VAR_12++;
 }
 if (VAR_11->chanlist_len > VAR_8->n_aichan) {
  VAR_11->chanlist_len = VAR_8->n_aichan;
  VAR_12++;
 }
 if (VAR_11->scan_end_arg != VAR_11->chanlist_len) {
  VAR_11->scan_end_arg = VAR_11->chanlist_len;
  VAR_12++;
 }
 if (VAR_11->stop_src == VAR_0) {
  if (!VAR_11->stop_arg) {
   VAR_11->stop_arg = 1;
   VAR_12++;
  }
 } else {
  if (VAR_11->stop_arg != 0) {
   VAR_11->stop_arg = 0;
   VAR_12++;
  }
 }

 if (VAR_12) {



  FUNC_0
      ("adv_pci1710 EDBG: BGN: pci171x_ai_cmdtest(...) err=%d ret=3\n",
       VAR_12);
  return 3;
 }



 if (VAR_11->convert_src == VAR_6) {
  VAR_13 = VAR_11->convert_arg;
  FUNC_2(VAR_7->i8254_osc_base, &VAR_14,
       &VAR_15, &VAR_11->convert_arg,
       VAR_11->flags & VAR_5);
  if (VAR_11->convert_arg < VAR_8->ai_ns_min)
   VAR_11->convert_arg = VAR_8->ai_ns_min;
  if (VAR_13 != VAR_11->convert_arg)
   VAR_12++;
 }

 if (VAR_12) {
  FUNC_0
      ("adv_pci1710 EDBG: BGN: pci171x_ai_cmdtest(...) err=%d ret=4\n",
       VAR_12);
  return 4;
 }



 if (VAR_11->chanlist) {
  if (!FUNC_1(VAR_9, VAR_10, VAR_11->chanlist,
     VAR_11->chanlist_len))
   return 5;
 }

 FUNC_0("adv_pci1710 EDBG: BGN: pci171x_ai_cmdtest(...) ret=0\n");
 return 0;
}
