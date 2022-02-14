
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sadb_comb {int sadb_comb_soft_allocations; int sadb_comb_hard_allocations; int sadb_comb_hard_addtime; int sadb_comb_soft_addtime; int sadb_comb_soft_usetime; int sadb_comb_hard_usetime; scalar_t__ sadb_comb_hard_bytes; scalar_t__ sadb_comb_soft_bytes; } ;



__attribute__((used)) static void
FUNC_0(
      struct sadb_comb *VAR_0)
{

 VAR_0->sadb_comb_soft_allocations = 1;
 VAR_0->sadb_comb_hard_allocations = 1;
 VAR_0->sadb_comb_soft_bytes = 0;
 VAR_0->sadb_comb_hard_bytes = 0;
 VAR_0->sadb_comb_hard_addtime = 86400;
 VAR_0->sadb_comb_soft_addtime = VAR_0->sadb_comb_soft_addtime * 80 / 100;
 VAR_0->sadb_comb_soft_usetime = 28800;
 VAR_0->sadb_comb_hard_usetime = VAR_0->sadb_comb_hard_usetime * 80 / 100;
}
