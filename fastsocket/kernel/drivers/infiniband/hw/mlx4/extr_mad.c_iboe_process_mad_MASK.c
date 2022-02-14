
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_ib_dev {int* counters; int dev; } ;
struct mlx4_counter {int counter_mode; } ;
struct mlx4_cmd_mailbox {scalar_t__ buf; int dma; } ;
struct ib_wc {int dummy; } ;
struct TYPE_2__ {scalar_t__ mgmt_class; } ;
struct ib_mad {int data; TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,void*) ;
 int FUNC_2 (int ,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_5 (int ,struct mlx4_cmd_mailbox*) ;
 struct mlx4_ib_dev* FUNC_6 (struct ib_device*) ;

__attribute__((used)) static int FUNC_7(struct ib_device *VAR_8, int VAR_9, u8 VAR_10,
   struct ib_wc *VAR_11, struct ib_grh *VAR_12,
   struct ib_mad *VAR_13, struct ib_mad *VAR_14)
{
 struct mlx4_cmd_mailbox *VAR_15;
 struct mlx4_ib_dev *VAR_16 = FUNC_6(VAR_8);
 int VAR_17;
 u32 VAR_18 = VAR_16->counters[VAR_10 - 1] & 0xffff;
 u8 VAR_19;

 if (VAR_13->mad_hdr.mgmt_class != VAR_4)
  return -VAR_0;

 VAR_15 = FUNC_3(VAR_16->dev);
 if (FUNC_0(VAR_15))
  return VAR_1;

 VAR_17 = FUNC_4(VAR_16->dev, 0, VAR_15->dma, VAR_18, 0,
      VAR_5, VAR_6,
      VAR_7);
 if (VAR_17)
  VAR_17 = VAR_1;
 else {
  FUNC_2(VAR_14->data, 0, sizeof VAR_14->data);
  VAR_19 = ((struct mlx4_counter *)VAR_15->buf)->counter_mode;
  switch (VAR_19 & 0xf) {
  case 0:
   FUNC_1(VAR_15->buf,
      (void *)(VAR_14->data + 40));
   VAR_17 = VAR_3 | VAR_2;
   break;
  default:
   VAR_17 = VAR_1;
  }
 }

 FUNC_5(VAR_16->dev, VAR_15);

 return VAR_17;
}
