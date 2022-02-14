
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kaweth_device {int suspend_lowmem_rx; int lowmem_work; TYPE_1__* rx_urb; int rxbufferhandle; int rx_buf; int dev; } ;
typedef int gfp_t ;
struct TYPE_3__ {int transfer_dma; int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,struct kaweth_device*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct kaweth_device *VAR_5,
      gfp_t VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_5->rx_urb,
        VAR_5->dev,
        FUNC_3(VAR_5->dev, 1),
        VAR_5->rx_buf,
        VAR_2,
        VAR_4,
        VAR_5);
 VAR_5->rx_urb->transfer_flags |= VAR_3;
 VAR_5->rx_urb->transfer_dma = VAR_5->rxbufferhandle;

 if((VAR_7 = FUNC_4(VAR_5->rx_urb, VAR_6))) {
  if (VAR_7 == -VAR_0) {
   VAR_5->suspend_lowmem_rx = 1;
   FUNC_1(&VAR_5->lowmem_work, VAR_1/4);
  }
  FUNC_0("resubmitting rx_urb %d failed", VAR_7);
 } else {
  VAR_5->suspend_lowmem_rx = 0;
 }

 return VAR_7;
}
