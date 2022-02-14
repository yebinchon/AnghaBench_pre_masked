
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct hdpvr_device {scalar_t__ status; int v4l2_dev; int bulk_in_size; int bulk_in_endpointAddr; int udev; int io_mutex; int workqueue; int wait_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hdpvr_device*) ;
 int FUNC_2 (struct hdpvr_device*,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int *,int ,int*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int *,char*,int,...) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct hdpvr_device *VAR_9)
{
 int VAR_10;
 uint VAR_11 = 0;
 u8 *VAR_12;

 if (VAR_9->status == VAR_5)
  return 0;
 else if (VAR_9->status != VAR_7)
  return -VAR_2;

 VAR_12 = FUNC_4(VAR_9->bulk_in_size, VAR_3);
 if (!VAR_12)
  FUNC_11(&VAR_9->v4l2_dev, "failed to allocate temporary buffer "
    "for emptying the internal device buffer. "
    "Next capture start will be slow\n");

 VAR_9->status = VAR_6;
 FUNC_2(VAR_9, VAR_1, 0x00);
 FUNC_7(&VAR_9->io_mutex);

 FUNC_12(&VAR_9->wait_buffer);
 FUNC_5(50);

 FUNC_0(VAR_9->workqueue);

 FUNC_6(&VAR_9->io_mutex);

 FUNC_1(VAR_9);


 while (VAR_12 && ++VAR_11 < 500 &&
        !FUNC_8(VAR_9->udev,
        FUNC_9(VAR_9->udev,
          VAR_9->bulk_in_endpointAddr),
        VAR_12, VAR_9->bulk_in_size, &VAR_10,
        VAR_0)) {
  FUNC_10(VAR_4, VAR_8, &VAR_9->v4l2_dev,
    "%2d: got %d bytes\n", VAR_11, VAR_10);
 }
 FUNC_3(VAR_12);
 FUNC_10(VAR_4, VAR_8, &VAR_9->v4l2_dev,
   "used %d urbs to empty device buffers\n", VAR_11-1);
 FUNC_5(10);

 VAR_9->status = VAR_5;

 return 0;
}
