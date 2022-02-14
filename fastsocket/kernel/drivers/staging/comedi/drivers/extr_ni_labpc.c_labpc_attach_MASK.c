
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct labpc_private {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_devconfig {unsigned long* options; } ;
struct TYPE_7__ {TYPE_2__* mite; } ;
struct TYPE_6__ {scalar_t__ daq_io_addr; } ;
struct TYPE_5__ {int bustype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_device*,int) ;
 TYPE_4__* VAR_2 ;

 int FUNC_1 (struct comedi_device*,unsigned long,unsigned int,unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;


 int FUNC_5 (char*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4, struct comedi_devconfig *VAR_5)
{
 unsigned long VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;





 if (FUNC_0(VAR_4, sizeof(struct labpc_private)) < 0)
  return -VAR_1;


 switch (VAR_3->bustype) {
 case 130:
  VAR_6 = VAR_5->options[0];
  VAR_7 = VAR_5->options[1];
  VAR_8 = VAR_5->options[2];
  break;
 case 129:
  FUNC_5(" this driver has not been built with PCI support.\n");
  return -VAR_0;

  break;
 case 128:
  FUNC_5
      (" this driver does not support pcmcia cards, use ni_labpc_cs.o\n");
  return -VAR_0;
  break;
 default:
  FUNC_5("bug! couldn't determine board type\n");
  return -VAR_0;
  break;
 }

 return FUNC_1(VAR_4, VAR_6, VAR_7, VAR_8);
}
