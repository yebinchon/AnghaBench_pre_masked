
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; } ;
struct TYPE_2__ {int buf_write_count; int buf_read_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_device*,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4;


 FUNC_2(&VAR_1->spinlock, VAR_3);
 VAR_4 = FUNC_1(VAR_1->iobase + VAR_0);
 FUNC_0(VAR_1, VAR_4);
 FUNC_3(&VAR_1->spinlock, VAR_3);

 return VAR_2->async->buf_write_count - VAR_2->async->buf_read_count;
}
