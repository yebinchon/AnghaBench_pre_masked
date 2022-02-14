
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_10__ {TYPE_3__* asics; } ;
struct TYPE_7__ {int asic; int num_asic_chans; int asic_chan; scalar_t__ active; scalar_t__ enabled_mask; } ;
struct TYPE_9__ {TYPE_2__ intr; } ;
struct TYPE_8__ {scalar_t__ iobase; } ;
struct TYPE_6__ {scalar_t__ inttrig; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_5,
        struct comedi_subdevice *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_4->intr.asic;
 if (VAR_9 < 0)
  return;

 VAR_4->intr.enabled_mask = 0;
 VAR_4->intr.active = 0;
 VAR_6->async->inttrig = 0;
 VAR_7 = VAR_4->intr.num_asic_chans / VAR_0;
 VAR_8 = VAR_4->intr.asic_chan / VAR_0;
 FUNC_1(VAR_5, VAR_9, VAR_1);
 for (VAR_10 = VAR_8; VAR_10 < VAR_8 + VAR_7; ++VAR_10) {

  FUNC_0(0, VAR_3->asics[VAR_9].iobase + VAR_2 + VAR_10);
 }
}
