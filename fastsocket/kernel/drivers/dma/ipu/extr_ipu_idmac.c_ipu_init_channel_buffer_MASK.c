
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union chan_param_mem {int dummy; } chan_param_mem ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ipu {int lock; int dev; } ;
struct TYPE_2__ {int chan_id; int device; } ;
struct idmac_channel {int status; TYPE_1__ dma_chan; } ;
struct idmac {int dummy; } ;
typedef enum pixel_fmt { ____Placeholder_pixel_fmt } pixel_fmt ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;
typedef int dma_addr_t ;


 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ipu*,int ) ;
 int FUNC_4 (struct ipu*,int,int ) ;
 int FUNC_5 (union chan_param_mem*,int ,int ) ;
 int FUNC_6 (union chan_param_mem*,int) ;
 int FUNC_7 (union chan_param_mem*,int) ;
 int FUNC_8 (union chan_param_mem*,int,int ,int ,int) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct idmac* FUNC_12 (int ) ;
 struct ipu* FUNC_13 (struct idmac*) ;

__attribute__((used)) static int FUNC_14(struct idmac_channel *VAR_4,
       enum pixel_fmt VAR_5,
       uint16_t VAR_6, uint16_t VAR_7,
       uint32_t VAR_8,
       enum ipu_rotate_mode VAR_9,
       dma_addr_t VAR_10, dma_addr_t VAR_11)
{
 enum ipu_channel VAR_12 = VAR_4->dma_chan.chan_id;
 struct idmac *VAR_13 = FUNC_12(VAR_4->dma_chan.device);
 struct ipu *VAR_14 = FUNC_13(VAR_13);
 union chan_param_mem VAR_15 = {};
 unsigned long VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;

 VAR_18 = VAR_8 * FUNC_0(VAR_5);

 if (VAR_18 % 4) {
  FUNC_1(VAR_14->dev,
   "Stride length must be 32-bit aligned, stride = %d, bytes = %d\n",
   VAR_8, VAR_18);
  return -VAR_0;
 }


 if ((VAR_12 <= VAR_1) && (VAR_8 % 8)) {
  FUNC_1(VAR_14->dev, "Stride must be 8 pixel multiple\n");
  return -VAR_0;
 }


 FUNC_8(&VAR_15, VAR_5, VAR_6, VAR_7, VAR_18);
 FUNC_5(&VAR_15, VAR_10, VAR_11);
 FUNC_7(&VAR_15, VAR_9);

 switch (VAR_12) {
 case 130:




  break;
 case 129:
 case 128:

  FUNC_6(&VAR_15, 16);
  break;
 case 131:
 default:
  break;
 }

 FUNC_10(&VAR_14->lock, VAR_16);

 FUNC_9(FUNC_2(VAR_12), (uint32_t *)&VAR_15, 10);

 VAR_17 = FUNC_3(VAR_14, VAR_3);

 if (VAR_11)
  VAR_17 |= 1UL << VAR_12;
 else
  VAR_17 &= ~(1UL << VAR_12);

 FUNC_4(VAR_14, VAR_17, VAR_3);

 VAR_4->status = VAR_2;

 FUNC_11(&VAR_14->lock, VAR_16);

 return 0;
}
