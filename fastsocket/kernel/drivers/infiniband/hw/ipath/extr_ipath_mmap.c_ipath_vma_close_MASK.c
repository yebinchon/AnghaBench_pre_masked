
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct ipath_mmap_info* vm_private_data; } ;
struct ipath_mmap_info {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_1)
{
 struct ipath_mmap_info *VAR_2 = VAR_1->vm_private_data;

 FUNC_0(&VAR_2->ref, VAR_0);
}
