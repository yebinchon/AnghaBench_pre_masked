
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct whc {int mutex; int lock; scalar_t__ base; scalar_t__ gen_cmd_buf_dma; int gen_cmd_buf; TYPE_1__* umc; int cmd_wq; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,void*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int,int ) ;

int FUNC_10(struct whc *VAR_7, u32 VAR_8, u32 VAR_9, void *VAR_10, size_t VAR_11)
{
 unsigned long VAR_12;
 dma_addr_t VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 FUNC_5(&VAR_7->mutex);


 VAR_14 = FUNC_9(VAR_7->cmd_wq,
          (FUNC_1(VAR_7->base + VAR_4) & VAR_5) == 0,
          VAR_1);
 if (VAR_14 == 0) {
  FUNC_0(&VAR_7->umc->dev, "generic command timeout (%04x/%04x)\n",
   FUNC_1(VAR_7->base + VAR_4),
   FUNC_1(VAR_7->base + VAR_3));
  VAR_15 = -VAR_0;
  goto out;
 }

 if (VAR_10) {
  FUNC_4(VAR_7->gen_cmd_buf, VAR_10, VAR_11);
  VAR_13 = VAR_7->gen_cmd_buf_dma;
 } else
  VAR_13 = 0;


 FUNC_7(&VAR_7->lock, VAR_12);

 FUNC_2(VAR_9, VAR_7->base + VAR_3);
 FUNC_3(VAR_13, VAR_7->base + VAR_2);

 FUNC_2(VAR_5 | VAR_6 | VAR_8,
    VAR_7->base + VAR_4);

 FUNC_8(&VAR_7->lock, VAR_12);
out:
 FUNC_6(&VAR_7->mutex);

 return VAR_15;
}
