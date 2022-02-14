
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct comedi_async {struct comedi_cmd cmd; } ;
struct TYPE_2__ {unsigned int ai_count; scalar_t__ main_iobase; scalar_t__ dio_counter_iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,int) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4)
{
 struct comedi_subdevice *VAR_5 = VAR_4->read_subdev;
 struct comedi_async *VAR_6 = VAR_5->async;
 struct comedi_cmd *VAR_7 = &VAR_6->cmd;
 unsigned int VAR_8;
 unsigned int VAR_9 = 100000;
 uint32_t VAR_10;
 int VAR_11 =
     FUNC_3(FUNC_1(VAR_4)->main_iobase + VAR_2) & 0x7fff;
 int VAR_12 =
     FUNC_3(FUNC_1(VAR_4)->main_iobase + VAR_1) & 0x7fff;

 if (VAR_7->stop_src == VAR_3) {
  if (VAR_9 > FUNC_1(VAR_4)->ai_count) {
   VAR_9 = FUNC_1(VAR_4)->ai_count;
  }
 }
 for (VAR_8 = 0; VAR_12 != VAR_11 && VAR_8 < VAR_9;) {
  VAR_10 = FUNC_2(FUNC_1(VAR_4)->dio_counter_iobase + VAR_0);
  FUNC_0(VAR_5, VAR_10 & 0xffff);
  VAR_8++;
  if (VAR_8 < VAR_9) {
   FUNC_0(VAR_5, (VAR_10 >> 16) & 0xffff);
   VAR_8++;
  }
  VAR_12 =
      FUNC_3(FUNC_1(VAR_4)->main_iobase + VAR_1) & 0x7fff;
 }
 FUNC_1(VAR_4)->ai_count -= VAR_8;
}
