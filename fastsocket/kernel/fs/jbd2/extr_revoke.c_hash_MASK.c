
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jbd2_revoke_table_s {int hash_shift; int hash_size; } ;
struct TYPE_3__ {struct jbd2_revoke_table_s* j_revoke; } ;
typedef TYPE_1__ journal_t ;



__attribute__((used)) static inline int FUNC_0(journal_t *VAR_0, unsigned long long VAR_1)
{
 struct jbd2_revoke_table_s *VAR_2 = VAR_0->j_revoke;
 int VAR_3 = VAR_2->hash_shift;
 int VAR_4 = (int)VAR_1 ^ (int)((VAR_1 >> 31) >> 1);

 return ((VAR_4 << (VAR_3 - 6)) ^
  (VAR_4 >> 13) ^
  (VAR_4 << (VAR_3 - 12))) & (VAR_2->hash_size - 1);
}
