
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct brcms_ampdu_session {int dummy; } ;
struct dma_info {struct brcms_ampdu_session ampdu_session; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_info*) ;
 int FUNC_2 (struct brcms_ampdu_session*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct dma_info *VAR_1, struct sk_buff *VAR_2)
{
 struct brcms_ampdu_session *VAR_3 = &VAR_1->ampdu_session;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 == -VAR_0) {




  FUNC_1(VAR_1);
  VAR_4 = FUNC_2(VAR_3, VAR_2);
 }

 FUNC_0(VAR_4);
}
