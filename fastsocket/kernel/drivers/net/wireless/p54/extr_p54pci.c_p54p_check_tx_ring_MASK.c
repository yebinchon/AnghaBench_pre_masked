
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct p54p_ring_control {scalar_t__* device_idx; } ;
struct p54p_priv {int pdev; struct p54p_ring_control* ring_control; } ;
struct p54p_desc {scalar_t__ flags; scalar_t__ len; scalar_t__ device_addr; scalar_t__ host_addr; } ;
struct ieee80211_hw {struct p54p_priv* priv; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_4 (int ,size_t,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1, u32 *VAR_2,
 int VAR_3, struct p54p_desc *VAR_4, u32 VAR_5,
 struct sk_buff **VAR_6)
{
 struct p54p_priv *VAR_7 = VAR_1->priv;
 struct p54p_ring_control *VAR_8 = VAR_7->ring_control;
 struct p54p_desc *VAR_9;
 struct sk_buff *VAR_10;
 u32 VAR_11, VAR_12;

 VAR_12 = (*VAR_2) % VAR_5;
 (*VAR_2) = VAR_11 = FUNC_2(VAR_8->device_idx[VAR_3]);
 VAR_11 %= VAR_5;

 while (VAR_12 != VAR_11) {
  VAR_9 = &VAR_4[VAR_12];

  VAR_10 = VAR_6[VAR_12];
  VAR_6[VAR_12] = ((void*)0);

  FUNC_4(VAR_7->pdev, FUNC_2(VAR_9->host_addr),
     FUNC_1(VAR_9->len), VAR_0);

  VAR_9->host_addr = 0;
  VAR_9->device_addr = 0;
  VAR_9->len = 0;
  VAR_9->flags = 0;

  if (VAR_10 && FUNC_0(VAR_10))
   FUNC_3(VAR_1, VAR_10);

  VAR_12++;
  VAR_12 %= VAR_5;
 }
}
