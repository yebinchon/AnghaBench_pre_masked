
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct TYPE_4__ {unsigned int dma_transfer_size; unsigned int count; } ;
struct TYPE_3__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*,int *,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct comedi_device*,int *,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          unsigned int VAR_4, uint16_t * VAR_5)
{
 unsigned int VAR_6, VAR_7;
 struct comedi_cmd *VAR_8 = &VAR_3->async->cmd;

 FUNC_2(VAR_4);



 FUNC_1(VAR_4);


 VAR_6 = VAR_1->dma_transfer_size - FUNC_3(VAR_4);
 VAR_7 = VAR_6 / sizeof(short);


 if (VAR_8->stop_src == VAR_0 && VAR_1->count < VAR_7)
  VAR_7 = VAR_1->count;

 FUNC_4(VAR_2, VAR_5, VAR_7);
 FUNC_0(VAR_3, VAR_5, VAR_6);
 if (VAR_3->async->cmd.stop_src == VAR_0)
  VAR_1->count -= VAR_7;

 return;
}
