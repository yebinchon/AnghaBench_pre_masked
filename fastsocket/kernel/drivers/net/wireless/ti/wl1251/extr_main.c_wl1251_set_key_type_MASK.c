
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251_cmd_set_keys {int key_type; } ;
struct wl1251 {int dummy; } ;
struct ieee80211_key_conf {int cipher; int flags; int keyidx; int hw_key_idx; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct wl1251 *VAR_8,
          struct wl1251_cmd_set_keys *VAR_9,
          enum set_key_cmd VAR_10,
          struct ieee80211_key_conf *VAR_11,
          const u8 *VAR_12)
{
 switch (VAR_11->cipher) {
 case 128:
 case 129:
  if (FUNC_0(VAR_12))
   VAR_9->key_type = VAR_7;
  else
   VAR_9->key_type = VAR_6;

  VAR_11->hw_key_idx = VAR_11->keyidx;
  break;
 case 130:
  if (FUNC_0(VAR_12))
   VAR_9->key_type = VAR_4;
  else
   VAR_9->key_type = VAR_5;

  VAR_11->hw_key_idx = VAR_11->keyidx;
  break;
 case 131:
  if (FUNC_0(VAR_12))
   VAR_9->key_type = VAR_2;
  else
   VAR_9->key_type = VAR_3;
  VAR_11->flags |= VAR_1;
  break;
 default:
  FUNC_1("Unknown key cipher 0x%x", VAR_11->cipher);
  return -VAR_0;
 }

 return 0;
}
