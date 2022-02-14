
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_request_hdr {int wr_lo; int wr_hi; } ;
struct tx_desc {int * flit; } ;
struct sk_buff {int destructor; scalar_t__ transport_header; scalar_t__ tail; scalar_t__ data; int len; } ;
struct sge_txq {TYPE_1__* sdesc; struct tx_desc* desc; } ;
struct sg_ent {int dummy; } ;
struct adapter {int pdev; } ;
struct TYPE_2__ {int * skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct sk_buff*,struct sg_ent*,int ,scalar_t__,int ) ;
 int FUNC_2 (int *,struct work_request_hdr*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct sk_buff*,int ,struct sg_ent*,unsigned int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct tx_desc*,struct sk_buff*,int ,unsigned int) ;
 int FUNC_8 (unsigned int,struct sk_buff*,struct tx_desc*,unsigned int,struct sge_txq*,struct sg_ent*,unsigned int,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_2, struct sk_buff *VAR_3,
     struct sge_txq *VAR_4, unsigned int VAR_5,
     unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct work_request_hdr *VAR_10;
 struct sg_ent *VAR_11, VAR_12[VAR_0 / 2 + 1];
 struct tx_desc *VAR_13 = &VAR_4->desc[VAR_5];

 if (FUNC_0(VAR_3)) {
  VAR_4->sdesc[VAR_5].skb = ((void*)0);
  FUNC_7(VAR_13, VAR_3, VAR_3->len, VAR_6);
  return;
 }



 VAR_10 = (struct work_request_hdr *)VAR_3->data;
 FUNC_2(&VAR_13->flit[1], &VAR_10[1],
        FUNC_6(VAR_3) - sizeof(*VAR_10));

 VAR_9 = FUNC_6(VAR_3) / 8;
 VAR_11 = VAR_7 == 1 ? (struct sg_ent *)&VAR_13->flit[VAR_9] : VAR_12;
 VAR_8 = FUNC_1(VAR_3, VAR_11, FUNC_5(VAR_3),
        VAR_3->tail - VAR_3->transport_header,
        VAR_2->pdev);
 if (FUNC_3()) {
  FUNC_4(VAR_3, VAR_2->pdev, VAR_11, VAR_8);
  VAR_3->destructor = VAR_1;
 }

 FUNC_8(VAR_7, VAR_3, VAR_13, VAR_5, VAR_4, VAR_12, VAR_9, VAR_8,
    VAR_6, VAR_10->wr_hi, VAR_10->wr_lo);
}
