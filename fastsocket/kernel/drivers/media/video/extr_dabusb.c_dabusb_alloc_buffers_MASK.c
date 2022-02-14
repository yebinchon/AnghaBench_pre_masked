
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* pdabusb_t ;
typedef TYPE_3__* pbuff_t ;
typedef int buff_t ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {int transfer_buffer_length; int number_of_packets; unsigned int pipe; int buff_list; TYPE_1__* iso_frame_desc; struct TYPE_13__* purb; int transfer_flags; TYPE_4__* dev; struct TYPE_13__* context; int complete; int transfer_buffer; TYPE_2__* s; } ;
struct TYPE_12__ {int total_buffer_size; int got_mem; int free_buff_list; TYPE_4__* usbdev; } ;
struct TYPE_11__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int,int ) ;
 TYPE_3__* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 TYPE_3__* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_4__*,unsigned int,int ) ;
 int FUNC_9 (unsigned int) ;
 unsigned int FUNC_10 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_11 (pdabusb_t VAR_6)
{
 int VAR_7 = 0;
 pbuff_t VAR_8;
 unsigned int VAR_9 = FUNC_10 (VAR_6->usbdev, VAR_3);
 int VAR_10 = FUNC_8 (VAR_6->usbdev, VAR_9, FUNC_9 (VAR_9));
 int VAR_11 = VAR_4 / VAR_10;
 int VAR_12 = VAR_11 * VAR_10;
 int VAR_13;

 FUNC_1("dabusb_alloc_buffers pipesize:%d packets:%d transfer_buffer_len:%d",
   VAR_10, VAR_11, VAR_12);

 while (VAR_7 < (VAR_6->total_buffer_size << 10)) {
  VAR_8 = FUNC_5(sizeof (buff_t), VAR_1);
  if (!VAR_8) {
   FUNC_2(&VAR_6->usbdev->dev,
    "kzalloc(sizeof(buff_t))==NULL\n");
   goto err;
  }
  VAR_8->s = VAR_6;
  VAR_8->purb = FUNC_7(VAR_11, VAR_1);
  if (!VAR_8->purb) {
   FUNC_2(&VAR_6->usbdev->dev, "usb_alloc_urb == NULL\n");
   FUNC_3 (VAR_8);
   goto err;
  }

  VAR_8->purb->transfer_buffer = FUNC_4 (VAR_12, VAR_1);
  if (!VAR_8->purb->transfer_buffer) {
   FUNC_3 (VAR_8->purb);
   FUNC_3 (VAR_8);
   FUNC_2(&VAR_6->usbdev->dev,
    "kmalloc(%d)==NULL\n", VAR_12);
   goto err;
  }

  VAR_8->purb->transfer_buffer_length = VAR_12;
  VAR_8->purb->number_of_packets = VAR_11;
  VAR_8->purb->complete = VAR_5;
  VAR_8->purb->context = VAR_8;
  VAR_8->purb->dev = VAR_6->usbdev;
  VAR_8->purb->pipe = VAR_9;
  VAR_8->purb->transfer_flags = VAR_2;

  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
   VAR_8->purb->iso_frame_desc[VAR_13].offset = VAR_13 * VAR_10;
   VAR_8->purb->iso_frame_desc[VAR_13].length = VAR_10;
  }

  VAR_7 += VAR_12;
  FUNC_6 (&VAR_8->buff_list, &VAR_6->free_buff_list);
 }
 VAR_6->got_mem = VAR_7;

 return 0;

 err:
 FUNC_0 (VAR_6);
 return -VAR_0;
}
