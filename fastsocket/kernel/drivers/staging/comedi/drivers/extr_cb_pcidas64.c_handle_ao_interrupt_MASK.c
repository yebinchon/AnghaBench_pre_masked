
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int spinlock; struct comedi_subdevice* write_subdev; } ;
struct comedi_cmd {int dummy; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {scalar_t__ plx9080_iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (char*,...) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct comedi_device*,int) ;
 scalar_t__ FUNC_2 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_cmd*) ;
 TYPE_1__* FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct comedi_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct comedi_device *VAR_10,
    unsigned short VAR_11, unsigned int VAR_12)
{
 struct comedi_subdevice *VAR_13 = VAR_10->write_subdev;
 struct comedi_async *VAR_14;
 struct comedi_cmd *VAR_15;
 uint8_t VAR_16;
 unsigned long VAR_17;


 if (VAR_13 == ((void*)0))
  return;
 VAR_14 = VAR_13->async;
 VAR_15 = &VAR_14->cmd;


 FUNC_9(&VAR_10->spinlock, VAR_17);
 VAR_16 = FUNC_6(FUNC_5(VAR_10)->plx9080_iobase + VAR_5);
 if (VAR_12 & VAR_3) {
  if ((VAR_16 & VAR_9)
      && !(VAR_16 & VAR_8))
   FUNC_11(VAR_9 | VAR_4,
          FUNC_5(VAR_10)->plx9080_iobase + VAR_5);
  else
   FUNC_11(VAR_4,
          FUNC_5(VAR_10)->plx9080_iobase + VAR_5);
  FUNC_10(&VAR_10->spinlock, VAR_17);
  FUNC_0("dma0 status 0x%x\n", VAR_16);
  if (VAR_16 & VAR_9) {
   FUNC_4(VAR_10, VAR_15);

   if (FUNC_1(VAR_10, VAR_16))
    FUNC_8(VAR_10);
  }
  FUNC_0(" cleared dma ch0 interrupt\n");
 } else
  FUNC_10(&VAR_10->spinlock, VAR_17);

 if ((VAR_11 & VAR_2)) {
  VAR_14->events |= VAR_0;
  if (FUNC_2(VAR_10, VAR_15))
   VAR_14->events |= VAR_1;
  FUNC_0("plx dma0 desc reg 0x%x\n",
       FUNC_7(FUNC_5(VAR_10)->plx9080_iobase +
      VAR_6));
  FUNC_0("plx dma0 address reg 0x%x\n",
       FUNC_7(FUNC_5(VAR_10)->plx9080_iobase +
      VAR_7));
 }
 FUNC_3(VAR_10, VAR_13);
}
