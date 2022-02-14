
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_tx_desc {scalar_t__ len; } ;
struct c2_element {int * skb; int maplen; int mapaddr; struct c2_tx_desc* ht_desc; } ;
struct c2_dev {int pcidev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct c2_dev *VAR_1, struct c2_element *VAR_2)
{
 struct c2_tx_desc *VAR_3 = VAR_2->ht_desc;

 VAR_3->len = 0;

 FUNC_1(VAR_1->pcidev, VAR_2->mapaddr, VAR_2->maplen,
    VAR_0);

 if (VAR_2->skb) {
  FUNC_0(VAR_2->skb);
  VAR_2->skb = ((void*)0);
 }

 return 0;
}
