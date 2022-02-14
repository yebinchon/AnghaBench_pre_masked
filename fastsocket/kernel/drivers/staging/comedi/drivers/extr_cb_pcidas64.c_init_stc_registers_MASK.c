
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_device {int spinlock; } ;
struct TYPE_6__ {scalar_t__ layout; TYPE_1__* ai_fifo; } ;
struct TYPE_5__ {int adc_control1_bits; int hw_config_bits; int intr_enable_bits; scalar_t__ main_iobase; int dac_control1_bits; int fifo_size_bits; } ;
struct TYPE_4__ {int max_segment_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_3__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 TYPE_2__* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_15)
{
 uint16_t VAR_16;
 unsigned long VAR_17;

 FUNC_4(&VAR_15->spinlock, VAR_17);


 if (1)
  FUNC_2(VAR_15)->adc_control1_bits |= VAR_1;
 FUNC_6(FUNC_2(VAR_15)->adc_control1_bits,
        FUNC_2(VAR_15)->main_iobase + VAR_0);


 FUNC_6(0xff, FUNC_2(VAR_15)->main_iobase + VAR_2);

 VAR_16 = VAR_14 | VAR_7;
 if (FUNC_0(VAR_15)->layout == VAR_13)
  VAR_16 |= VAR_11;
 FUNC_2(VAR_15)->hw_config_bits |= VAR_16;
 FUNC_6(FUNC_2(VAR_15)->hw_config_bits,
        FUNC_2(VAR_15)->main_iobase + VAR_10);

 FUNC_6(0, FUNC_2(VAR_15)->main_iobase + VAR_6);
 FUNC_6(0, FUNC_2(VAR_15)->main_iobase + VAR_3);

 FUNC_5(&VAR_15->spinlock, VAR_17);


 FUNC_2(VAR_15)->fifo_size_bits |= VAR_4;
 FUNC_3(VAR_15,
       FUNC_0(VAR_15)->ai_fifo->max_segment_length);

 FUNC_2(VAR_15)->dac_control1_bits = VAR_5;
 FUNC_2(VAR_15)->intr_enable_bits =
     VAR_8 | VAR_9;
 FUNC_6(FUNC_2(VAR_15)->intr_enable_bits,
        FUNC_2(VAR_15)->main_iobase + VAR_12);

 FUNC_1(VAR_15);
}
