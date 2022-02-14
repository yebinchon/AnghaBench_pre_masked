
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sadb_msghdr {int* extlen; int ** ext; } ;
struct sadb_key {int sadb_key_bits; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(const struct sadb_msghdr *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 if (!VAR_2) {
  return;
 }
 VAR_4 = sizeof(struct sadb_key);

 if (VAR_2->ext[VAR_1]) {
  struct sadb_key *VAR_5 = (struct sadb_key*)VAR_2->ext[VAR_1];
  VAR_3 = VAR_5->sadb_key_bits >> 3;

  if (VAR_2->extlen[VAR_1] >= VAR_4 + VAR_3) {
   FUNC_0((uint8_t *)VAR_2->ext[VAR_1]+VAR_4, VAR_3);
  } else {
   FUNC_0(VAR_2->ext[VAR_1], VAR_2->extlen[VAR_1]);
  }
 }
 if (VAR_2->ext[VAR_0]) {
  struct sadb_key *VAR_6 = (struct sadb_key*)VAR_2->ext[VAR_0];
  VAR_3 = VAR_6->sadb_key_bits >> 3;

  if (VAR_2->extlen[VAR_0] >= VAR_4 + VAR_3) {
   FUNC_0((uint8_t *)VAR_2->ext[VAR_0]+VAR_4, VAR_3);
  } else {
   FUNC_0(VAR_2->ext[VAR_0], VAR_2->extlen[VAR_0]);
  }
 }
}
