
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
struct ieee80211_key_conf {int keyidx; int keylen; TYPE_6__* key; int cipher; int flags; } ;
typedef int __le16 ;
struct TYPE_10__ {int modify_mask; } ;
struct TYPE_9__ {int key_flags; scalar_t__ key_offset; struct il_addsta_cmd* key; } ;
struct TYPE_12__ {int mode; TYPE_4__ sta; TYPE_3__ key; } ;
struct TYPE_8__ {int keylen; struct il_addsta_cmd* key; int cipher; } ;
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
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*,struct il_addsta_cmd*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct il_addsta_cmd*,TYPE_6__*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_8(struct il_priv *VAR_12,
     struct ieee80211_key_conf *VAR_13, u8 VAR_14)
{
 unsigned long VAR_15;
 __le16 VAR_16 = 0;
 struct il_addsta_cmd VAR_17;

 FUNC_4(&VAR_12->mutex);

 VAR_16 |= (VAR_3 | VAR_7);
 VAR_16 |= FUNC_1(VAR_13->keyidx << VAR_6);
 VAR_16 &= ~VAR_5;

 if (VAR_14 == VAR_12->hw_params.bcast_id)
  VAR_16 |= VAR_9;

 VAR_13->flags |= VAR_1;

 FUNC_6(&VAR_12->sta_lock, VAR_15);
 VAR_12->stations[VAR_14].keyinfo.cipher = VAR_13->cipher;
 VAR_12->stations[VAR_14].keyinfo.keylen = VAR_13->keylen;

 FUNC_5(VAR_12->stations[VAR_14].keyinfo.key, VAR_13->key, VAR_13->keylen);

 FUNC_5(VAR_12->stations[VAR_14].sta.key.key, VAR_13->key, VAR_13->keylen);

 if ((VAR_12->stations[VAR_14].sta.key.
      key_flags & VAR_4) == VAR_8)
  VAR_12->stations[VAR_14].sta.key.key_offset =
      FUNC_2(VAR_12);



 FUNC_0(VAR_12->stations[VAR_14].sta.key.key_offset == VAR_11,
      "no space for a new key");

 VAR_12->stations[VAR_14].sta.key.key_flags = VAR_16;
 VAR_12->stations[VAR_14].sta.sta.modify_mask = VAR_10;
 VAR_12->stations[VAR_14].sta.mode = VAR_2;

 FUNC_5(&VAR_17, &VAR_12->stations[VAR_14].sta,
        sizeof(struct il_addsta_cmd));
 FUNC_7(&VAR_12->sta_lock, VAR_15);

 return FUNC_3(VAR_12, &VAR_17, VAR_0);
}
