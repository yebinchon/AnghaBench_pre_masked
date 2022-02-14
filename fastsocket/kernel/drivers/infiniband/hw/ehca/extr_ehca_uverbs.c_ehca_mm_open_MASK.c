
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vm_area_struct {int vm_end; int vm_start; scalar_t__ vm_private_data; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vm_area_struct *VAR_0)
{
 u32 *VAR_1 = (u32 *)VAR_0->vm_private_data;
 if (!VAR_1) {
  FUNC_1("Invalid vma struct vm_start=%lx vm_end=%lx",
        VAR_0->vm_start, VAR_0->vm_end);
  return;
 }
 (*VAR_1)++;
 if (!(*VAR_1))
  FUNC_1("Use count overflow vm_start=%lx vm_end=%lx",
        VAR_0->vm_start, VAR_0->vm_end);
 FUNC_0("vm_start=%lx vm_end=%lx count=%x",
       VAR_0->vm_start, VAR_0->vm_end, *VAR_1);
}
