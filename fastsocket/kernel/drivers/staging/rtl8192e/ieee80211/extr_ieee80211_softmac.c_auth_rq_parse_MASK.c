
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_info_element {int dummy; } ;
struct TYPE_2__ {int addr2; } ;
struct ieee80211_authentication {int algorithm; TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

int FUNC_3(struct sk_buff *VAR_4,u8* VAR_5)
{
 struct ieee80211_authentication *VAR_6;

 if (VAR_4->len < (sizeof(struct ieee80211_authentication)-sizeof(struct ieee80211_info_element))){
  FUNC_0("invalid len in auth request: %d\n",VAR_4->len);
  return -1;
 }
 VAR_6 = (struct ieee80211_authentication*) VAR_4->data;

 FUNC_2(VAR_5,VAR_6->header.addr2, VAR_0);

 if (FUNC_1(VAR_6->algorithm) != VAR_1)
  return VAR_2;

 return VAR_3;
}
