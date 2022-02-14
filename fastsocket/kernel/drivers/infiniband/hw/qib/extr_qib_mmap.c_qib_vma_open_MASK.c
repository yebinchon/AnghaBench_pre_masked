
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct qib_mmap_info* vm_private_data; } ;
struct qib_mmap_info {int ref; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_0)
{
 struct qib_mmap_info *VAR_1 = VAR_0->vm_private_data;

 FUNC_0(&VAR_1->ref);
}
