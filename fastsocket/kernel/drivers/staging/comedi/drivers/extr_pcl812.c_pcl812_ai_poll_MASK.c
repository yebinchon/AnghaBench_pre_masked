
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int spinlock; } ;
struct TYPE_4__ {unsigned int* dmabytestomove; int next_dma_buf; unsigned int ai_poll_ptr; scalar_t__* dmabuf; int ai_dma; } ;
struct TYPE_3__ {int buf_write_count; int buf_read_count; } ;


 TYPE_2__* VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,void*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1, struct comedi_subdevice *VAR_2)
{
 unsigned long VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;

 if (!VAR_0->ai_dma)
  return 0;

 FUNC_1(&VAR_1->spinlock, VAR_3);

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  VAR_4 = FUNC_0(VAR_0->ai_dma);
  VAR_5 = FUNC_0(VAR_0->ai_dma);
  if (VAR_4 == VAR_5)
   break;
 }

 if (VAR_4 != VAR_5) {
  FUNC_2(&VAR_1->spinlock, VAR_3);
  return 0;
 }

 VAR_4 = VAR_0->dmabytestomove[1 - VAR_0->next_dma_buf] - VAR_4;
 VAR_4 >>= 1;
 VAR_5 = VAR_4 - VAR_0->ai_poll_ptr;
 if (VAR_5 < 1) {
  FUNC_2(&VAR_1->spinlock, VAR_3);
  return 0;
 }

 FUNC_3(VAR_1, VAR_2,
         (void *)VAR_0->dmabuf[1 -
            VAR_0->next_dma_buf],
         VAR_0->ai_poll_ptr, VAR_5);

 VAR_0->ai_poll_ptr = VAR_4;

 FUNC_2(&VAR_1->spinlock, VAR_3);

 return VAR_2->async->buf_write_count - VAR_2->async->buf_read_count;
}
