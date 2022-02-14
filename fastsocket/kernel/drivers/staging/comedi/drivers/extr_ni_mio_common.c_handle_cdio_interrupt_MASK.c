
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct comedi_subdevice {TYPE_3__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_11__ {int reg_type; } ;
struct TYPE_10__ {int mite_channel_lock; TYPE_2__* cdo_mite_chan; TYPE_1__* mite; } ;
struct TYPE_9__ {int events; } ;
struct TYPE_8__ {int channel; } ;
struct TYPE_7__ {scalar_t__ mite_io_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_6__ VAR_11 ;
 TYPE_5__* VAR_12 ;
 unsigned int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_13 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_14)
{
 unsigned VAR_15;
 struct comedi_subdevice *VAR_16 = VAR_14->subdevices + VAR_10;




 if ((VAR_11.reg_type & VAR_13) == 0) {
  return;
 }
 VAR_15 = FUNC_4(VAR_9);
 if (VAR_15 & (VAR_3 | VAR_4)) {

  FUNC_5(VAR_1, VAR_8);
  VAR_16->async->events |= VAR_7;
 }
 if (VAR_15 & VAR_2) {

  FUNC_5(VAR_0,
     VAR_8);

 }
 FUNC_3(VAR_14, VAR_16);
}
