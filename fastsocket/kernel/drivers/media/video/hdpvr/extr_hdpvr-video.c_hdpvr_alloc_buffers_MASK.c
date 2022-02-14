
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
struct urb {int transfer_flags; int transfer_dma; } ;
struct hdpvr_device {int free_buff_list; int bulk_in_size; int bulk_in_endpointAddr; int udev; int v4l2_dev; } ;
struct hdpvr_buffer {int buff_list; int status; struct urb* urb; struct hdpvr_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdpvr_device*) ;
 int VAR_6 ;
 int FUNC_1 (struct hdpvr_buffer*) ;
 struct hdpvr_buffer* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct urb* FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (struct urb*,int ,int ,int *,int ,int ,struct hdpvr_buffer*) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int *,char*,scalar_t__) ;
 int FUNC_10 (int *,char*) ;

int FUNC_11(struct hdpvr_device *VAR_7, uint VAR_8)
{
 uint VAR_9;
 int VAR_10 = -VAR_1;
 u8 *VAR_11;
 struct hdpvr_buffer *VAR_12;
 struct urb *VAR_13;

 FUNC_9(VAR_3, VAR_5, &VAR_7->v4l2_dev,
   "allocating %u buffers\n", VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {

  VAR_12 = FUNC_2(sizeof(struct hdpvr_buffer), VAR_2);
  if (!VAR_12) {
   FUNC_10(&VAR_7->v4l2_dev, "cannot allocate buffer\n");
   goto exit;
  }
  VAR_12->dev = VAR_7;

  VAR_13 = FUNC_4(0, VAR_2);
  if (!VAR_13) {
   FUNC_10(&VAR_7->v4l2_dev, "cannot allocate urb\n");
   goto exit_urb;
  }
  VAR_12->urb = VAR_13;

  VAR_11 = FUNC_5(VAR_7->udev, VAR_7->bulk_in_size, VAR_2,
      &VAR_13->transfer_dma);
  if (!VAR_11) {
   FUNC_10(&VAR_7->v4l2_dev,
     "cannot allocate usb transfer buffer\n");
   goto exit_urb_buffer;
  }

  FUNC_6(VAR_12->urb, VAR_7->udev,
      FUNC_8(VAR_7->udev,
        VAR_7->bulk_in_endpointAddr),
      VAR_11, VAR_7->bulk_in_size,
      VAR_6, VAR_12);

  VAR_12->urb->transfer_flags |= VAR_4;
  VAR_12->status = VAR_0;
  FUNC_3(&VAR_12->buff_list, &VAR_7->free_buff_list);
 }
 return 0;
exit_urb_buffer:
 FUNC_7(VAR_13);
exit_urb:
 FUNC_1(VAR_12);
exit:
 FUNC_0(VAR_7);
 return VAR_10;
}
