
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_2__ {int hash_size; int key_material_len; int iv_size; int const* write_iv; int const* read_iv; int const* write_key; int const* read_key; int const* write_mac_secret; int const* read_mac_secret; int tls_version; } ;
struct tlsv1_server {TYPE_1__ rl; int const* master_secret; int const* client_random; int const* server_random; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,int const*,int) ;
 scalar_t__ FUNC_1 (int ,int const*,size_t,char*,int const*,int,int const*,size_t) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct tlsv1_server *VAR_5,
        const u8 *VAR_6,
        size_t VAR_7)
{
 u8 VAR_8[2 * VAR_4];
 u8 VAR_9[VAR_3];
 u8 *VAR_10;
 size_t VAR_11;

 if (VAR_6) {
  FUNC_2(VAR_1, "TLSv1: pre_master_secret",
    VAR_6, VAR_7);
  FUNC_0(VAR_8, VAR_5->client_random, VAR_4);
  FUNC_0(VAR_8 + VAR_4, VAR_5->server_random,
     VAR_4);
  if (FUNC_1(VAR_5->rl.tls_version,
       VAR_6, VAR_7,
       "master secret", VAR_8, 2 * VAR_4,
       VAR_5->master_secret, VAR_2)) {
   FUNC_3(VAR_0, "TLSv1: Failed to derive "
       "master_secret");
   return -1;
  }
  FUNC_2(VAR_1, "TLSv1: master_secret",
    VAR_5->master_secret, VAR_2);
 }

 FUNC_0(VAR_8, VAR_5->server_random, VAR_4);
 FUNC_0(VAR_8 + VAR_4, VAR_5->client_random, VAR_4);
 VAR_11 = 2 * (VAR_5->rl.hash_size + VAR_5->rl.key_material_len +
        VAR_5->rl.iv_size);
 if (FUNC_1(VAR_5->rl.tls_version,
      VAR_5->master_secret, VAR_2,
      "key expansion", VAR_8, 2 * VAR_4,
      VAR_9, VAR_11)) {
  FUNC_3(VAR_0, "TLSv1: Failed to derive key_block");
  return -1;
 }
 FUNC_2(VAR_1, "TLSv1: key_block",
   VAR_9, VAR_11);

 VAR_10 = VAR_9;


 FUNC_0(VAR_5->rl.read_mac_secret, VAR_10, VAR_5->rl.hash_size);
 VAR_10 += VAR_5->rl.hash_size;

 FUNC_0(VAR_5->rl.write_mac_secret, VAR_10, VAR_5->rl.hash_size);
 VAR_10 += VAR_5->rl.hash_size;


 FUNC_0(VAR_5->rl.read_key, VAR_10, VAR_5->rl.key_material_len);
 VAR_10 += VAR_5->rl.key_material_len;

 FUNC_0(VAR_5->rl.write_key, VAR_10, VAR_5->rl.key_material_len);
 VAR_10 += VAR_5->rl.key_material_len;


 FUNC_0(VAR_5->rl.read_iv, VAR_10, VAR_5->rl.iv_size);
 VAR_10 += VAR_5->rl.iv_size;

 FUNC_0(VAR_5->rl.write_iv, VAR_10, VAR_5->rl.iv_size);
 VAR_10 += VAR_5->rl.iv_size;

 return 0;
}
