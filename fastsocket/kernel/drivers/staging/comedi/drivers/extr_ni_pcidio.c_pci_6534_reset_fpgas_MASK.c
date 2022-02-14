
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mite; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3)
{
 int VAR_4;
 int VAR_5;
 FUNC_1(0x0, VAR_2->mite->daq_io_addr + VAR_0);
 for (VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
  VAR_4 = FUNC_0(VAR_3, VAR_5);
  if (VAR_4 < 0)
   break;
 }
 FUNC_1(0x0, VAR_2->mite->daq_io_addr + VAR_1);
 return VAR_4;
}
