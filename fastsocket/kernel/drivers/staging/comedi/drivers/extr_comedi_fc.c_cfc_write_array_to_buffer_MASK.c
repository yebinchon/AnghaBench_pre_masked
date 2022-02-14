
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_async*,int ,void*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_async*,unsigned int) ;
 int FUNC_2 (struct comedi_async*,unsigned int) ;
 int FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (char*) ;

unsigned int FUNC_5(struct comedi_subdevice *VAR_2,
           void *VAR_3, unsigned int VAR_4)
{
 struct comedi_async *VAR_5 = VAR_2->async;
 unsigned int VAR_6;

 if (VAR_4 == 0)
  return 0;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6 != VAR_4) {
  FUNC_4("comedi: buffer overrun\n");
  VAR_5->events |= VAR_1;
  return 0;
 }

 FUNC_0(VAR_5, 0, VAR_3, VAR_4);
 FUNC_2(VAR_5, VAR_4);
 FUNC_3(VAR_2, VAR_4);
 VAR_5->events |= VAR_0;

 return VAR_4;
}
