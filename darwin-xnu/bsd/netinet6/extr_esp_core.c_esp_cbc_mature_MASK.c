
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {int flags; int alg_enc; TYPE_1__* key_enc; } ;
struct esp_algorithm {int keymin; int keymax; int name; } ;
typedef int des_cblock ;
struct TYPE_2__ {int sadb_key_bits; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct esp_algorithm* FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct secasvar *VAR_3)
{
 int VAR_4;
 const struct esp_algorithm *VAR_5;

 if (VAR_3->flags & VAR_2) {
  FUNC_3((VAR_0,
      "esp_cbc_mature: algorithm incompatible with esp-old\n"));
  return 1;
 }
 if (VAR_3->flags & VAR_1) {
  FUNC_3((VAR_0,
      "esp_cbc_mature: algorithm incompatible with derived\n"));
  return 1;
 }

 if (!VAR_3->key_enc) {
  FUNC_3((VAR_0, "esp_cbc_mature: no key is given.\n"));
  return 1;
 }

 VAR_5 = FUNC_2(VAR_3->alg_enc);
 if (!VAR_5) {
  FUNC_3((VAR_0,
      "esp_cbc_mature: unsupported algorithm.\n"));
  return 1;
 }

 VAR_4 = VAR_3->key_enc->sadb_key_bits;
 if (VAR_4 < VAR_5->keymin || VAR_5->keymax < VAR_4) {
  FUNC_3((VAR_0,
      "esp_cbc_mature %s: invalid key length %d.\n",
      VAR_5->name, VAR_3->key_enc->sadb_key_bits));
  return 1;
 }
 switch (VAR_3->alg_enc) {
 case 129:

  if (FUNC_1((des_cblock *)FUNC_0(VAR_3->key_enc)) ||
      FUNC_1((des_cblock *)(FUNC_0(VAR_3->key_enc) + 8)) ||
      FUNC_1((des_cblock *)(FUNC_0(VAR_3->key_enc) + 16))) {
   FUNC_3((VAR_0,
       "esp_cbc_mature %s: weak key was passed.\n",
       VAR_5->name));
   return 1;
  }
  break;
 case 128:

  if (!(VAR_4 == 128 || VAR_4 == 192 || VAR_4 == 256)) {
   FUNC_3((VAR_0,
       "esp_cbc_mature %s: invalid key length %d.\n",
       VAR_5->name, VAR_4));
   return 1;
  }
  break;
 }

 return 0;
}
