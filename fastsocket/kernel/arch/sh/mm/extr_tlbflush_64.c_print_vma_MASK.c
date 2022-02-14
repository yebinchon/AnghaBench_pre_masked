
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; int vm_end; int vm_start; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct vm_area_struct *VAR_0)
{
 FUNC_1("vma start 0x%08lx\n", VAR_0->vm_start);
 FUNC_1("vma end   0x%08lx\n", VAR_0->vm_end);

 FUNC_0(VAR_0->vm_page_prot);
 FUNC_1("vm_flags 0x%08lx\n", VAR_0->vm_flags);
}
