
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {unsigned int scan_progress; int events; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;

__attribute__((used)) static void FUNC_1(struct comedi_subdevice *VAR_1,
        unsigned int VAR_2)
{
 struct comedi_async *VAR_3 = VAR_1->async;
 unsigned int VAR_4 = FUNC_0(VAR_1);

 VAR_3->scan_progress += VAR_2;
 if (VAR_3->scan_progress >= VAR_4) {
  VAR_3->scan_progress %= VAR_4;
  VAR_3->events |= VAR_0;
 }
}
