
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nouveau_vmmgr {int pgt_bits; } ;
struct nouveau_vm {int refcount; int fpde; int lpde; struct nouveau_vm* pgt; int mm; struct nouveau_vmmgr* vmm; int pgd_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nouveau_vm* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct nouveau_vm*) ;
 struct nouveau_vm* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int,int,int) ;

int
FUNC_5(struct nouveau_vmmgr *VAR_2, u64 VAR_3, u64 VAR_4,
    u64 VAR_5, u32 VAR_6, struct nouveau_vm **VAR_7)
{
 struct nouveau_vm *VAR_8;
 u64 VAR_9 = (VAR_3 + VAR_4) - VAR_5;
 int VAR_10;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(&VAR_8->pgd_list);
 VAR_8->vmm = VAR_2;
 VAR_8->refcount = 1;
 VAR_8->fpde = VAR_3 >> (VAR_2->pgt_bits + 12);
 VAR_8->lpde = (VAR_3 + VAR_4 - 1) >> (VAR_2->pgt_bits + 12);

 VAR_8->pgt = FUNC_1(VAR_8->lpde - VAR_8->fpde + 1, sizeof(*VAR_8->pgt), VAR_1);
 if (!VAR_8->pgt) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }

 VAR_10 = FUNC_4(&VAR_8->mm, VAR_5 >> 12, VAR_9 >> 12,
         VAR_6 >> 12);
 if (VAR_10) {
  FUNC_2(VAR_8->pgt);
  FUNC_2(VAR_8);
  return VAR_10;
 }

 *VAR_7 = VAR_8;

 return 0;
}
