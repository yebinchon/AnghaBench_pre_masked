
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ar9170 {int * tx_status; } ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 size_t const VAR_3 ;
 size_t const VAR_4 ;
 size_t const VAR_5 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 unsigned int* VAR_6 ;
 struct sk_buff* FUNC_1 (struct ar9170*,size_t const,int *) ;
 int FUNC_2 (struct ar9170*,unsigned int,unsigned int,struct ieee80211_tx_info*) ;
 int FUNC_3 (struct ar9170*,struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_4(struct ar9170 *VAR_7,
 const uint8_t VAR_8, const uint8_t VAR_9)
{
 struct sk_buff *VAR_10;
 struct ieee80211_tx_info *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 bool VAR_15 = 1;

 VAR_14 = VAR_6[VAR_9 & VAR_0];

 VAR_10 = FUNC_1(VAR_7, VAR_8, &VAR_7->tx_status[VAR_14]);
 if (!VAR_10) {




  return ;
 }

 VAR_11 = FUNC_0(VAR_10);

 if (!(VAR_9 & VAR_3))
  VAR_15 = 0;

 VAR_12 = (VAR_9 & VAR_1) >> VAR_2;
 VAR_13 = (VAR_9 & VAR_4) >> VAR_5;

 FUNC_2(VAR_7, VAR_12, VAR_13, VAR_11);
 FUNC_3(VAR_7, VAR_10, VAR_15);
}
