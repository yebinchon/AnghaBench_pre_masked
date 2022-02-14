
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_wep_key {int dummy; } ;
struct iwl_wep_cmd {int num_keys; int global_key_type; TYPE_1__* key; } ;
struct iwl_rxon_context {TYPE_2__* wep_keys; int wep_key_cmd; } ;
struct iwl_priv {int dummy; } ;
struct iwl_host_cmd {size_t* len; int flags; int data; int id; } ;
struct TYPE_4__ {scalar_t__ key_size; int key; } ;
struct TYPE_3__ {int key_index; int key_offset; int * key; scalar_t__ key_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct iwl_wep_cmd*,int ,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_4,
          struct iwl_rxon_context *VAR_5,
          bool VAR_6)
{
 int VAR_7, VAR_8 = 0;
 u8 VAR_9[sizeof(struct iwl_wep_cmd) +
  sizeof(struct iwl_wep_key) * VAR_2];
 struct iwl_wep_cmd *VAR_10 = (struct iwl_wep_cmd *)VAR_9;
 size_t VAR_11 = sizeof(struct iwl_wep_cmd);
 struct iwl_host_cmd VAR_12 = {
  .id = VAR_5->wep_key_cmd,
  .data = VAR_10, 
  .flags = VAR_0,
 };

 FUNC_3();

 FUNC_2(VAR_10, 0, VAR_11 +
   (sizeof(struct iwl_wep_key) * VAR_2));

 for (VAR_7 = 0; VAR_7 < VAR_2 ; VAR_7++) {
  VAR_10->key[VAR_7].key_index = VAR_7;
  if (VAR_5->wep_keys[VAR_7].key_size) {
   VAR_10->key[VAR_7].key_offset = VAR_7;
   VAR_8 = 1;
  } else {
   VAR_10->key[VAR_7].key_offset = VAR_1;
  }

  VAR_10->key[VAR_7].key_size = VAR_5->wep_keys[VAR_7].key_size;
  FUNC_1(&VAR_10->key[VAR_7].key[3], VAR_5->wep_keys[VAR_7].key,
    VAR_5->wep_keys[VAR_7].key_size);
 }

 VAR_10->global_key_type = VAR_3;
 VAR_10->num_keys = VAR_2;

 VAR_11 += sizeof(struct iwl_wep_key) * VAR_2;

 VAR_12.len[0] = VAR_11;

 if (VAR_8 || VAR_6)
  return FUNC_0(VAR_4, &VAR_12);
 else
  return 0;
}
