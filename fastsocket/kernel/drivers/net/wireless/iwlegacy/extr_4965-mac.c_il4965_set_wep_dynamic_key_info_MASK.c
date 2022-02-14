
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_7__ {size_t bcast_id; } ;
struct il_priv {int sta_lock; TYPE_5__* stations; TYPE_1__ hw_params; int mutex; } ;
struct il_addsta_cmd {int dummy; } ;
struct ieee80211_key_conf {int keyidx; scalar_t__ keylen; TYPE_6__* key; int cipher; int flags; } ;
typedef int __le16 ;
struct TYPE_10__ {int modify_mask; } ;
struct TYPE_9__ {int key_flags; scalar_t__ key_offset; struct il_addsta_cmd* key; } ;
struct TYPE_12__ {int mode; TYPE_4__ sta; TYPE_3__ key; } ;
struct TYPE_8__ {scalar_t__ keylen; int keyidx; struct il_addsta_cmd* key; int cipher; } ;
struct TYPE_11__ {TYPE_6__ sta; TYPE_2__ keyinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*,struct il_addsta_cmd*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct il_addsta_cmd*,TYPE_6__*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_8(struct il_priv *VAR_14,
    struct ieee80211_key_conf *VAR_15, u8 VAR_16)
{
 unsigned long VAR_17;
 __le16 VAR_18 = 0;
 struct il_addsta_cmd VAR_19;

 FUNC_4(&VAR_14->mutex);

 VAR_15->flags &= ~VAR_1;

 VAR_18 |= (VAR_9 | VAR_7);
 VAR_18 |= FUNC_1(VAR_15->keyidx << VAR_5);
 VAR_18 &= ~VAR_4;

 if (VAR_15->keylen == VAR_13)
  VAR_18 |= VAR_6;

 if (VAR_16 == VAR_14->hw_params.bcast_id)
  VAR_18 |= VAR_10;

 FUNC_6(&VAR_14->sta_lock, VAR_17);

 VAR_14->stations[VAR_16].keyinfo.cipher = VAR_15->cipher;
 VAR_14->stations[VAR_16].keyinfo.keylen = VAR_15->keylen;
 VAR_14->stations[VAR_16].keyinfo.keyidx = VAR_15->keyidx;

 FUNC_5(VAR_14->stations[VAR_16].keyinfo.key, VAR_15->key, VAR_15->keylen);

 FUNC_5(&VAR_14->stations[VAR_16].sta.key.key[3], VAR_15->key,
        VAR_15->keylen);

 if ((VAR_14->stations[VAR_16].sta.key.
      key_flags & VAR_3) == VAR_8)
  VAR_14->stations[VAR_16].sta.key.key_offset =
      FUNC_2(VAR_14);



 FUNC_0(VAR_14->stations[VAR_16].sta.key.key_offset == VAR_12,
      "no space for a new key");

 VAR_14->stations[VAR_16].sta.key.key_flags = VAR_18;
 VAR_14->stations[VAR_16].sta.sta.modify_mask = VAR_11;
 VAR_14->stations[VAR_16].sta.mode = VAR_2;

 FUNC_5(&VAR_19, &VAR_14->stations[VAR_16].sta,
        sizeof(struct il_addsta_cmd));
 FUNC_7(&VAR_14->sta_lock, VAR_17);

 return FUNC_3(VAR_14, &VAR_19, VAR_0);
}
