
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int spinlock; } ;
struct TYPE_2__ {int buf_write_count; int buf_read_count; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1)
{
 unsigned long VAR_2;


 FUNC_1(&VAR_0->spinlock, VAR_2);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->spinlock, VAR_2);

 return VAR_1->async->buf_write_count - VAR_1->async->buf_read_count;
}
