
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int di_mite_ring; } ;
struct TYPE_3__ {int prealloc_bufsz; int prealloc_buf; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->di_mite_ring, VAR_2->async);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(VAR_2->async->prealloc_buf, 0xaa, VAR_2->async->prealloc_bufsz);

 return 0;
}
