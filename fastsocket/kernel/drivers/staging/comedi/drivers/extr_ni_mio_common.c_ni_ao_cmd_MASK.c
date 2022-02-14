
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ irq; } ;
struct comedi_cmd {int chanlist_len; int* chanlist; int stop_src; int start_src; int start_arg; int stop_arg; int scan_begin_src; int scan_begin_arg; int scan_end_arg; } ;
struct TYPE_6__ {int reg_type; scalar_t__ ao_fifo_depth; } ;
struct TYPE_5__ {int ao_mode1; int ao_trigger_select; int ao_mode3; int ao_mode2; int ao_cmd2; int (* stc_writew ) (struct comedi_device*,int,int ) ;int (* stc_writel ) (struct comedi_device*,unsigned int,int ) ;} ;
struct TYPE_4__ {int * inttrig; struct comedi_cmd cmd; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned int FUNC_0 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_2 (int) ;
 int VAR_46 ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_5 (int) ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_6 () ;
 int VAR_51 ;
 int FUNC_7 (int) ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;





 int VAR_58 ;

 int FUNC_8 (int,int ) ;
 TYPE_3__ VAR_59 ;
 int FUNC_9 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_60 ;
 int FUNC_10 (struct comedi_device*,struct comedi_subdevice*,int*,int,int) ;
 int VAR_61 ;
 unsigned int FUNC_11 (struct comedi_device*,int,int ) ;
 int VAR_62 ;
 int VAR_63 ;
 int FUNC_12 (struct comedi_device*,int ,int ,int) ;
 int FUNC_13 (struct comedi_device*,int,int ) ;
 int FUNC_14 (struct comedi_device*,int,int ) ;
 int FUNC_15 (struct comedi_device*,int,int ) ;
 int FUNC_16 (struct comedi_device*,int,int ) ;
 int FUNC_17 (struct comedi_device*,int,int ) ;
 int FUNC_18 (struct comedi_device*,int,int ) ;
 int FUNC_19 (struct comedi_device*,int,int ) ;
 int FUNC_20 (struct comedi_device*,int,int ) ;
 int FUNC_21 (struct comedi_device*,int,int ) ;
 int FUNC_22 (struct comedi_device*,int,int ) ;
 int FUNC_23 (struct comedi_device*,int,int ) ;
 int FUNC_24 (struct comedi_device*,int,int ) ;
 int FUNC_25 (struct comedi_device*,int,int ) ;
 int FUNC_26 (struct comedi_device*,int,int ) ;
 int FUNC_27 (struct comedi_device*,int,int ) ;
 int FUNC_28 (struct comedi_device*,int,int ) ;
 int FUNC_29 (struct comedi_device*,int,int ) ;
 int FUNC_30 (struct comedi_device*,int,int ) ;
 int FUNC_31 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_32 (struct comedi_device*,int,int ) ;
 int FUNC_33 (struct comedi_device*,int,int ) ;
 int FUNC_34 (struct comedi_device*,int,int ) ;
 int FUNC_35 (struct comedi_device*,int,int ) ;
 int FUNC_36 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_37 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_38 (struct comedi_device*,int,int ) ;
 int FUNC_39 (struct comedi_device*,int,int ) ;
 int FUNC_40 (struct comedi_device*,int,int ) ;
 int FUNC_41 (struct comedi_device*,int,int ) ;
 int FUNC_42 (struct comedi_device*,int,int ) ;
 int FUNC_43 (struct comedi_device*,int,int ) ;
 int FUNC_44 (struct comedi_device*,int,int ) ;
 int FUNC_45 (struct comedi_device*,int,int ) ;
 int FUNC_46 (struct comedi_device*,int,int ) ;
 int FUNC_47 (struct comedi_device*,int,int ) ;
 int FUNC_48 (struct comedi_device*,int,int ) ;
 int FUNC_49 (struct comedi_device*,int,int ) ;
 int FUNC_50 (struct comedi_device*,int,int ) ;
 int FUNC_51 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_52(struct comedi_device *VAR_64, struct comedi_subdevice *VAR_65)
{
 const struct comedi_cmd *VAR_66 = &VAR_65->async->cmd;
 int VAR_67;
 int VAR_68;
 unsigned VAR_69;

 if (VAR_64->irq == 0) {
  FUNC_9(VAR_64, "cannot run command without an irq");
  return -VAR_54;
 }

 VAR_60->stc_writew(VAR_64, VAR_11, VAR_57);

 VAR_60->stc_writew(VAR_64, VAR_16, VAR_8);

 if (VAR_59.reg_type & VAR_62) {
  FUNC_8(VAR_51, VAR_22);

  VAR_67 = 0;
  for (VAR_68 = 0; VAR_68 < VAR_66->chanlist_len; VAR_68++) {
   int VAR_70;

   VAR_70 = FUNC_7(VAR_66->chanlist[VAR_68]);
   VAR_67 |= 1 << VAR_70;
   FUNC_8(VAR_70, VAR_50);
  }
  FUNC_8(VAR_67, VAR_36);
 }

 FUNC_10(VAR_64, VAR_65, VAR_66->chanlist, VAR_66->chanlist_len, 1);

 if (VAR_66->stop_src == 130) {
  VAR_60->ao_mode1 |= VAR_12;
  VAR_60->ao_mode1 &= ~VAR_38;
 } else {
  VAR_60->ao_mode1 &= ~VAR_12;
  VAR_60->ao_mode1 |= VAR_38;
 }
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode1, VAR_23);
 switch (VAR_66->start_src) {
 case 131:
 case 129:
  VAR_60->ao_trigger_select &=
      ~(VAR_31 | FUNC_1(-1));
  VAR_60->ao_trigger_select |= VAR_30 | VAR_32;
  VAR_60->stc_writew(VAR_64, VAR_60->ao_trigger_select,
        VAR_39);
  break;
 case 132:
  VAR_60->ao_trigger_select =
      FUNC_1(FUNC_7(VAR_66->start_arg) + 1);
  if (VAR_66->start_arg & VAR_53)
   VAR_60->ao_trigger_select |= VAR_31;
  if (VAR_66->start_arg & VAR_52)
   VAR_60->ao_trigger_select |= VAR_30;
  VAR_60->stc_writew(VAR_64, VAR_60->ao_trigger_select,
        VAR_39);
  break;
 default:
  FUNC_6();
  break;
 }
 VAR_60->ao_mode3 &= ~VAR_37;
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode3, VAR_25);

 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode1, VAR_23);
 VAR_60->ao_mode2 &= ~VAR_2;
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode2, VAR_24);
 if (VAR_66->stop_src == 130) {
  VAR_60->stc_writel(VAR_64, 0xffffff, VAR_4);
 } else {
  VAR_60->stc_writel(VAR_64, 0, VAR_4);
 }
 VAR_60->stc_writew(VAR_64, VAR_3, VAR_8);
 VAR_60->ao_mode2 &= ~VAR_40;
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode2, VAR_24);
 switch (VAR_66->stop_src) {
 case 133:
  if (VAR_59.reg_type & VAR_63) {

   VAR_60->stc_writel(VAR_64, VAR_66->stop_arg - 1,
         VAR_42);
   VAR_60->stc_writew(VAR_64, VAR_41,
         VAR_8);
  } else {
   VAR_60->stc_writel(VAR_64, VAR_66->stop_arg,
         VAR_42);
   VAR_60->stc_writew(VAR_64, VAR_41,
         VAR_8);
   VAR_60->stc_writel(VAR_64, VAR_66->stop_arg - 1,
         VAR_42);
  }
  break;
 case 130:
  VAR_60->stc_writel(VAR_64, 0xffffff, VAR_42);
  VAR_60->stc_writew(VAR_64, VAR_41, VAR_8);
  VAR_60->stc_writel(VAR_64, 0xffffff, VAR_42);
  break;
 default:
  VAR_60->stc_writel(VAR_64, 0, VAR_42);
  VAR_60->stc_writew(VAR_64, VAR_41, VAR_8);
  VAR_60->stc_writel(VAR_64, VAR_66->stop_arg, VAR_42);
 }

 VAR_60->ao_mode1 &=
     ~(FUNC_3(0x1f) | VAR_46 |
       FUNC_5(0x1f) | VAR_48);
 switch (VAR_66->scan_begin_src) {
 case 128:
  VAR_60->ao_cmd2 &= ~VAR_1;
  VAR_69 =
      FUNC_11(VAR_64, VAR_66->scan_begin_arg,
       VAR_58);
  VAR_60->stc_writel(VAR_64, 1, VAR_45);
  VAR_60->stc_writew(VAR_64, VAR_44, VAR_8);
  VAR_60->stc_writel(VAR_64, VAR_69, VAR_45);
  break;
 case 132:
  VAR_60->ao_mode1 |=
      FUNC_5(VAR_66->scan_begin_arg);
  if (VAR_66->scan_begin_arg & VAR_53)
   VAR_60->ao_mode1 |= VAR_48;
  VAR_60->ao_cmd2 |= VAR_1;
  break;
 default:
  FUNC_6();
  break;
 }
 VAR_60->stc_writew(VAR_64, VAR_60->ao_cmd2, VAR_9);
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode1, VAR_23);
 VAR_60->ao_mode2 &=
     ~(FUNC_2(3) | VAR_43);
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode2, VAR_24);

 if (VAR_66->scan_end_arg > 1) {
  VAR_60->ao_mode1 |= VAR_26;
  VAR_60->stc_writew(VAR_64,
        FUNC_0(VAR_66->scan_end_arg -
         1) |
        FUNC_4
        (VAR_49),
        VAR_28);
 } else {
  unsigned VAR_71;
  VAR_60->ao_mode1 &= ~VAR_26;
  VAR_71 = FUNC_4(VAR_49);
  if (VAR_59.
      reg_type & (VAR_63 | VAR_62)) {
   VAR_71 |= FUNC_0(0);
  } else {
   VAR_71 |=
       FUNC_0(FUNC_7(VAR_66->chanlist[0]));
  }
  VAR_60->stc_writew(VAR_64, VAR_71, VAR_28);
 }
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode1, VAR_23);

 VAR_60->stc_writew(VAR_64, VAR_13 | VAR_14,
       VAR_8);

 VAR_60->ao_mode3 |= VAR_34;
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode3, VAR_25);

 VAR_60->ao_mode2 &= ~VAR_20;



 VAR_60->ao_mode2 |= VAR_18;

 VAR_60->ao_mode2 &= ~VAR_21;
 VAR_60->stc_writew(VAR_64, VAR_60->ao_mode2, VAR_24);

 VAR_67 = VAR_5 | VAR_47 |
     VAR_35;
 if (VAR_59.ao_fifo_depth)
  VAR_67 |= VAR_17;
 else
  VAR_67 |= VAR_15;






 VAR_60->stc_writew(VAR_64, VAR_67, VAR_29);

 VAR_60->stc_writew(VAR_64, VAR_0, VAR_33);

 VAR_60->stc_writew(VAR_64, VAR_10, VAR_57);

 if (VAR_66->stop_src == 133) {
  VAR_60->stc_writew(VAR_64, VAR_6,
        VAR_55);
  FUNC_12(VAR_64, VAR_56,
       VAR_7, 1);
 }

 VAR_65->async->inttrig = &VAR_61;

 return 0;
}
