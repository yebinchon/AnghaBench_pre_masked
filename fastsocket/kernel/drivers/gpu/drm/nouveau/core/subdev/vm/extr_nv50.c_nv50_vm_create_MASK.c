
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nouveau_vmmgr {int pgt_bits; } ;
struct nouveau_vm {int dummy; } ;


 int FUNC_0 (struct nouveau_vmmgr*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct nouveau_vm**) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_vmmgr *VAR_0, u64 VAR_1, u64 VAR_2,
        u64 VAR_3, struct nouveau_vm **VAR_4)
{
 u32 VAR_5 = (1 << (VAR_0->pgt_bits + 12));
 if (VAR_5 > VAR_2)
  VAR_5 = VAR_2;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);
}
