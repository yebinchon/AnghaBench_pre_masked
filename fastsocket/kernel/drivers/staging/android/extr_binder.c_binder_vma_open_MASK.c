
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_end; int vm_page_prot; int vm_flags; struct binder_proc* vm_private_data; } ;
struct binder_proc {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int,int,int ,unsigned long) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_2)
{
 struct binder_proc *VAR_3 = VAR_2->vm_private_data;
 FUNC_0(VAR_0,
       "binder: %d open vm area %lx-%lx (%ld K) vma %lx pagep %lx\n",
       VAR_3->pid, VAR_2->vm_start, VAR_2->vm_end,
       (VAR_2->vm_end - VAR_2->vm_start) / VAR_1, VAR_2->vm_flags,
       (unsigned long)FUNC_2(VAR_2->vm_page_prot));
 FUNC_1();
}
