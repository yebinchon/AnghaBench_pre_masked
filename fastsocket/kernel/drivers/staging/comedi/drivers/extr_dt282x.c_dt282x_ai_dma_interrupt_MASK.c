
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_2__* async; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct TYPE_6__ {int current_dma_index; scalar_t__ nread; int supcsr; int ntrig; TYPE_1__* dma; } ;
struct TYPE_5__ {int events; int prealloc_buf; } ;
struct TYPE_4__ {int size; int chan; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_subdevice*,void*,int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,void*,int) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_4)
{
 void *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 struct comedi_subdevice *VAR_9 = VAR_4->subdevices;

 FUNC_6(VAR_1);

 if (!VAR_9->async->prealloc_buf) {
  FUNC_5("async->data disappeared.  dang!\n");
  return;
 }

 VAR_7 = VAR_3->current_dma_index;
 VAR_5 = VAR_3->dma[VAR_7].buf;
 VAR_6 = VAR_3->dma[VAR_7].size;

 FUNC_1(VAR_3->dma[VAR_7].chan);

 VAR_3->current_dma_index = 1 - VAR_7;

 FUNC_3(VAR_4, VAR_5, VAR_6);
 VAR_8 = FUNC_0(VAR_9, VAR_5, VAR_6);
 if (VAR_8 != VAR_6) {
  FUNC_2(VAR_4, VAR_9);
  return;
 }
 VAR_3->nread -= VAR_6 / 2;

 if (VAR_3->nread < 0) {
  FUNC_5("dt282x: off by one\n");
  VAR_3->nread = 0;
 }
 if (!VAR_3->nread) {
  FUNC_2(VAR_4, VAR_9);
  VAR_9->async->events |= VAR_0;
  return;
 }
 FUNC_4(VAR_4, VAR_7, 0);
}
