
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath5k_rx_status {int rs_status; int rs_phyerr; scalar_t__ rs_keyix; int rs_more; scalar_t__ rs_datalen; } ;
struct TYPE_2__ {int rxerr_jumbo; int rxerr_mic; int rxerr_decrypt; int * rxerr_phy_code; int rxerr_phy; int rxerr_fifo; int rxerr_crc; int rx_bytes_count; int rx_all_count; } ;
struct ath5k_hw {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(struct ath5k_hw *VAR_6, struct ath5k_rx_status *VAR_7)
{
 VAR_6->stats.rx_all_count++;
 VAR_6->stats.rx_bytes_count += VAR_7->rs_datalen;

 if (FUNC_0(VAR_7->rs_status)) {
  if (VAR_7->rs_status & VAR_0)
   VAR_6->stats.rxerr_crc++;
  if (VAR_7->rs_status & VAR_2)
   VAR_6->stats.rxerr_fifo++;
  if (VAR_7->rs_status & VAR_4) {
   VAR_6->stats.rxerr_phy++;
   if (VAR_7->rs_phyerr > 0 && VAR_7->rs_phyerr < 32)
    VAR_6->stats.rxerr_phy_code[VAR_7->rs_phyerr]++;
   return 0;
  }
  if (VAR_7->rs_status & VAR_1) {
   VAR_6->stats.rxerr_decrypt++;
   if (VAR_7->rs_keyix == VAR_5 &&
       !(VAR_7->rs_status & VAR_0))
    return 1;
  }
  if (VAR_7->rs_status & VAR_3) {
   VAR_6->stats.rxerr_mic++;
   return 1;
  }


  if (VAR_7->rs_status & ~(VAR_1))
   return 0;
 }

 if (FUNC_0(VAR_7->rs_more)) {
  VAR_6->stats.rxerr_jumbo++;
  return 0;
 }
 return 1;
}
