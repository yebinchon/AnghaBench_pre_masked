
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; } ;
struct TYPE_4__ {TYPE_1__* mite; } ;
struct TYPE_3__ {scalar_t__ daq_io_addr; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (scalar_t__,struct comedi_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2)
{
 if (VAR_1 && VAR_1->mite && VAR_1->mite->daq_io_addr) {
  FUNC_2(0x00,
         VAR_1->mite->daq_io_addr + VAR_0);
 }

 if (VAR_2->irq) {
  FUNC_0(VAR_2->irq, VAR_2);
 }

 if (VAR_1 && VAR_1->mite) {
  FUNC_1(VAR_1->mite);
 }

 return 0;
}
