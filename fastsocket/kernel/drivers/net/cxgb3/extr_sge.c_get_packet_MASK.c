
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct sge_fl {size_t cidx; unsigned int credits; unsigned int size; int buf_size; struct rx_sw_desc* sdesc; } ;
struct rx_sw_desc {struct sk_buff* skb; } ;
struct adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct adapter*,struct sge_fl*) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_2 (unsigned int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int,int ) ;
 int FUNC_7 (int ,int ,unsigned int,int ) ;
 int FUNC_8 (struct rx_sw_desc*,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct adapter*,struct sge_fl*,size_t) ;
 scalar_t__ FUNC_12 (struct adapter*,struct sge_fl*,int ,int) ;
 int FUNC_13 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_15(struct adapter *VAR_6, struct sge_fl *VAR_7,
      unsigned int VAR_8, unsigned int VAR_9)
{
 struct sk_buff *VAR_10 = ((void*)0);
 struct rx_sw_desc *VAR_11 = &VAR_7->sdesc[VAR_7->cidx];

 FUNC_10(VAR_11->skb->data);
 VAR_7->credits--;

 if (VAR_8 <= VAR_3) {
  VAR_10 = FUNC_2(VAR_8, VAR_0);
  if (FUNC_3(VAR_10 != ((void*)0))) {
   FUNC_1(VAR_10, VAR_8);
   FUNC_6(VAR_6->pdev,
         FUNC_8(VAR_11, VAR_5), VAR_8,
         VAR_2);
   FUNC_4(VAR_10->data, VAR_11->skb->data, VAR_8);
   FUNC_7(VAR_6->pdev,
         FUNC_8(VAR_11, VAR_5), VAR_8,
         VAR_2);
  } else if (!VAR_9)
   goto use_orig_buf;
recycle:
  FUNC_11(VAR_6, VAR_7, VAR_7->cidx);
  return VAR_10;
 }

 if (FUNC_14(VAR_7->credits < VAR_9) &&
     FUNC_12(VAR_6, VAR_7, FUNC_5(VAR_1, VAR_7->size - VAR_7->credits - 1),
        VAR_0 | VAR_4) == 0)
  goto recycle;

use_orig_buf:
 FUNC_9(VAR_6->pdev, FUNC_8(VAR_11, VAR_5),
    VAR_7->buf_size, VAR_2);
 VAR_10 = VAR_11->skb;
 FUNC_13(VAR_10, VAR_8);
 FUNC_0(VAR_6, VAR_7);
 return VAR_10;
}
