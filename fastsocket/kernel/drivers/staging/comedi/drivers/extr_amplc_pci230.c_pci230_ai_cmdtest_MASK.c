
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; } ;
struct comedi_device {int minor; } ;
struct comedi_cmd {unsigned int start_src; unsigned int scan_begin_src; unsigned int convert_src; unsigned int scan_end_src; unsigned int stop_src; int start_arg; scalar_t__* chanlist; scalar_t__ chanlist_len; unsigned int convert_arg; scalar_t__ scan_end_arg; scalar_t__ stop_arg; int scan_begin_arg; int flags; } ;
struct TYPE_4__ {int hwver; } ;
struct TYPE_3__ {scalar_t__ min_hwver; scalar_t__ have_dio; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 (int,int,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ,...) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* VAR_17 ;
 unsigned int* VAR_18 ;
 int FUNC_5 (struct comedi_cmd*) ;
 int FUNC_6 (unsigned int*,int) ;
 int FUNC_7 (char*,int ,int) ;
 TYPE_1__* VAR_19 ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_20,
        struct comedi_subdevice *VAR_21, struct comedi_cmd *VAR_22)
{
 int VAR_23 = 0;
 unsigned int VAR_24;
 VAR_24 = VAR_22->start_src;
 VAR_22->start_src &= VAR_13 | VAR_11;
 if (!VAR_22->start_src || VAR_24 != VAR_22->start_src)
  VAR_23++;

 VAR_24 = VAR_22->scan_begin_src;




 if ((VAR_19->have_dio) || (VAR_19->min_hwver > 0)) {
  VAR_22->scan_begin_src &= VAR_10 | VAR_16 | VAR_11
      | VAR_9;
 } else {
  VAR_22->scan_begin_src &= VAR_10 | VAR_16 | VAR_11;
 }
 if (!VAR_22->scan_begin_src || VAR_24 != VAR_22->scan_begin_src)
  VAR_23++;

 VAR_24 = VAR_22->convert_src;
 VAR_22->convert_src &= VAR_16 | VAR_11 | VAR_9;
 if (!VAR_22->convert_src || VAR_24 != VAR_22->convert_src)
  VAR_23++;

 VAR_24 = VAR_22->scan_end_src;
 VAR_22->scan_end_src &= VAR_8;
 if (!VAR_22->scan_end_src || VAR_24 != VAR_22->scan_end_src)
  VAR_23++;

 VAR_24 = VAR_22->stop_src;
 VAR_22->stop_src &= VAR_8 | VAR_12;
 if (!VAR_22->stop_src || VAR_24 != VAR_22->stop_src)
  VAR_23++;

 if (VAR_23)
  return 1;






 if ((VAR_22->start_src & (VAR_22->start_src - 1)) != 0)
  VAR_23++;
 if ((VAR_22->scan_begin_src & (VAR_22->scan_begin_src - 1)) != 0)
  VAR_23++;
 if ((VAR_22->convert_src & (VAR_22->convert_src - 1)) != 0)
  VAR_23++;
 if ((VAR_22->scan_end_src & (VAR_22->scan_end_src - 1)) != 0)
  VAR_23++;
 if ((VAR_22->stop_src & (VAR_22->stop_src - 1)) != 0)
  VAR_23++;



 if ((VAR_22->scan_begin_src != VAR_10)
     && (VAR_22->convert_src != VAR_16))
  VAR_23++;

 if (VAR_23)
  return 2;





