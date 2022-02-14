
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ath9k_htc_priv {int dummy; } ;


 int FUNC_0 (struct ath9k_htc_priv*,struct sk_buff*,int *) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;

__attribute__((used)) static inline void FUNC_2(struct ath9k_htc_priv *VAR_0,
           struct sk_buff_head *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_1(VAR_1)) != ((void*)0)) {
  FUNC_0(VAR_0, VAR_2, ((void*)0));
 }
}
