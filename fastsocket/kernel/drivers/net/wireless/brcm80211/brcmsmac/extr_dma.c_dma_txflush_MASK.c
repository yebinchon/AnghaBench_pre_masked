
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pub {int dummy; } ;
struct brcms_ampdu_session {int skb_list; } ;
struct dma_info {struct brcms_ampdu_session ampdu_session; } ;


 int FUNC_0 (struct dma_info*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dma_pub *VAR_0)
{
 struct dma_info *VAR_1 = (struct dma_info *)VAR_0;
 struct brcms_ampdu_session *VAR_2 = &VAR_1->ampdu_session;

 if (!FUNC_1(&VAR_2->skb_list))
  FUNC_0(VAR_1);
}
