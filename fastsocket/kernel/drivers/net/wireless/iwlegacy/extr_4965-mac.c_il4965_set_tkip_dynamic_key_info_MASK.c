
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {size_t bcast_id; } ;
struct il_priv {int sta_lock; TYPE_5__* stations; TYPE_1__ hw_params; } ;
struct ieee80211_key_conf {int keyidx; int key; int cipher; int flags; } ;
typedef int __le16 ;
struct TYPE_8__ {int key_flags; scalar_t__ key_offset; int key; } ;
struct TYPE_9__ {TYPE_3__ key; } ;
struct TYPE_7__ {int keylen; int key; int cipher; } ;
struct TYPE_10__ {TYPE_4__ sta; TYPE_2__ keyinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_10,
     struct ieee80211_key_conf *VAR_11, u8 VAR_12)
{
 unsigned long VAR_13;
 int VAR_14 = 0;
 __le16 VAR_15 = 0;

 VAR_15 |= (VAR_7 | VAR_5);
 VAR_15 |= FUNC_1(VAR_11->keyidx << VAR_4);
 VAR_15 &= ~VAR_3;

 if (VAR_12 == VAR_10->hw_params.bcast_id)
  VAR_15 |= VAR_8;

 VAR_11->flags |= VAR_0;
 VAR_11->flags |= VAR_1;

 FUNC_4(&VAR_10->sta_lock, VAR_13);

 VAR_10->stations[VAR_12].keyinfo.cipher = VAR_11->cipher;
 VAR_10->stations[VAR_12].keyinfo.keylen = 16;

 if ((VAR_10->stations[VAR_12].sta.key.
      key_flags & VAR_2) == VAR_6)
  VAR_10->stations[VAR_12].sta.key.key_offset =
      FUNC_2(VAR_10);



 FUNC_0(VAR_10->stations[VAR_12].sta.key.key_offset == VAR_9,
      "no space for a new key");

 VAR_10->stations[VAR_12].sta.key.key_flags = VAR_15;


 FUNC_3(VAR_10->stations[VAR_12].keyinfo.key, VAR_11->key, 16);

 FUNC_3(VAR_10->stations[VAR_12].sta.key.key, VAR_11->key, 16);

 FUNC_5(&VAR_10->sta_lock, VAR_13);

 return VAR_14;
}
