
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ irq; } ;
struct comedi_cmd {int chanlist_len; int start_src; int start_arg; int stop_src; int scan_begin_src; int scan_begin_arg; int convert_src; int convert_arg; int flags; int stop_arg; int chanlist; } ;
struct TYPE_6__ {scalar_t__ reg_type; } ;
struct TYPE_5__ {unsigned int an_trig_etc_reg; int ai_cmd2; int ai_continuous; int aimode; int (* stc_writew ) (struct comedi_device*,int,int ) ;int int_a_enable_reg; int (* stc_writel ) (struct comedi_device*,int,int ) ;} ;
struct TYPE_4__ {int * inttrig; struct comedi_cmd cmd; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_38 ;
 int VAR_39 ;
 unsigned int VAR_40 ;
 int VAR_41 ;
 unsigned int FUNC_2 (int) ;
 unsigned int VAR_42 ;
 int VAR_43 ;
 unsigned int FUNC_3 (int ) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_4 (int ) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_5 (int) ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 unsigned int VAR_58 ;
 int VAR_59 ;
 int FUNC_6 (int) ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int FUNC_7 (char*,...) ;





 int VAR_66 ;

 int VAR_67 ;
 TYPE_3__ VAR_68 ;
 int FUNC_8 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_69 ;
 int VAR_70 ;
 int FUNC_9 (struct comedi_device*) ;
 int FUNC_10 (struct comedi_device*) ;
 int FUNC_11 (struct comedi_device*,int,int ) ;
 int FUNC_12 (struct comedi_device*,int,int ) ;
 scalar_t__ VAR_71 ;
 scalar_t__ VAR_72 ;
 int FUNC_13 (struct comedi_device*,int ,int,int) ;
 unsigned int VAR_73 ;
 int FUNC_14 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_15 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_16 (struct comedi_device*,int,int ) ;
 int FUNC_17 (struct comedi_device*,int,int ) ;
 int FUNC_18 (struct comedi_device*,int,int ) ;
 int FUNC_19 (struct comedi_device*,int,int ) ;
 int FUNC_20 (struct comedi_device*,int,int ) ;
 int FUNC_21 (struct comedi_device*,int,int ) ;
 int FUNC_22 (struct comedi_device*,int,int ) ;
 int FUNC_23 (struct comedi_device*,int,int ) ;
 int FUNC_24 (struct comedi_device*,int,int ) ;
 int FUNC_25 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_26 (struct comedi_device*,int,int ) ;
 int FUNC_27 (struct comedi_device*,int,int ) ;
 int FUNC_28 (struct comedi_device*,int,int ) ;
 int FUNC_29 (struct comedi_device*,int,int ) ;
 int FUNC_30 (struct comedi_device*,int,int ) ;
 int FUNC_31 (struct comedi_device*,int,int ) ;
 int FUNC_32 (struct comedi_device*,int,int ) ;
 int FUNC_33 (struct comedi_device*,int,int ) ;
 int FUNC_34 (struct comedi_device*,int,int ) ;
 int FUNC_35 (struct comedi_device*,int,int ) ;
 int FUNC_36 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_37 (struct comedi_device*,int,int ) ;
 int FUNC_38 (struct comedi_device*,int,int ) ;
 int FUNC_39 (struct comedi_device*,int,int ) ;
 int FUNC_40 (struct comedi_device*,int,int ) ;
 int FUNC_41 (struct comedi_device*,int,int ) ;
 int FUNC_42 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_43 (struct comedi_device*,int,int ) ;
 int FUNC_44 (struct comedi_device*,int,int ) ;
 int FUNC_45 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_46 (struct comedi_device*,int,int ) ;
 int FUNC_47 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_48(struct comedi_device *VAR_74, struct comedi_subdevice *VAR_75)
{
 const struct comedi_cmd *VAR_76 = &VAR_75->async->cmd;
 int VAR_77;
 int VAR_78 = 0;
 int VAR_79 = 0;
 int VAR_80 = 0;
 unsigned int VAR_81;
 int VAR_82 = 0;

 FUNC_7("ni_ai_cmd\n");
 if (VAR_74->irq == 0) {
  FUNC_8(VAR_74, "cannot run command without an irq");
  return -VAR_62;
 }
 FUNC_10(VAR_74);

 FUNC_11(VAR_74, VAR_76->chanlist_len, VAR_76->chanlist);


 VAR_69->stc_writew(VAR_74, VAR_4, VAR_65);



 VAR_69->an_trig_etc_reg &= ~VAR_58;
 VAR_69->stc_writew(VAR_74, VAR_69->an_trig_etc_reg,
       VAR_59);

 switch (VAR_76->start_src) {
 case 131:
 case 129:
  VAR_69->stc_writew(VAR_74, FUNC_3(0) |
        VAR_42 | VAR_38 |
        FUNC_2(0),
        VAR_57);
  break;
 case 132:
  {
   int VAR_83 = FUNC_6(VAR_76->start_arg);
   unsigned int VAR_84 = FUNC_3(0) |
       VAR_42 | FUNC_2(VAR_83 + 1);

   if (VAR_76->start_arg & VAR_61)
    VAR_84 |= VAR_40;
   if (VAR_76->start_arg & VAR_60)
    VAR_84 |= VAR_38;
   VAR_69->stc_writew(VAR_74, VAR_84,
         VAR_57);
   break;
  }
 }

 VAR_79 &= ~VAR_18;
 VAR_79 &= ~VAR_21;
 VAR_79 &= ~VAR_24;
 VAR_69->stc_writew(VAR_74, VAR_79, VAR_16);

 if (VAR_76->chanlist_len == 1 || (VAR_68.reg_type == VAR_71)
     || (VAR_68.reg_type == VAR_72)) {
  VAR_80 |= VAR_52;
  VAR_80 |= FUNC_5(31);
  VAR_80 |= VAR_53;
 } else {
  VAR_80 |= FUNC_5(19);
 }
 VAR_69->stc_writew(VAR_74, VAR_80,
       VAR_47);

 VAR_69->ai_cmd2 = 0;
 switch (VAR_76->stop_src) {
 case 133:
  VAR_81 = VAR_76->stop_arg - 1;

  if (VAR_68.reg_type == VAR_71) {

   VAR_81 += VAR_73;
  }

  VAR_69->stc_writel(VAR_74, VAR_81, VAR_23);

  VAR_78 |= VAR_54 | VAR_15 | VAR_56;
  VAR_69->stc_writew(VAR_74, VAR_78, VAR_14);

  VAR_69->stc_writew(VAR_74, VAR_22, VAR_1);

  VAR_69->ai_continuous = 0;
  if (VAR_81 == 0) {
   VAR_69->ai_cmd2 |= VAR_7;
   VAR_82 |= VAR_51;

   if (VAR_76->chanlist_len > 1)
    VAR_80 |=
        VAR_52 | VAR_49;
  }
  break;
 case 130:

  VAR_69->stc_writel(VAR_74, 0, VAR_23);

  VAR_78 |= VAR_54 | VAR_15 | VAR_5;
  VAR_69->stc_writew(VAR_74, VAR_78, VAR_14);


  VAR_69->stc_writew(VAR_74, VAR_22, VAR_1);

  VAR_69->ai_continuous = 1;

  break;
 }

 switch (VAR_76->scan_begin_src) {
 case 128:
  VAR_80 |= VAR_44 | VAR_48;
  VAR_69->stc_writew(VAR_74, VAR_80,
        VAR_47);

  VAR_79 |= FUNC_1(0);

  VAR_79 &= ~VAR_35;

  VAR_69->stc_writew(VAR_74, VAR_79, VAR_16);


  VAR_77 = FUNC_12(VAR_74, VAR_76->scan_begin_arg,
           VAR_66);
  VAR_69->stc_writel(VAR_74, VAR_77, VAR_37);
  VAR_69->stc_writew(VAR_74, VAR_36, VAR_1);
  break;
 case 132:
  if (VAR_76->scan_begin_arg & VAR_60)
   VAR_80 |= VAR_44;

  if (VAR_76->scan_begin_arg & VAR_61)
   VAR_80 |= VAR_46;
  if (VAR_76->scan_begin_src != VAR_76->convert_src ||
      (VAR_76->scan_begin_arg & ~VAR_60) !=
      (VAR_76->convert_arg & ~VAR_60))
   VAR_80 |= VAR_48;
  VAR_80 |=
      FUNC_4(1 + FUNC_6(VAR_76->scan_begin_arg));
  VAR_69->stc_writew(VAR_74, VAR_80,
        VAR_47);
  break;
 }

 switch (VAR_76->convert_src) {
 case 128:
 case 129:
  if (VAR_76->convert_arg == 0 || VAR_76->convert_src == 129)
   VAR_77 = 1;
  else
   VAR_77 = FUNC_12(VAR_74, VAR_76->convert_arg,
            VAR_66);
  VAR_69->stc_writew(VAR_74, 1, VAR_31);
  VAR_69->stc_writew(VAR_74, VAR_77, VAR_32);



  VAR_79 &= ~VAR_29;
  VAR_79 |= VAR_33;
  VAR_69->stc_writew(VAR_74, VAR_79, VAR_16);


  VAR_69->stc_writew(VAR_74, VAR_30, VAR_1);

  VAR_79 |= VAR_33;
  VAR_79 |= VAR_29;

  VAR_69->stc_writew(VAR_74, VAR_79, VAR_16);
  break;
 case 132:
  VAR_78 |= FUNC_0(1 + VAR_76->convert_arg);
  if ((VAR_76->convert_arg & VAR_61) == 0)
   VAR_78 |= VAR_0;
  VAR_69->stc_writew(VAR_74, VAR_78, VAR_14);

  VAR_79 |= VAR_55 | VAR_20;
  VAR_69->stc_writew(VAR_74, VAR_79, VAR_16);

  break;
 }

 if (VAR_74->irq) {


  VAR_82 |= VAR_9 |
      VAR_27;


  VAR_82 |= VAR_10;


  if (VAR_76->flags & VAR_67
      || (VAR_69->ai_cmd2 & VAR_7)) {

   VAR_69->aimode = 134;
  } else {
   VAR_69->aimode = 136;
  }

  switch (VAR_69->aimode) {
  case 136:





   VAR_69->stc_writew(VAR_74, VAR_11,
         VAR_17);

   break;
  case 135:

   VAR_69->stc_writew(VAR_74, VAR_13,
         VAR_17);
   break;
  case 134:




   VAR_69->stc_writew(VAR_74, VAR_11,
         VAR_17);

   VAR_82 |= VAR_51;
   break;
  default:
   break;
  }

  VAR_69->stc_writew(VAR_74, VAR_8 | VAR_50 | VAR_45 | VAR_43 | VAR_39 | VAR_26 | VAR_25, VAR_63);

  FUNC_13(VAR_74, VAR_64,
       VAR_82, 1);

  FUNC_7("Interrupt_A_Enable_Register = 0x%04x\n",
    VAR_69->int_a_enable_reg);
 } else {

  FUNC_13(VAR_74, VAR_64, ~0, 0);


  FUNC_7("interrupting on nothing\n");
 }


 VAR_69->stc_writew(VAR_74, VAR_3, VAR_65);

 switch (VAR_76->scan_begin_src) {
 case 128:
  VAR_69->stc_writew(VAR_74,
        VAR_28 | VAR_34 | VAR_6 |
        VAR_19, VAR_1);
  break;
 case 132:

  VAR_69->stc_writew(VAR_74,
        VAR_28 | VAR_34 | VAR_6 |
        VAR_19, VAR_1);
  break;
 }
 switch (VAR_76->start_src) {
 case 129:

  VAR_69->stc_writew(VAR_74, VAR_41 | VAR_69->ai_cmd2,
        VAR_2);
  VAR_75->async->inttrig = ((void*)0);
  break;
 case 132:
  VAR_75->async->inttrig = ((void*)0);
  break;
 case 131:
  VAR_75->async->inttrig = &VAR_70;
  break;
 }

 FUNC_7("exit ni_ai_cmd\n");

 return 0;
}
