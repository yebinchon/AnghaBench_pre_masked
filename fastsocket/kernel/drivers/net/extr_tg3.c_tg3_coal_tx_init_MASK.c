
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {int txq_cnt; int irq_max; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames_irq; int tx_max_coalesced_frames; int tx_coalesce_usecs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_7, struct ethtool_coalesce *VAR_8)
{
 int VAR_9 = 0;

 if (!FUNC_0(VAR_7, VAR_0)) {
  FUNC_1(VAR_3, VAR_8->tx_coalesce_usecs);
  FUNC_1(VAR_5, VAR_8->tx_max_coalesced_frames);
  FUNC_1(VAR_1, VAR_8->tx_max_coalesced_frames_irq);
 } else {
  FUNC_1(VAR_3, 0);
  FUNC_1(VAR_5, 0);
  FUNC_1(VAR_1, 0);

  for (; VAR_9 < VAR_7->txq_cnt; VAR_9++) {
   u32 VAR_10;

   VAR_10 = VAR_4 + VAR_9 * 0x18;
   FUNC_1(VAR_10, VAR_8->tx_coalesce_usecs);
   VAR_10 = VAR_6 + VAR_9 * 0x18;
   FUNC_1(VAR_10, VAR_8->tx_max_coalesced_frames);
   VAR_10 = VAR_2 + VAR_9 * 0x18;
   FUNC_1(VAR_10, VAR_8->tx_max_coalesced_frames_irq);
  }
 }

 for (; VAR_9 < VAR_7->irq_max - 1; VAR_9++) {
  FUNC_1(VAR_4 + VAR_9 * 0x18, 0);
  FUNC_1(VAR_6 + VAR_9 * 0x18, 0);
  FUNC_1(VAR_2 + VAR_9 * 0x18, 0);
 }
}
