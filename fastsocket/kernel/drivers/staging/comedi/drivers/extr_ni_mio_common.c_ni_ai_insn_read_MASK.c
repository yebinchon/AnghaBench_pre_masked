
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int adbits; int reg_type; } ;
struct TYPE_3__ {unsigned int* ai_offset; int (* stc_readw ) (struct comedi_device*,int ) ;int (* stc_writew ) (struct comedi_device*,int ,int ) ;} ;


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
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int,int *) ;
 int FUNC_2 (int ) ;
 unsigned int const FUNC_3 (int ) ;
 unsigned short FUNC_4 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int,int ) ;
 int VAR_18 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct comedi_device*,int ,int ) ;
 int FUNC_8 (struct comedi_device*,int ,int ) ;
 int FUNC_9 (struct comedi_device*,int ) ;
 int FUNC_10 (struct comedi_device*,int ,int ) ;
 int FUNC_11 (struct comedi_device*,int ,int ) ;
 int FUNC_12 (struct comedi_device*,int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct comedi_device *VAR_19,
      struct comedi_subdevice *VAR_20, struct comedi_insn *VAR_21,
      unsigned int *VAR_22)
{
 int VAR_23, VAR_24;
 const unsigned int VAR_25 = (1 << VAR_13.adbits) - 1;
 unsigned VAR_26;
 unsigned short VAR_27;
 unsigned long VAR_28;

 FUNC_1(VAR_19, 1, &VAR_21->chanspec);

 FUNC_0(VAR_19);

 VAR_26 = VAR_14->ai_offset[0];
 if (VAR_13.reg_type == VAR_15) {
  for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
   VAR_14->stc_writew(VAR_19, VAR_5,
         VAR_6);
   FUNC_13(1);
  }
  for (VAR_24 = 0; VAR_24 < VAR_21->n; VAR_24++) {
   VAR_14->stc_writew(VAR_19, VAR_5,
         VAR_6);

   VAR_27 = 0;
   for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
    if (FUNC_2(VAR_12) & 0x80) {
     VAR_27 = (FUNC_3(VAR_0) >> 16)
         & 0xffff;
     break;
    }
    if (!(VAR_14->stc_readw(VAR_19,
        VAR_8) &
          VAR_7)) {
     VAR_27 = FUNC_3(VAR_0) &
         0xffff;
     break;
    }
   }
   if (VAR_23 == VAR_11) {
    FUNC_6
        ("ni_mio_common: timeout in 611x ni_ai_insn_read\n");
    return -VAR_9;
   }
   VAR_27 += VAR_26;
   VAR_22[VAR_24] = VAR_27;
  }
 } else if (VAR_13.reg_type == VAR_16) {
  for (VAR_24 = 0; VAR_24 < VAR_21->n; VAR_24++) {
   VAR_14->stc_writew(VAR_19, VAR_5,
         VAR_6);


   VAR_28 = 0;
   for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
    if (FUNC_3(VAR_4) & 0x01) {
     FUNC_5(0x01, VAR_2);
     VAR_28 = FUNC_3(VAR_3);
     break;
    }
   }
   if (VAR_23 == VAR_11) {
    FUNC_6
        ("ni_mio_common: timeout in 6143 ni_ai_insn_read\n");
    return -VAR_9;
   }
   VAR_22[VAR_24] = (((VAR_28 >> 16) & 0xFFFF) + VAR_26) & 0xFFFF;
  }
 } else {
  for (VAR_24 = 0; VAR_24 < VAR_21->n; VAR_24++) {
   VAR_14->stc_writew(VAR_19, VAR_5,
         VAR_6);
   for (VAR_23 = 0; VAR_23 < VAR_11; VAR_23++) {
    if (!(VAR_14->stc_readw(VAR_19,
        VAR_8) &
          VAR_7))
     break;
   }
   if (VAR_23 == VAR_11) {
    FUNC_6
        ("ni_mio_common: timeout in ni_ai_insn_read\n");
    return -VAR_9;
   }
   if (VAR_13.reg_type & VAR_17) {
    VAR_22[VAR_24] =
        FUNC_3(VAR_10) & VAR_25;
   } else {
    VAR_27 = FUNC_4(VAR_1);
    VAR_27 += VAR_26;
    VAR_22[VAR_24] = VAR_27;
   }
  }
 }
 return VAR_21->n;
}
