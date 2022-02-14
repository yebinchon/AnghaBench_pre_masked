
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int minor; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; scalar_t__ start_arg; int scan_begin_arg; scalar_t__ scan_end_arg; scalar_t__ chanlist_len; scalar_t__ stop_arg; int flags; int * chanlist; } ;
struct TYPE_4__ {int hwver; } ;
struct TYPE_3__ {scalar_t__ min_hwver; } ;


 void* FUNC_0 (int,int ,int) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;

 TYPE_2__* VAR_10 ;
 int FUNC_4 (unsigned int*,int) ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_12,
        struct comedi_subdevice *VAR_13, struct comedi_cmd *VAR_14)
{
 int VAR_15 = 0;
 unsigned int VAR_16;
 VAR_16 = VAR_14->start_src;
 VAR_14->start_src &= VAR_6;
 if (!VAR_14->start_src || VAR_16 != VAR_14->start_src)
  VAR_15++;

 VAR_16 = VAR_14->scan_begin_src;
 if ((VAR_11->min_hwver > 0) && (VAR_10->hwver >= 2)) {
  VAR_14->scan_begin_src &= 128 | VAR_6 | 129;
 } else {
  VAR_14->scan_begin_src &= 128 | VAR_6;
 }
 if (!VAR_14->scan_begin_src || VAR_16 != VAR_14->scan_begin_src)
  VAR_15++;

 VAR_16 = VAR_14->convert_src;
 VAR_14->convert_src &= VAR_8;
 if (!VAR_14->convert_src || VAR_16 != VAR_14->convert_src)
  VAR_15++;

 VAR_16 = VAR_14->scan_end_src;
 VAR_14->scan_end_src &= VAR_5;
 if (!VAR_14->scan_end_src || VAR_16 != VAR_14->scan_end_src)
  VAR_15++;

 VAR_16 = VAR_14->stop_src;
 VAR_14->stop_src &= VAR_5 | VAR_7;
 if (!VAR_14->stop_src || VAR_16 != VAR_14->stop_src)
  VAR_15++;

 if (VAR_15)
  return 1;






 if ((VAR_14->start_src & (VAR_14->start_src - 1)) != 0)
  VAR_15++;
 if ((VAR_14->scan_begin_src & (VAR_14->scan_begin_src - 1)) != 0)
  VAR_15++;
 if ((VAR_14->convert_src & (VAR_14->convert_src - 1)) != 0)
  VAR_15++;
 if ((VAR_14->scan_end_src & (VAR_14->scan_end_src - 1)) != 0)
  VAR_15++;
 if ((VAR_14->stop_src & (VAR_14->stop_src - 1)) != 0)
  VAR_15++;

 if (VAR_15)
  return 2;





 if (VAR_14->start_arg != 0) {
  VAR_14->start_arg = 0;
  VAR_15++;
 }






 switch (VAR_14->scan_begin_src) {
 case 128:
  if (VAR_14->scan_begin_arg < 8000) {
   VAR_14->scan_begin_arg = 8000;
   VAR_15++;
  }
  if (VAR_14->scan_begin_arg > 4294967295u) {
   VAR_14->scan_begin_arg = 4294967295u;
   VAR_15++;
  }
  break;
 case 129:


  if ((VAR_14->scan_begin_arg & ~VAR_1) != 0) {
   VAR_14->scan_begin_arg = FUNC_0(VAR_14->scan_begin_arg, 0,
            ~VAR_1);
   VAR_15++;
  }


  if ((VAR_14->scan_begin_arg
       & (VAR_1 & ~(VAR_0 | VAR_2))) != 0) {
   VAR_14->scan_begin_arg =
       FUNC_0(VAR_14->scan_begin_arg, 0,
        VAR_1 & ~(VAR_0 | VAR_2));
   VAR_15++;
  }
  break;
 default:
  if (VAR_14->scan_begin_arg != 0) {
   VAR_14->scan_begin_arg = 0;
   VAR_15++;
  }
  break;
 }

 if (VAR_14->scan_end_arg != VAR_14->chanlist_len) {
  VAR_14->scan_end_arg = VAR_14->chanlist_len;
  VAR_15++;
 }
 if (VAR_14->stop_src == VAR_7) {

  if (VAR_14->stop_arg != 0) {
   VAR_14->stop_arg = 0;
   VAR_15++;
  }
 }

 if (VAR_15)
  return 3;





 if (VAR_14->scan_begin_src == 128) {
  VAR_16 = VAR_14->scan_begin_arg;
  FUNC_4(&VAR_14->scan_begin_arg,
       VAR_14->flags & VAR_9);
  if (VAR_16 != VAR_14->scan_begin_arg)
   VAR_15++;
 }

 if (VAR_15)
  return 4;



 if (VAR_14->chanlist && VAR_14->chanlist_len > 0) {
  enum {
   seq_err = (1 << 0),
   range_err = (1 << 1)
  };
  unsigned int VAR_17;
  unsigned int VAR_18;
  unsigned int VAR_19, VAR_20;
  unsigned int VAR_21, VAR_22;

  VAR_20 = FUNC_1(VAR_14->chanlist[0]);
  VAR_22 = FUNC_2(VAR_14->chanlist[0]);
  VAR_17 = 0;
  for (VAR_18 = 1; VAR_18 < VAR_14->chanlist_len; VAR_18++) {
   VAR_19 = FUNC_1(VAR_14->chanlist[VAR_18]);
   VAR_21 = FUNC_2(VAR_14->chanlist[VAR_18]);

   if (VAR_19 < VAR_20) {
    VAR_17 |= seq_err;
   }

   if (VAR_21 != VAR_22) {
    VAR_17 |= range_err;
   }
   VAR_20 = VAR_19;
  }
  if (VAR_17 != 0) {
   VAR_15++;
   if ((VAR_17 & seq_err) != 0) {
    FUNC_3("comedi%d: amplc_pci230: ao_cmdtest: "
     "channel numbers must increase\n",
     VAR_12->minor);
   }
   if ((VAR_17 & range_err) != 0) {
    FUNC_3("comedi%d: amplc_pci230: ao_cmdtest: "
     "channels must have the same range\n",
     VAR_12->minor);
   }
  }
 }

 if (VAR_15)
  return 5;

 return 0;
}
