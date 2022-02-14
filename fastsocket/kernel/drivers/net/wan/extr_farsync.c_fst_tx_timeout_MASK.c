
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_aborted_errors; int tx_errors; } ;
struct net_device {int trans_start; TYPE_1__ stats; } ;
struct fst_port_info {scalar_t__ start; int index; struct fst_card_info* card; } ;
struct fst_card_info {int card_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 struct fst_port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct fst_port_info*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_3)
{
 struct fst_port_info *VAR_4;
 struct fst_card_info *VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = VAR_4->card;
 VAR_3->stats.tx_errors++;
 VAR_3->stats.tx_aborted_errors++;
 FUNC_0(VAR_1, "Tx timeout card %d port %d\n",
     VAR_5->card_no, VAR_4->index);
 FUNC_2(VAR_4, VAR_0);

 VAR_3->trans_start = VAR_2;
 FUNC_3(VAR_3);
 VAR_4->start = 0;
}
