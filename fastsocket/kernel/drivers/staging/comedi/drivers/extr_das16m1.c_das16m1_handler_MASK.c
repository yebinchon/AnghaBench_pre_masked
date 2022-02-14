
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; int stop_arg; int chanlist_len; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {int adc_count; int initial_hw_count; int ai_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct comedi_subdevice*,int ,int) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_7, unsigned int VAR_8)
{
 struct comedi_subdevice *VAR_9;
 struct comedi_async *VAR_10;
 struct comedi_cmd *VAR_11;
 u16 VAR_12;
 u16 VAR_13;

 VAR_9 = VAR_7->read_subdev;
 VAR_10 = VAR_9->async;
 VAR_10->events = 0;
 VAR_11 = &VAR_10->cmd;


 VAR_13 = FUNC_4(VAR_7->iobase + VAR_2, 0, 1);


 if (VAR_6->adc_count == 0 && VAR_13 == VAR_6->initial_hw_count) {
  VAR_12 = 0;
 } else {






  VAR_12 = -VAR_13 - VAR_6->adc_count;
 }

 if (VAR_11->stop_src == VAR_5) {
  if (VAR_12 > VAR_11->stop_arg * VAR_11->chanlist_len)
   VAR_12 = VAR_11->stop_arg * VAR_11->chanlist_len;
 }

 if (VAR_12 > VAR_3)
  VAR_12 = VAR_3;
 FUNC_5(VAR_7->iobase, VAR_6->ai_buffer, VAR_12);
 FUNC_6(VAR_6->ai_buffer, VAR_12);
 FUNC_0(VAR_9, VAR_6->ai_buffer,
      VAR_12 * sizeof(short));
 VAR_6->adc_count += VAR_12;

 if (VAR_11->stop_src == VAR_5) {
  if (VAR_6->adc_count >= VAR_11->stop_arg * VAR_11->chanlist_len) {
   FUNC_3(VAR_7, VAR_9);
   VAR_10->events |= VAR_0;
  }
 }



 if (VAR_8 & VAR_4) {
  FUNC_3(VAR_7, VAR_9);
  VAR_10->events |= VAR_0 | VAR_1;
  FUNC_1(VAR_7, "fifo overflow");
 }

 FUNC_2(VAR_7, VAR_9);

}