 if (VAR_22->start_arg != 0) {
  VAR_22->start_arg = 0;
  VAR_23++;
 }
 if (VAR_22->convert_src == VAR_16) {
  unsigned int VAR_25;

  if (VAR_17->hwver == 0) {


   if (VAR_22->chanlist && (VAR_22->chanlist_len > 0)) {

    if (FUNC_1(VAR_22->chanlist[0]) == VAR_0) {
     VAR_25 = 8000;
    } else {
     VAR_25 = 3200;
    }
   } else {

    VAR_25 = 3200;
   }
  } else {

   VAR_25 = 4000;
  }

  if (VAR_22->convert_arg < VAR_25) {
   VAR_22->convert_arg = VAR_25;
   VAR_23++;
  }
  if (VAR_22->convert_arg > 4294967295u) {
   VAR_22->convert_arg = 4294967295u;
   VAR_23++;
  }
 } else if (VAR_22->convert_src == VAR_9) {
  if ((VAR_22->convert_arg & VAR_2) != 0) {

   if ((VAR_22->convert_arg & ~VAR_2) != 0) {
    VAR_22->convert_arg = FUNC_0(VAR_22->convert_arg, 0,
          ~VAR_2);
    VAR_23++;
   }


   if ((VAR_22->convert_arg & (VAR_2 & ~VAR_3))
       != VAR_1) {

    VAR_22->convert_arg =
        FUNC_0(VAR_22->start_arg, (VAR_1 | 0),
         VAR_2 & ~VAR_3);
    VAR_23++;
   }
  } else {



   if (VAR_22->convert_arg > 1) {

    VAR_22->convert_arg = 1;
    VAR_23++;
   }
  }
 } else {
  if (VAR_22->convert_arg != 0) {
   VAR_22->convert_arg = 0;
   VAR_23++;
  }
 }

 if (VAR_22->scan_end_arg != VAR_22->chanlist_len) {
  VAR_22->scan_end_arg = VAR_22->chanlist_len;
  VAR_23++;
 }

 if (VAR_22->stop_src == VAR_12) {
  if (VAR_22->stop_arg != 0) {
   VAR_22->stop_arg = 0;
   VAR_23++;
  }
 }

 if (VAR_22->scan_begin_src == VAR_9) {



  if ((VAR_22->scan_begin_arg & ~VAR_2) != 0) {
   VAR_22->scan_begin_arg = FUNC_0(VAR_22->scan_begin_arg, 0,
            ~VAR_2);
   VAR_23++;
  }

  if ((VAR_22->scan_begin_arg & VAR_2 & ~VAR_1) != 0) {
   VAR_22->scan_begin_arg = FUNC_0(VAR_22->scan_begin_arg, 0,
            VAR_2 & ~VAR_1);
   VAR_23++;
  }
 } else if (VAR_22->scan_begin_src == VAR_16) {

  if (!FUNC_5(VAR_22)) {
   VAR_23++;
  }
 } else {
  if (VAR_22->scan_begin_arg != 0) {
   VAR_22->scan_begin_arg = 0;
   VAR_23++;
  }
 }

 if (VAR_23)
  return 3;





 if (VAR_22->convert_src == VAR_16) {
  VAR_24 = VAR_22->convert_arg;
  FUNC_6(&VAR_22->convert_arg,
       VAR_22->flags & VAR_14);
  if (VAR_24 != VAR_22->convert_arg)
   VAR_23++;
 }

 if (VAR_22->scan_begin_src == VAR_16) {

  VAR_24 = VAR_22->scan_begin_arg;
  FUNC_6(&VAR_22->scan_begin_arg,
       VAR_22->flags & VAR_14);
  if (!FUNC_5(VAR_22)) {

   FUNC_6(&VAR_22->scan_begin_arg,
        VAR_15);
   FUNC_5(VAR_22);
  }
  if (VAR_24 != VAR_22->scan_begin_arg)
   VAR_23++;
 }

 if (VAR_23)
  return 4;



