
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tlsv1_record_layer {int cipher_alg; int iv_size; int key_material_len; int hash_size; int hash_alg; int cipher_suite; } ;
struct tls_cipher_suite {scalar_t__ hash; int cipher; } ;
struct tls_cipher_data {int alg; int block_size; int key_material; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct tls_cipher_data* FUNC_0 (int ) ;
 struct tls_cipher_suite* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

int FUNC_3(struct tlsv1_record_layer *VAR_10,
      u16 VAR_11)
{
 const struct tls_cipher_suite *VAR_12;
 const struct tls_cipher_data *VAR_13;

 FUNC_2(VAR_4, "TLSv1: Selected cipher suite: 0x%04x",
     VAR_11);
 VAR_10->cipher_suite = VAR_11;

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12 == ((void*)0))
  return -1;

 if (VAR_12->hash == VAR_7) {
  VAR_10->hash_alg = VAR_0;
  VAR_10->hash_size = VAR_3;
 } else if (VAR_12->hash == VAR_8) {
  VAR_10->hash_alg = VAR_1;
  VAR_10->hash_size = VAR_5;
 } else if (VAR_12->hash == VAR_9) {
  VAR_10->hash_alg = VAR_2;
  VAR_10->hash_size = VAR_6;
 }

 VAR_13 = FUNC_0(VAR_12->cipher);
 if (VAR_13 == ((void*)0))
  return -1;

 VAR_10->key_material_len = VAR_13->key_material;
 VAR_10->iv_size = VAR_13->block_size;
 VAR_10->cipher_alg = VAR_13->alg;

 return 0;
}
