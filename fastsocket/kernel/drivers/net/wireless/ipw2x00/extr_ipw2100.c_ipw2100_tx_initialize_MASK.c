
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int available; int entries; scalar_t__ next; scalar_t__ oldest; } ;
struct ipw2100_priv {TYPE_4__ tx_queue; int txq_stat; int tx_free_stat; int tx_free_list; TYPE_3__* tx_buffers; int tx_pend_stat; int tx_pend_list; int fw_pend_stat; int fw_pend_list; } ;
struct TYPE_5__ {int * txb; } ;
struct TYPE_6__ {TYPE_1__ d_struct; } ;
struct TYPE_7__ {int list; TYPE_2__ info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int VAR_4 ;
 int FUNC_4 (struct ipw2100_priv*,TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct ipw2100_priv *VAR_5)
{
 int VAR_6;

 FUNC_2("enter\n");




 FUNC_0(&VAR_5->fw_pend_list);
 FUNC_1(&VAR_5->fw_pend_stat);




 FUNC_0(&VAR_5->tx_pend_list);
 FUNC_0(&VAR_5->tx_free_list);
 FUNC_1(&VAR_5->tx_pend_stat);
 FUNC_1(&VAR_5->tx_free_stat);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {


  if (VAR_5->tx_buffers[VAR_6].info.d_struct.txb) {
   FUNC_5(VAR_5->tx_buffers[VAR_6].info.d_struct.
        txb);
   VAR_5->tx_buffers[VAR_6].info.d_struct.txb = ((void*)0);
  }

  FUNC_6(&VAR_5->tx_buffers[VAR_6].list, &VAR_5->tx_free_list);
 }

 FUNC_3(&VAR_5->tx_free_stat, VAR_6);

 VAR_5->tx_queue.oldest = 0;
 VAR_5->tx_queue.available = VAR_5->tx_queue.entries;
 VAR_5->tx_queue.next = 0;
 FUNC_1(&VAR_5->txq_stat);
 FUNC_3(&VAR_5->txq_stat, VAR_5->tx_queue.available);

 FUNC_4(VAR_5, &VAR_5->tx_queue,
       VAR_0,
       VAR_1,
       VAR_2,
       VAR_3);

 FUNC_2("exit\n");

}
