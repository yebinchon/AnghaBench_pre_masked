
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {int events; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_async*,int ,void*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_async*,unsigned int) ;
 int FUNC_2 (struct comedi_async*,unsigned int) ;
 int FUNC_3 (struct comedi_subdevice*,unsigned int) ;

unsigned int FUNC_4(struct comedi_subdevice *VAR_1,
     void *VAR_2, unsigned int VAR_3)
{
 struct comedi_async *VAR_4 = VAR_1->async;

 if (VAR_3 == 0)
  return 0;

 VAR_3 = FUNC_1(VAR_4, VAR_3);
 FUNC_0(VAR_4, 0, VAR_2, VAR_3);
 FUNC_2(VAR_4, VAR_3);
 FUNC_3(VAR_1, VAR_3);
 VAR_4->events |= VAR_0;

 return VAR_3;
}
