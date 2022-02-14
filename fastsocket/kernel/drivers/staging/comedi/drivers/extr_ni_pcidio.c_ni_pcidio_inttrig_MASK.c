
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* mite; int OpModeBits; } ;
struct TYPE_5__ {int * inttrig; } ;
struct TYPE_4__ {scalar_t__ daq_io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4, unsigned int VAR_5)
{
 if (VAR_5 != 0)
  return -VAR_0;

 FUNC_0(VAR_2->OpModeBits, VAR_2->mite->daq_io_addr + VAR_1);
 VAR_4->async->inttrig = ((void*)0);

 return 1;
}
