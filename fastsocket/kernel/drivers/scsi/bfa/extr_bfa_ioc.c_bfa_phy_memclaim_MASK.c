
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct bfa_phy_s {int * dbuf_kva; int dbuf_pa; } ;
typedef scalar_t__ bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

void
FUNC_2(struct bfa_phy_s *VAR_2, u8 *VAR_3, u64 VAR_4,
  bfa_boolean_t VAR_5)
{
 if (VAR_5)
  return;

 VAR_2->dbuf_kva = VAR_3;
 VAR_2->dbuf_pa = VAR_4;
 FUNC_1(VAR_2->dbuf_kva, 0, VAR_1);
 VAR_3 += FUNC_0(VAR_1, VAR_0);
 VAR_4 += FUNC_0(VAR_1, VAR_0);
}
