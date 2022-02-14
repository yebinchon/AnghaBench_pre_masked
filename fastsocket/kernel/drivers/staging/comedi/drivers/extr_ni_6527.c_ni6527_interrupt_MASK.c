
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_3__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int events; } ;
struct TYPE_5__ {TYPE_1__* mite; } ;
struct TYPE_4__ {scalar_t__ daq_io_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 TYPE_2__* VAR_9 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_10, void *VAR_11)
{
 struct comedi_device *VAR_12 = VAR_11;
 struct comedi_subdevice *VAR_13 = VAR_12->subdevices + 2;
 unsigned int VAR_14;

 VAR_14 = FUNC_2(VAR_9->mite->daq_io_addr + VAR_1);
 if ((VAR_14 & VAR_8) == 0)
  return VAR_7;
 if ((VAR_14 & VAR_5) == 0)
  return VAR_7;

 FUNC_3(VAR_3 | VAR_4,
        VAR_9->mite->daq_io_addr + VAR_2);

 FUNC_0(VAR_13->async, 0);
 VAR_13->async->events |= VAR_0;
 FUNC_1(VAR_12, VAR_13);
 return VAR_6;
}
