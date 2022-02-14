
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct il_wep_key {int dummy; } ;
struct il_wep_cmd {int num_keys; int global_key_type; TYPE_1__* key; } ;
struct TYPE_6__ {TYPE_2__* wep_keys; } ;
struct il_priv {TYPE_3__ _4965; } ;
struct il_host_cmd {size_t len; int flags; struct il_wep_cmd* data; int id; } ;
struct TYPE_5__ {int key; scalar_t__ key_size; } ;
struct TYPE_4__ {int key_idx; int key_offset; int * key; scalar_t__ key_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct il_priv*,struct il_host_cmd*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct il_wep_cmd*,int ,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_5, bool VAR_6)
{
 int VAR_7;
 u8 VAR_8[sizeof(struct il_wep_cmd) +
  sizeof(struct il_wep_key) * VAR_3];
 struct il_wep_cmd *VAR_9 = (struct il_wep_cmd *)VAR_8;
 size_t VAR_10 = sizeof(struct il_wep_cmd);
 struct il_host_cmd VAR_11 = {
  .id = VAR_1,
  .data = VAR_9,
  .flags = VAR_0,
 };
 bool VAR_12 = 0;

 FUNC_3();

 FUNC_2(VAR_9, 0,
        VAR_10 + (sizeof(struct il_wep_key) * VAR_3));

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  u8 VAR_13 = VAR_5->_4965.wep_keys[VAR_7].key_size;

  VAR_9->key[VAR_7].key_idx = VAR_7;
  if (VAR_13) {
   VAR_9->key[VAR_7].key_offset = VAR_7;
   VAR_12 = 1;
  } else
   VAR_9->key[VAR_7].key_offset = VAR_2;

  VAR_9->key[VAR_7].key_size = VAR_13;
  FUNC_1(&VAR_9->key[VAR_7].key[3], VAR_5->_4965.wep_keys[VAR_7].key, VAR_13);
 }

 VAR_9->global_key_type = VAR_4;
 VAR_9->num_keys = VAR_3;

 VAR_10 += sizeof(struct il_wep_key) * VAR_3;
 VAR_11.len = VAR_10;

 if (VAR_12 || VAR_6)
  return FUNC_0(VAR_5, &VAR_11);
 else
  return 0;
}
