
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct ipu {int lock; int dev; } ;
struct TYPE_2__ {int chan_id; } ;
struct idmac_channel {int eof_irq; TYPE_1__ dma_chan; } ;
struct idmac {int dummy; } ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int,...) ;
 unsigned long FUNC_1 (struct ipu*,int ) ;
 unsigned long FUNC_2 (struct ipu*,int ) ;
 int FUNC_3 (struct ipu*,unsigned long,int ) ;
 int FUNC_4 (struct ipu*,unsigned long,int ) ;
 scalar_t__ FUNC_5 (struct ipu*,int) ;
 int FUNC_6 (struct ipu*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct ipu* FUNC_11 (struct idmac*) ;

__attribute__((used)) static int FUNC_12(struct idmac *VAR_8, struct idmac_channel *VAR_9,
          bool VAR_10)
{
 enum ipu_channel VAR_11 = VAR_9->dma_chan.chan_id;
 struct ipu *VAR_12 = FUNC_11(VAR_8);
 uint32_t VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15 = 1UL << VAR_11;
 unsigned int VAR_16;

 if (VAR_10 && VAR_11 != VAR_3 && VAR_11 != VAR_2) {
  VAR_16 = 40;

  while ((FUNC_1(VAR_12, VAR_0) & VAR_15) ||
         (FUNC_5(VAR_12, VAR_11) == VAR_7)) {
   VAR_16--;
   FUNC_8(10);

   if (!VAR_16) {
    FUNC_0(VAR_12->dev,
     "Warning: timeout waiting for channel %u to "
     "stop: buf0_rdy = 0x%08X, buf1_rdy = 0x%08X, "
     "busy = 0x%08X, tstat = 0x%08X\n", VAR_11,
     FUNC_2(VAR_12, VAR_4),
     FUNC_2(VAR_12, VAR_5),
     FUNC_1(VAR_12, VAR_0),
     FUNC_2(VAR_12, VAR_6));
    break;
   }
  }
  FUNC_0(VAR_12->dev, "timeout = %d * 10ms\n", 40 - VAR_16);
 }

 if (VAR_10 && (VAR_11 == VAR_2 ||
         VAR_11 == VAR_3)) {
  for (VAR_16 = 5;
       VAR_16 && !FUNC_7(VAR_9->eof_irq); VAR_16--)
   FUNC_8(5);
 }

 FUNC_9(&VAR_12->lock, VAR_14);


 FUNC_6(VAR_12, VAR_11);


 VAR_13 = FUNC_1(VAR_12, VAR_1);
 FUNC_3(VAR_12, VAR_13 & ~VAR_15, VAR_1);
 VAR_13 = FUNC_2(VAR_12, VAR_4);
 FUNC_4(VAR_12, 0, VAR_4);
 FUNC_4(VAR_12, VAR_13 & ~(1UL << VAR_11), VAR_4);

 VAR_13 = FUNC_2(VAR_12, VAR_5);
 FUNC_4(VAR_12, 0, VAR_5);
 FUNC_4(VAR_12, VAR_13 & ~(1UL << VAR_11), VAR_5);

 FUNC_10(&VAR_12->lock, VAR_14);

 return 0;
}
