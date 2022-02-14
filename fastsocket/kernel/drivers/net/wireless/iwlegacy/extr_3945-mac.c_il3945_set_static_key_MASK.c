
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct il_priv *VAR_4, struct ieee80211_key_conf *VAR_5)
{
 if (VAR_5->cipher == VAR_3 ||
     VAR_5->cipher == VAR_2)
  return -VAR_1;

 FUNC_0("Static key invalid: cipher %x\n", VAR_5->cipher);
 return -VAR_0;
}
