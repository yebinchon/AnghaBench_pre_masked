
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_2__ {int ai_fifo_segment_length; int ai_count; scalar_t__ main_iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct comedi_subdevice*,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_5)
{
 struct comedi_subdevice *VAR_6 = VAR_5->read_subdev;
 struct comedi_async *VAR_7 = VAR_6->async;
 struct comedi_cmd *VAR_8 = &VAR_7->cmd;
 unsigned int VAR_9;
 uint16_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 do {

  VAR_12 =
      FUNC_6(FUNC_5(VAR_5)->main_iobase + VAR_1) & 0x7fff;
  VAR_14 =
      FUNC_6(FUNC_5(VAR_5)->main_iobase + VAR_2) & 0x7fff;




  VAR_10 = FUNC_6(FUNC_5(VAR_5)->main_iobase + VAR_3);



  VAR_11 = FUNC_1(VAR_10);
  VAR_13 = FUNC_2(VAR_10);

  FUNC_0(" rd seg %i, wrt seg %i, rd idx %i, wrt idx %i\n",
       VAR_11, VAR_13, VAR_12,
       VAR_14);

  if (VAR_11 != VAR_13)
   VAR_15 =
       FUNC_5(VAR_5)->ai_fifo_segment_length - VAR_12;
  else
   VAR_15 = VAR_14 - VAR_12;

  if (VAR_8->stop_src == VAR_4) {
   if (FUNC_5(VAR_5)->ai_count == 0)
    break;
   if (VAR_15 > FUNC_5(VAR_5)->ai_count) {
    VAR_15 = FUNC_5(VAR_5)->ai_count;
   }
   FUNC_5(VAR_5)->ai_count -= VAR_15;
  }

  if (VAR_15 < 0) {
   FUNC_4(" cb_pcidas64: bug! num_samples < 0\n");
   break;
  }

  FUNC_0(" read %i samples from fifo\n", VAR_15);

  for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++) {
   FUNC_3(VAR_6,
         FUNC_6(FUNC_5(VAR_5)->main_iobase +
        VAR_0));
  }

 } while (VAR_11 != VAR_13);
}
