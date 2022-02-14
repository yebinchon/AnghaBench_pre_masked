
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_vmmgr {int (* map_pgt ) (struct nouveau_gpuobj*,int,int ) ;} ;
struct nouveau_vm_pgd {int head; int obj; } ;
struct TYPE_4__ {int mutex; } ;
struct nouveau_vm {int fpde; int lpde; TYPE_2__ mm; int pgd_list; TYPE_1__* pgt; struct nouveau_vmmgr* vmm; } ;
struct nouveau_gpuobj {int dummy; } ;
struct TYPE_3__ {int obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_vm_pgd* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nouveau_gpuobj*,int *) ;
 int FUNC_5 (struct nouveau_gpuobj*,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_vm *VAR_2, struct nouveau_gpuobj *VAR_3)
{
 struct nouveau_vmmgr *VAR_4 = VAR_2->vmm;
 struct nouveau_vm_pgd *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return 0;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_3, &VAR_5->obj);

 FUNC_2(&VAR_2->mm.mutex);
 for (VAR_6 = VAR_2->fpde; VAR_6 <= VAR_2->lpde; VAR_6++)
  VAR_4->map_pgt(VAR_3, VAR_6, VAR_2->pgt[VAR_6 - VAR_2->fpde].obj);
 FUNC_1(&VAR_5->head, &VAR_2->pgd_list);
 FUNC_3(&VAR_2->mm.mutex);
 return 0;
}
