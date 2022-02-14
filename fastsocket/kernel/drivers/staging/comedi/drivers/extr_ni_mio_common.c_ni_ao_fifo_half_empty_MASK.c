
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int ao_fifo_depth; } ;
struct TYPE_3__ {int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
     struct comedi_subdevice *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->async);
 if (VAR_5 == 0) {
  VAR_4->async->events |= VAR_1;
  return 0;
 }

 VAR_5 /= sizeof(short);
 if (VAR_5 > VAR_2.ao_fifo_depth / 2)
  VAR_5 = VAR_2.ao_fifo_depth / 2;

 FUNC_1(VAR_3, VAR_4, VAR_5);

 VAR_4->async->events |= VAR_0;

 return 1;
}
