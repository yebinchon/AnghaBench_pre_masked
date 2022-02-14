
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;
struct TYPE_2__ {scalar_t__ ao_scan_count; int ao_continuous; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_async*,short*) ;
 int FUNC_2 (struct comedi_device*,char*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,short,int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_5,
        struct comedi_subdevice *VAR_6)
{
 short VAR_7;
 int VAR_8, VAR_9;
 struct comedi_async *VAR_10 = VAR_6->async;
 struct comedi_cmd *VAR_11 = &VAR_10->cmd;

 if (!VAR_4->ao_continuous && (VAR_4->ao_scan_count == 0)) {
  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_11->chanlist_len; VAR_8++) {

  VAR_9 = FUNC_1(VAR_6->async, &VAR_7);
  if (VAR_9 == 0) {
   VAR_6->async->events |= VAR_3;
   FUNC_3(VAR_5, VAR_6);
   FUNC_2(VAR_5, "AO buffer underrun");
   return;
  }

  FUNC_4(VAR_5, VAR_7, FUNC_0(VAR_11->chanlist[VAR_8]));
 }

 VAR_10->events |= VAR_0 | VAR_2;
 if (!VAR_4->ao_continuous) {
  VAR_4->ao_scan_count--;
  if (VAR_4->ao_scan_count == 0) {

   VAR_10->events |= VAR_1;
   FUNC_3(VAR_5, VAR_6);
  }
 }
}