 if (VAR_22->chanlist && VAR_22->chanlist_len > 0) {
  enum {
   seq_err = 1 << 0,
   rangepair_err = 1 << 1,
   polarity_err = 1 << 2,
   aref_err = 1 << 3,
   diffchan_err = 1 << 4,
   buggy_chan0_err = 1 << 5
  };
  unsigned int VAR_26;
  unsigned int VAR_27, VAR_28;
  unsigned int VAR_29, VAR_30;
  unsigned int VAR_31, VAR_32;
  unsigned int VAR_33, VAR_34;
  unsigned int VAR_35;
  unsigned int VAR_36;

  VAR_35 = 0;
  VAR_26 = 0;
  VAR_28 = VAR_34 = VAR_30 = VAR_32 = 0;
  for (VAR_36 = 0; VAR_36 < VAR_22->chanlist_len; VAR_36++) {
   VAR_27 = FUNC_2(VAR_22->chanlist[VAR_36]);
   VAR_29 = FUNC_3(VAR_22->chanlist[VAR_36]);
   VAR_33 = FUNC_1(VAR_22->chanlist[VAR_36]);
   VAR_31 = VAR_18[VAR_29];



   if ((VAR_33 == VAR_0)
       && (VAR_27 >= (VAR_21->n_chan / 2))) {
    VAR_26 |= diffchan_err;
   }
   if (VAR_36 > 0) {


    if ((VAR_27 <= VAR_28)
        && (VAR_35 == 0)) {
     VAR_35 = VAR_36;
    }
    if ((VAR_35 > 0)
        && (VAR_22->chanlist[VAR_36] !=
     VAR_22->chanlist[VAR_36 % VAR_35])) {
     VAR_26 |= seq_err;
    }

    if (VAR_33 != VAR_34) {
     VAR_26 |= aref_err;
    }

    if (VAR_31 != VAR_32) {
     VAR_26 |= polarity_err;
    }


    if ((VAR_33 != VAR_0)
        && (((VAR_27 ^ VAR_28) & ~1) == 0)
        && (VAR_29 != VAR_30)) {
     VAR_26 |= rangepair_err;
    }
   }
   VAR_28 = VAR_27;
   VAR_30 = VAR_29;
   VAR_34 = VAR_33;
   VAR_32 = VAR_31;
  }
  if (VAR_35 == 0) {

   VAR_35 = VAR_36;
  }


  if ((VAR_36 % VAR_35) != 0) {
   VAR_26 |= seq_err;
  }
  if ((VAR_17->hwver > 0) && (VAR_17->hwver < 4)) {
   if ((VAR_35 > 1)
       && (FUNC_2(VAR_22->chanlist[0]) != 0)) {
    VAR_26 |= buggy_chan0_err;
   }
  }
  if (VAR_26 != 0) {
   VAR_23++;
   if ((VAR_26 & seq_err) != 0) {
    FUNC_4("comedi%d: amplc_pci230: ai_cmdtest: "
     "channel numbers must increase or "
     "sequence must repeat exactly\n",
     VAR_20->minor);
   }
   if ((VAR_26 & rangepair_err) != 0) {
    FUNC_4("comedi%d: amplc_pci230: ai_cmdtest: "
     "single-ended channel pairs must "
     "have the same range\n", VAR_20->minor);
   }
   if ((VAR_26 & polarity_err) != 0) {
    FUNC_4("comedi%d: amplc_pci230: ai_cmdtest: "
     "channel sequence ranges must be all "
     "bipolar or all unipolar\n",
     VAR_20->minor);
   }
   if ((VAR_26 & aref_err) != 0) {
    FUNC_4("comedi%d: amplc_pci230: ai_cmdtest: "
     "channel sequence analogue references "
     "must be all the same (single-ended "
     "or differential)\n", VAR_20->minor);
   }
   if ((VAR_26 & diffchan_err) != 0) {
    FUNC_4("comedi%d: amplc_pci230: ai_cmdtest: "
     "differential channel number out of "
     "range 0 to %u\n", VAR_20->minor,
     (VAR_21->n_chan / 2) - 1);
   }
   if ((VAR_26 & buggy_chan0_err) != 0) {

    FUNC_7("comedi: comedi%d: amplc_pci230: "
           "ai_cmdtest: Buggy PCI230+/260+ "
           "h/w version %u requires first channel "
           "of multi-channel sequence to be 0 "
           "(corrected in h/w version 4)\n",
           VAR_20->minor, VAR_17->hwver);
   }
  }
 }

 if (VAR_23)
  return 5;

 return 0;
}
