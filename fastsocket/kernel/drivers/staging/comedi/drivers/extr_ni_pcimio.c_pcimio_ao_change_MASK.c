
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int ao_mite_ring; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->ao_mite_ring, VAR_2->async);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
