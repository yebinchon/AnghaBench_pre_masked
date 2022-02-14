
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {int trans_start; TYPE_1__ stats; } ;
struct fst_port_info {size_t index; } ;
struct fst_card_info {int dummy; } ;
struct TYPE_4__ {int bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fst_card_info*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 struct net_device* FUNC_2 (struct fst_port_info*) ;
 TYPE_2__** VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct fst_card_info *VAR_6, struct fst_port_info *VAR_7,
      int VAR_8, int VAR_9)
{
 struct net_device *VAR_10 = FUNC_2(VAR_7);




 FUNC_1(VAR_0, "fst_tx_dma_complete\n");
 FUNC_0(VAR_6, VAR_5[VAR_7->index][VAR_9].bits,
  VAR_1 | VAR_3 | VAR_2);
 VAR_10->stats.tx_packets++;
 VAR_10->stats.tx_bytes += VAR_8;
 VAR_10->trans_start = VAR_4;
}
