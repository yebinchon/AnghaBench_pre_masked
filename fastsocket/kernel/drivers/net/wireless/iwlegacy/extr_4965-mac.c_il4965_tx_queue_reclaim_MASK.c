
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct il_queue {int n_bd; int read_ptr; int write_ptr; } ;
struct il_tx_queue {struct il_queue q; struct sk_buff** skbs; } ;
struct il_priv {TYPE_1__* ops; struct il_tx_queue* txq; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_2__ {int (* txq_free_tfd ) (struct il_priv*,struct il_tx_queue*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct il_priv*,struct sk_buff*,int) ;
 void* FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (struct il_queue*,int) ;
 int FUNC_6 (struct il_priv*,struct il_tx_queue*) ;

int
FUNC_7(struct il_priv *VAR_1, int VAR_2, int VAR_3)
{
 struct il_tx_queue *VAR_4 = &VAR_1->txq[VAR_2];
 struct il_queue *VAR_5 = &VAR_4->q;
 int VAR_6 = 0;
 struct ieee80211_hdr *VAR_7;
 struct sk_buff *VAR_8;

 if (VAR_3 >= VAR_5->n_bd || FUNC_5(VAR_5, VAR_3) == 0) {
  FUNC_0("Read idx for DMA queue txq id (%d), idx %d, "
         "is out of range [0-%d] %d %d.\n", VAR_2, VAR_3, VAR_5->n_bd,
         VAR_5->write_ptr, VAR_5->read_ptr);
  return 0;
 }

 for (VAR_3 = FUNC_4(VAR_3, VAR_5->n_bd); VAR_5->read_ptr != VAR_3;
      VAR_5->read_ptr = FUNC_4(VAR_5->read_ptr, VAR_5->n_bd)) {

  VAR_8 = VAR_4->skbs[VAR_4->q.read_ptr];

  if (FUNC_1(VAR_8 == ((void*)0)))
   continue;

  VAR_7 = (struct ieee80211_hdr *) VAR_8->data;
  if (FUNC_2(VAR_7->frame_control))
   VAR_6++;

  FUNC_3(VAR_1, VAR_8, VAR_2 >= VAR_0);

  VAR_4->skbs[VAR_4->q.read_ptr] = ((void*)0);
  VAR_1->ops->txq_free_tfd(VAR_1, VAR_4);
 }
 return VAR_6;
}
