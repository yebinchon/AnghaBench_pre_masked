
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_3, VAR_4->io_addr + VAR_2);
 VAR_7 = FUNC_0(VAR_5, VAR_0);

 FUNC_1(0, VAR_4->io_addr + VAR_1);

 return 0;
}
