
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {TYPE_1__* key_auth; int alg_auth; } ;
struct ah_algorithm {scalar_t__ keymin; scalar_t__ keymax; } ;
struct TYPE_2__ {scalar_t__ sadb_key_bits; } ;


 int VAR_0 ;
 struct ah_algorithm* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct secasvar *VAR_1)
{
 const struct ah_algorithm *VAR_2;

 if (!VAR_1->key_auth) {
  FUNC_1((VAR_0, "ah_keyed_sha1_mature: no key is given.\n"));
  return 1;
 }

 VAR_2 = FUNC_0(VAR_1->alg_auth);
 if (!VAR_2) {
  FUNC_1((VAR_0, "ah_keyed_sha1_mature: unsupported algorithm.\n"));
  return 1;
 }

 if (VAR_1->key_auth->sadb_key_bits < VAR_2->keymin
  || VAR_2->keymax < VAR_1->key_auth->sadb_key_bits) {
  FUNC_1((VAR_0,
      "ah_keyed_sha1_mature: invalid key length %d.\n",
      VAR_1->key_auth->sadb_key_bits));
  return 1;
 }

 return 0;
}
