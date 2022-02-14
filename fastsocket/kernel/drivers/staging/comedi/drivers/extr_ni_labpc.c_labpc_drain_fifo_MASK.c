
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; TYPE_3__* read_subdev; } ;
struct TYPE_4__ {scalar_t__ stop_src; } ;
struct comedi_async {int events; TYPE_1__ cmd; } ;
struct TYPE_6__ {struct comedi_async* async; } ;
struct TYPE_5__ {unsigned int status1_bits; unsigned int (* read_byte ) (scalar_t__) ;scalar_t__ count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,short) ;
 int FUNC_1 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_6 ;
 unsigned int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 short VAR_10;
 struct comedi_async *VAR_11 = VAR_7->read_subdev->async;
 const int VAR_12 = 10000;
 unsigned int VAR_13;

 VAR_6->status1_bits = VAR_6->read_byte(VAR_7->iobase + VAR_4);

 for (VAR_13 = 0; (VAR_6->status1_bits & VAR_3) && VAR_13 < VAR_12;
      VAR_13++) {

  if (VAR_11->cmd.stop_src == VAR_5) {
   if (VAR_6->count == 0)
    break;
   VAR_6->count--;
  }
  VAR_8 = VAR_6->read_byte(VAR_7->iobase + VAR_0);
  VAR_9 = VAR_6->read_byte(VAR_7->iobase + VAR_0);
  VAR_10 = (VAR_9 << 8) | VAR_8;
  FUNC_0(VAR_7->read_subdev, VAR_10);
  VAR_6->status1_bits =
      VAR_6->read_byte(VAR_7->iobase + VAR_4);
 }
 if (VAR_13 == VAR_12) {
  FUNC_1(VAR_7, "ai timeout, fifo never empties");
  VAR_11->events |= VAR_2 | VAR_1;
  return -1;
 }

 return 0;
}
