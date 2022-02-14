
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct whcrc {scalar_t__ rc_len; scalar_t__ area; int * rc_base; int cmd_dma_buf; int * cmd_buf; int * evt_buf; int evt_dma_buf; struct umc_dev* umc_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;
struct umc_dev {int irq; struct device dev; TYPE_1__ resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 void* FUNC_1 (struct device*,int ,int *,int ) ;
 int FUNC_2 (struct device*,int ,int *,int ) ;
 int FUNC_3 (int ,struct whcrc*) ;
 int * FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,int ,struct whcrc*) ;
 int * FUNC_8 (scalar_t__,scalar_t__,int ) ;
 int VAR_6 ;

__attribute__((used)) static
int FUNC_9(struct whcrc *VAR_7)
{
 int VAR_8 = 0;
 struct device *VAR_9 = &VAR_7->umc_dev->dev;
 struct umc_dev *VAR_10 = VAR_7->umc_dev;

 VAR_7->area = VAR_10->resource.start;
 VAR_7->rc_len = VAR_10->resource.end - VAR_10->resource.start + 1;
 VAR_8 = -VAR_0;
 if (FUNC_8(VAR_7->area, VAR_7->rc_len, VAR_4) == ((void*)0)) {
  FUNC_0(VAR_9, "can't request URC region (%zu bytes @ 0x%lx): %d\n",
   VAR_7->rc_len, VAR_7->area, VAR_8);
  goto error_request_region;
 }

 VAR_7->rc_base = FUNC_4(VAR_7->area, VAR_7->rc_len);
 if (VAR_7->rc_base == ((void*)0)) {
  FUNC_0(VAR_9, "can't ioremap registers (%zu bytes @ 0x%lx): %d\n",
   VAR_7->rc_len, VAR_7->area, VAR_8);
  goto error_ioremap_nocache;
 }

 VAR_8 = FUNC_7(VAR_10->irq, VAR_6, VAR_3,
        VAR_4, VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_9, "can't allocate IRQ %d: %d\n",
   VAR_10->irq, VAR_8);
  goto error_request_irq;
 }

 VAR_8 = -VAR_1;
 VAR_7->cmd_buf = FUNC_1(&VAR_10->dev, VAR_5,
         &VAR_7->cmd_dma_buf, VAR_2);
 if (VAR_7->cmd_buf == ((void*)0)) {
  FUNC_0(VAR_9, "Can't allocate cmd transfer buffer\n");
  goto error_cmd_buffer;
 }

 VAR_7->evt_buf = FUNC_1(&VAR_10->dev, VAR_5,
         &VAR_7->evt_dma_buf, VAR_2);
 if (VAR_7->evt_buf == ((void*)0)) {
  FUNC_0(VAR_9, "Can't allocate evt transfer buffer\n");
  goto error_evt_buffer;
 }
 return 0;

error_evt_buffer:
 FUNC_2(&VAR_10->dev, VAR_5, VAR_7->cmd_buf,
     VAR_7->cmd_dma_buf);
error_cmd_buffer:
 FUNC_3(VAR_10->irq, VAR_7);
error_request_irq:
 FUNC_5(VAR_7->rc_base);
error_ioremap_nocache:
 FUNC_6(VAR_7->area, VAR_7->rc_len);
error_request_region:
 return VAR_8;
}
