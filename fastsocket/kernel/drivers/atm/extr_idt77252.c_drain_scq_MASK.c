
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_map {struct scq_info* scq; } ;
struct sk_buff {int len; } ;
struct scq_info {int skblock; int pending; int used; int transmit; int next; } ;
struct idt77252_dev {int pcidev; int name; } ;
struct atm_vcc {TYPE_1__* stats; int (* pop ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct TYPE_4__ {struct atm_vcc* vcc; } ;
struct TYPE_3__ {int tx; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,struct sk_buff*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct idt77252_dev*,struct vc_map*,struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int *) ;
 int FUNC_10 (int *,struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_14(struct idt77252_dev *VAR_1, struct vc_map *VAR_2)
{
 struct scq_info *VAR_3 = VAR_2->scq;
 struct sk_buff *VAR_4;
 struct atm_vcc *VAR_5;

 FUNC_2("%s: SCQ (before drain %2d) next = 0x%p.\n",
   VAR_1->name, FUNC_5(&VAR_3->used), VAR_3->next);

 VAR_4 = FUNC_9(&VAR_3->transmit);
 if (VAR_4) {
  FUNC_2("%s: freeing skb at %p.\n", VAR_1->name, VAR_4);

  FUNC_7(VAR_1->pcidev, FUNC_1(VAR_4),
     VAR_4->len, VAR_0);

  VAR_5 = FUNC_0(VAR_4)->vcc;

  if (VAR_5->pop)
   VAR_5->pop(VAR_5, VAR_4);
  else
   FUNC_6(VAR_4);

  FUNC_4(&VAR_5->stats->tx);
 }

 FUNC_3(&VAR_3->used);

 FUNC_11(&VAR_3->skblock);
 while ((VAR_4 = FUNC_9(&VAR_3->pending))) {
  if (FUNC_8(VAR_1, VAR_2, VAR_4)) {
   FUNC_10(&VAR_2->scq->pending, VAR_4);
   break;
  }
 }
 FUNC_12(&VAR_3->skblock);
}
