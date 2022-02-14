
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mac_stats {scalar_t__ rx_pause; int tx_frames; } ;
struct cmac {unsigned int tx_tcnt; scalar_t__ rx_pause; int toggle_cnt; unsigned int tx_xcnt; scalar_t__ offset; scalar_t__ txen; int tx_mcnt; struct mac_stats stats; struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cmac*) ;
 int FUNC_3 (struct adapter*,scalar_t__) ;
 int FUNC_4 (struct adapter*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct cmac*) ;

int FUNC_6(struct cmac *VAR_5)
{
 struct adapter *VAR_6 = VAR_5->adapter;
 struct mac_stats *VAR_7 = &VAR_5->stats;
 unsigned int VAR_8, VAR_9;
 u64 VAR_10 = VAR_7->tx_frames;
 int VAR_11;

 VAR_11 = 0;
 VAR_9 = 1;
 VAR_8 = VAR_5->tx_tcnt;
 if (VAR_10 == VAR_5->tx_mcnt && VAR_5->rx_pause == VAR_7->rx_pause) {
  VAR_9 = (FUNC_1(FUNC_3(VAR_6,
      VAR_4 +
             VAR_5->offset)));
  if (VAR_9 == 0) {
   FUNC_4(VAR_6, VAR_0,
         VAR_2 + FUNC_2(VAR_5));
   VAR_8 = (FUNC_0(FUNC_3(VAR_6,
            VAR_1)));
  } else {
   goto out;
  }
 } else {
  VAR_5->toggle_cnt = 0;
  goto out;
 }

 if ((VAR_8 != VAR_5->tx_tcnt) && (VAR_5->tx_xcnt == 0)) {
  if (VAR_5->toggle_cnt > 4) {
   VAR_11 = 2;
   goto out;
  } else {
   VAR_11 = 1;
   goto out;
  }
 } else {
  VAR_5->toggle_cnt = 0;
  goto out;
 }

out:
 VAR_5->tx_tcnt = VAR_8;
 VAR_5->tx_xcnt = VAR_9;
 VAR_5->tx_mcnt = VAR_7->tx_frames;
 VAR_5->rx_pause = VAR_7->rx_pause;
 if (VAR_11 == 1) {
  FUNC_4(VAR_6, VAR_3 + VAR_5->offset, 0);
  FUNC_3(VAR_6, VAR_3 + VAR_5->offset);
  FUNC_4(VAR_6, VAR_3 + VAR_5->offset, VAR_5->txen);
  FUNC_3(VAR_6, VAR_3 + VAR_5->offset);
  VAR_5->toggle_cnt++;
 } else if (VAR_11 == 2) {
  FUNC_5(VAR_5);
  VAR_5->toggle_cnt = 0;
 }
 return VAR_11;
}
