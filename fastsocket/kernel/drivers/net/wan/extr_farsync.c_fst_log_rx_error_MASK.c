
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_length_errors; int rx_frame_errors; int rx_crc_errors; int rx_fifo_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct fst_port_info {unsigned short index; } ;
struct fst_card_info {unsigned short card_no; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_0 (int ,char*,unsigned short,unsigned short,...) ;
 struct net_device* FUNC_1 (struct fst_port_info*) ;

__attribute__((used)) static void
FUNC_2(struct fst_card_info *VAR_6, struct fst_port_info *VAR_7,
   unsigned char VAR_8, int VAR_9, unsigned short VAR_10)
{
 struct net_device *VAR_11 = FUNC_1(VAR_7);




 VAR_11->stats.rx_errors++;
 if (VAR_8 & VAR_4) {
  VAR_11->stats.rx_fifo_errors++;
  FUNC_0(VAR_0, "Rx fifo error on card %d port %d buffer %d\n",
      VAR_6->card_no, VAR_7->index, VAR_9);
 }
 if (VAR_8 & VAR_1) {
  VAR_11->stats.rx_crc_errors++;
  FUNC_0(VAR_0, "Rx crc error on card %d port %d\n",
      VAR_6->card_no, VAR_7->index);
 }
 if (VAR_8 & VAR_3) {
  VAR_11->stats.rx_frame_errors++;
  FUNC_0(VAR_0, "Rx frame error on card %d port %d\n",
      VAR_6->card_no, VAR_7->index);
 }
 if (VAR_8 == (VAR_5 | VAR_2)) {
  VAR_11->stats.rx_length_errors++;
  FUNC_0(VAR_0, "Rx length error (%d) on card %d port %d\n",
      VAR_10, VAR_6->card_no, VAR_7->index);
 }
}
