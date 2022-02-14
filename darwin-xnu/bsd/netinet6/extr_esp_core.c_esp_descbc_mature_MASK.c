
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secasvar {int flags; int key_enc; int alg_enc; } ;
struct esp_algorithm {scalar_t__ keymin; scalar_t__ keymax; } ;
typedef int des_cblock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct esp_algorithm* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct secasvar *VAR_3)
{
 const struct esp_algorithm *VAR_4;

 if (!(VAR_3->flags & VAR_2) && (VAR_3->flags & VAR_1)) {
  FUNC_4((VAR_0, "esp_cbc_mature: "
      "algorithm incompatible with 4 octets IV length\n"));
  return 1;
 }

 if (!VAR_3->key_enc) {
  FUNC_4((VAR_0, "esp_descbc_mature: no key is given.\n"));
  return 1;
 }

 VAR_4 = FUNC_3(VAR_3->alg_enc);
 if (!VAR_4) {
  FUNC_4((VAR_0,
      "esp_descbc_mature: unsupported algorithm.\n"));
  return 1;
 }

 if (FUNC_0(VAR_3->key_enc) < VAR_4->keymin ||
     FUNC_0(VAR_3->key_enc) > VAR_4->keymax) {
  FUNC_4((VAR_0,
      "esp_descbc_mature: invalid key length %d.\n",
      FUNC_0(VAR_3->key_enc)));
  return 1;
 }


 if (FUNC_2((des_cblock *)FUNC_1(VAR_3->key_enc))) {
  FUNC_4((VAR_0,
      "esp_descbc_mature: weak key was passed.\n"));
  return 1;
 }

 return 0;
}
