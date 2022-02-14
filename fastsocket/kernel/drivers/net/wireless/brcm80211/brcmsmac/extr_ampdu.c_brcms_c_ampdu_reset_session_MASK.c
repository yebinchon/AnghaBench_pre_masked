
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int dummy; } ;
struct brcms_ampdu_session {scalar_t__ dma_len; scalar_t__ ampdu_len; scalar_t__ max_ampdu_frames; scalar_t__ max_ampdu_len; int skb_list; struct brcms_c_info* wlc; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct brcms_ampdu_session *VAR_0,
     struct brcms_c_info *VAR_1)
{
 VAR_0->wlc = VAR_1;
 FUNC_0(&VAR_0->skb_list);
 VAR_0->max_ampdu_len = 0;
 VAR_0->max_ampdu_frames = 0;
 VAR_0->ampdu_len = 0;
 VAR_0->dma_len = 0;
}
