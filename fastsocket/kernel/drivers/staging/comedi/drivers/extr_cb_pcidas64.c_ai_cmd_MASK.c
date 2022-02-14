
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; } ;
struct comedi_cmd {scalar_t__ convert_src; int chanlist_len; int* chanlist; int flags; scalar_t__ start_src; int start_arg; scalar_t__ stop_src; int stop_arg; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_7__ {scalar_t__ layout; } ;
struct TYPE_6__ {int adc_control1_bits; int ai_dma_desc_bus_addr; int ai_cmd_running; scalar_t__ main_iobase; TYPE_1__* ai_dma_desc; scalar_t__ ai_dma_index; } ;
struct TYPE_5__ {int transfer_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (char*,...) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 unsigned int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct comedi_device*) ;
 int FUNC_10 (struct comedi_device*,int) ;
 int FUNC_11 (struct comedi_device*) ;
 int FUNC_12 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_13 (struct comedi_device*,int,int) ;
 TYPE_2__* FUNC_14 (struct comedi_device*) ;
 int FUNC_15 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_16 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_17 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 scalar_t__ FUNC_20 (struct comedi_cmd*) ;
 int FUNC_21 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_22(struct comedi_device *VAR_32, struct comedi_subdevice *VAR_33)
{
 struct comedi_async *VAR_34 = VAR_33->async;
 struct comedi_cmd *VAR_35 = &VAR_34->cmd;
 uint32_t VAR_36;
 unsigned int VAR_37;
 unsigned long VAR_38;
 int VAR_39;

 FUNC_9(VAR_32);
 FUNC_2(VAR_32, 1);

 VAR_39 = FUNC_16(VAR_32, VAR_35);
 if (VAR_39 < 0)
  return VAR_39;


 FUNC_21(0, FUNC_14(VAR_32)->main_iobase + VAR_17);

 FUNC_15(VAR_32, VAR_35);

 FUNC_17(VAR_32, VAR_35);

 FUNC_12(VAR_32, VAR_35);

 FUNC_18(&VAR_32->spinlock, VAR_38);

 FUNC_14(VAR_32)->adc_control1_bits |= VAR_16;
 FUNC_14(VAR_32)->adc_control1_bits &= ~VAR_3;
 if (FUNC_7(VAR_32)->layout != VAR_24) {
  FUNC_14(VAR_32)->adc_control1_bits &= ~VAR_9;
  if (VAR_35->convert_src == VAR_28)
   FUNC_14(VAR_32)->adc_control1_bits |= FUNC_5(13);
  else
   FUNC_14(VAR_32)->adc_control1_bits |= FUNC_5(8);
 } else {
  FUNC_14(VAR_32)->adc_control1_bits &= ~VAR_18;
  if (VAR_35->chanlist_len == 4)
   FUNC_14(VAR_32)->adc_control1_bits |= VAR_23;
  else if (VAR_35->chanlist_len == 2)
   FUNC_14(VAR_32)->adc_control1_bits |= VAR_31;
  FUNC_14(VAR_32)->adc_control1_bits &= ~VAR_8;
  FUNC_14(VAR_32)->adc_control1_bits |=
      FUNC_4(FUNC_0(VAR_35->chanlist[0]));
  FUNC_14(VAR_32)->adc_control1_bits &= ~VAR_7;
  FUNC_14(VAR_32)->adc_control1_bits |=
      FUNC_3(FUNC_0
       (VAR_35->
        chanlist[VAR_35->chanlist_len - 1]));
 }
 FUNC_21(FUNC_14(VAR_32)->adc_control1_bits,
        FUNC_14(VAR_32)->main_iobase + VAR_2);
 FUNC_1("control1 bits 0x%x\n", FUNC_14(VAR_32)->adc_control1_bits);
 FUNC_19(&VAR_32->spinlock, VAR_38);


 FUNC_21(0, FUNC_14(VAR_32)->main_iobase + VAR_0);

 if ((VAR_35->flags & VAR_30) == 0 ||
     FUNC_7(VAR_32)->layout == VAR_24) {
  FUNC_14(VAR_32)->ai_dma_index = 0;


  for (VAR_37 = 0; VAR_37 < FUNC_6(FUNC_7(VAR_32)); VAR_37++)
   FUNC_14(VAR_32)->ai_dma_desc[VAR_37].transfer_size =
       FUNC_8(FUNC_11(VAR_32) *
     sizeof(uint16_t));


  FUNC_13(VAR_32, 1,
       FUNC_14(VAR_32)->ai_dma_desc_bus_addr |
       VAR_25 |
       VAR_26 |
       VAR_27);

  FUNC_10(VAR_32, 1);
 }

 if (FUNC_7(VAR_32)->layout == VAR_24) {

  VAR_36 = 0;
  if (VAR_35->start_src == VAR_28 && FUNC_0(VAR_35->start_arg))
   VAR_36 |= VAR_21;
  if (VAR_35->stop_src == VAR_28 && FUNC_0(VAR_35->stop_arg))
   VAR_36 |= VAR_22;
  FUNC_21(VAR_36, FUNC_14(VAR_32)->main_iobase + VAR_20);
 }

 FUNC_18(&VAR_32->spinlock, VAR_38);


 VAR_36 = VAR_5 | VAR_11 | VAR_6;
 if (VAR_35->flags & VAR_30)
  VAR_36 |= VAR_4;

 if (VAR_35->start_src == VAR_28) {
  VAR_36 |= VAR_13;
  if (VAR_35->start_arg & VAR_19)
   VAR_36 |= VAR_14;
 } else if (VAR_35->start_src == VAR_29)
  VAR_36 |= VAR_15;
 if (FUNC_20(VAR_35))
  VAR_36 |= VAR_10;
 FUNC_21(VAR_36, FUNC_14(VAR_32)->main_iobase + VAR_1);
 FUNC_1("control0 bits 0x%x\n", VAR_36);

 FUNC_14(VAR_32)->ai_cmd_running = 1;

 FUNC_19(&VAR_32->spinlock, VAR_38);


 if (VAR_35->start_src == VAR_29) {
  FUNC_21(0, FUNC_14(VAR_32)->main_iobase + VAR_12);
  FUNC_1("soft trig\n");
 }

 return 0;
}
