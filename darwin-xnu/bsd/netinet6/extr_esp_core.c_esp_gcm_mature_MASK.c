
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {int flags; int alg_enc; TYPE_1__* key_enc; } ;
struct esp_algorithm {int keymin; int keymax; int name; } ;
struct TYPE_2__ {int sadb_key_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct esp_algorithm* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct secasvar *VAR_7)
{
 int VAR_8;
 const struct esp_algorithm *VAR_9;

 if (VAR_7->flags & VAR_6) {
  FUNC_1((VAR_3,
      "esp_gcm_mature: algorithm incompatible with esp-old\n"));
  return 1;
 }
 if (VAR_7->flags & VAR_4) {
  FUNC_1((VAR_3,
      "esp_gcm_mature: algorithm incompatible with derived\n"));
  return 1;
 }
 if (VAR_7->flags & VAR_5) {
  FUNC_1((VAR_3,
      "esp_gcm_mature: implicit IV not currently implemented\n"));
  return 1;
 }

 if (!VAR_7->key_enc) {
  FUNC_1((VAR_3, "esp_gcm_mature: no key is given.\n"));
  return 1;
 }

 VAR_9 = FUNC_0(VAR_7->alg_enc);
 if (!VAR_9) {
  FUNC_1((VAR_3,
      "esp_gcm_mature: unsupported algorithm.\n"));
  return 1;
 }

 VAR_8 = VAR_7->key_enc->sadb_key_bits;
 if (VAR_8 < VAR_9->keymin || VAR_9->keymax < VAR_8) {
  FUNC_1((VAR_3,
      "esp_gcm_mature %s: invalid key length %d.\n",
      VAR_9->name, VAR_7->key_enc->sadb_key_bits));
  return 1;
 }
 switch (VAR_7->alg_enc) {
 case 128:

  if (!(VAR_8 == VAR_0 || VAR_8 == VAR_1 || VAR_8 == VAR_2)) {
   FUNC_1((VAR_3,
       "esp_gcm_mature %s: invalid key length %d.\n",
       VAR_9->name, VAR_8));
   return 1;
  }
  break;
 default:
  FUNC_1((VAR_3,
     "esp_gcm_mature %s: invalid algo %d.\n", VAR_7->alg_enc));
  return 1;
 }

 return 0;
}
