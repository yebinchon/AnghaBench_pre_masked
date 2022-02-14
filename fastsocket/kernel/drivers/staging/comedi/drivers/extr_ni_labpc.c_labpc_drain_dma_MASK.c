
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; } ;
struct TYPE_3__ {scalar_t__ stop_src; } ;
struct comedi_async {int events; TYPE_1__ cmd; } ;
struct TYPE_4__ {int status1_bits; unsigned int dma_transfer_size; unsigned int count; int dma_chan; int * dma_buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,int ) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long) ;
 unsigned int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_4)
{
 struct comedi_subdevice *VAR_5 = VAR_4->read_subdev;
 struct comedi_async *VAR_6 = VAR_5->async;
 int VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_7 = VAR_2->status1_bits;

 VAR_8 = FUNC_1();
 FUNC_3(VAR_2->dma_chan);


 FUNC_2(VAR_2->dma_chan);


 VAR_9 = VAR_2->dma_transfer_size / VAR_3;




 VAR_11 = FUNC_4(VAR_2->dma_chan) / VAR_3;
 VAR_10 = VAR_9 - VAR_11;
 if (VAR_2->count < VAR_10 && VAR_6->cmd.stop_src == VAR_1)
  VAR_10 = VAR_2->count;


 VAR_12 = 0;
 if (VAR_6->cmd.stop_src != VAR_1) {
  VAR_12 = VAR_2->dma_transfer_size / VAR_3;
 } else if (VAR_2->count > VAR_10) {
  VAR_12 = VAR_2->count - VAR_10;
  if (VAR_12 > VAR_9)
   VAR_12 = VAR_9;
 }


 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  FUNC_0(VAR_5, VAR_2->dma_buffer[VAR_13]);
 }
 if (VAR_6->cmd.stop_src == VAR_1)
  VAR_2->count -= VAR_10;


 FUNC_6(VAR_2->dma_chan, FUNC_8(VAR_2->dma_buffer));
 FUNC_7(VAR_2->dma_chan, VAR_12 * VAR_3);
 FUNC_5(VAR_8);

 VAR_6->events |= VAR_0;
}
