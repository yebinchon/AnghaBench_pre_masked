
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_6__ {int current_dma_index; int dma_maxsize; TYPE_1__* dma; } ;
struct TYPE_5__ {int events; int prealloc_buf; } ;
struct TYPE_4__ {int chan; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,void*,int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_3)
{
 void *VAR_4;
 int VAR_5;
 int VAR_6;
 struct comedi_subdevice *VAR_7 = VAR_3->subdevices + 1;

 FUNC_5(VAR_1);

 if (!VAR_7->async->prealloc_buf) {
  FUNC_4("async->data disappeared.  dang!\n");
  return;
 }

 VAR_6 = VAR_2->current_dma_index;
 VAR_4 = VAR_2->dma[VAR_6].buf;

 FUNC_1(VAR_2->dma[VAR_6].chan);

 VAR_2->current_dma_index = 1 - VAR_6;

 VAR_5 = FUNC_0(VAR_7, VAR_4, VAR_2->dma_maxsize);
 if (VAR_5 == 0) {
  FUNC_4("dt282x: AO underrun\n");
  FUNC_2(VAR_3, VAR_7);
  VAR_7->async->events |= VAR_0;
  return;
 }
 FUNC_3(VAR_3, VAR_6, VAR_5);
 return;
}
