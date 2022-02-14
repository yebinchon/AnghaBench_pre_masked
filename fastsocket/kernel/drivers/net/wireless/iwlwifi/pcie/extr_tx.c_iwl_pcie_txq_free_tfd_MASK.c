
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int read_ptr; } ;
struct iwl_txq {TYPE_1__* entries; int lock; TYPE_2__ q; struct iwl_tfd* tfds; } ;
struct iwl_trans {int op_mode; } ;
struct iwl_tfd {int dummy; } ;
struct TYPE_3__ {struct sk_buff* skb; int meta; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct iwl_trans*,int *,struct iwl_tfd*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct iwl_trans *VAR_0, struct iwl_txq *VAR_1)
{
 struct iwl_tfd *VAR_2 = VAR_1->tfds;


 int VAR_3 = VAR_1->q.read_ptr;
 int VAR_4 = FUNC_0(&VAR_1->q, VAR_3);

 FUNC_3(&VAR_1->lock);


 FUNC_2(VAR_0, &VAR_1->entries[VAR_4].meta, &VAR_2[VAR_3]);


 if (VAR_1->entries) {
  struct sk_buff *VAR_5;

  VAR_5 = VAR_1->entries[VAR_4].skb;





  if (VAR_5) {
   FUNC_1(VAR_0->op_mode, VAR_5);
   VAR_1->entries[VAR_4].skb = ((void*)0);
  }
 }
}
