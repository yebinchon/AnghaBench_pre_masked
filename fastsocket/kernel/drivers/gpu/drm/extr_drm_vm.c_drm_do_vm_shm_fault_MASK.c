
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {struct page* page; scalar_t__ virtual_address; } ;
struct vm_area_struct {unsigned long vm_start; struct drm_local_map* vm_private_data; } ;
struct page {int dummy; } ;
struct drm_local_map {scalar_t__ handle; } ;


 int FUNC_0 (char*,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_1, struct vm_fault *VAR_2)
{
 struct drm_local_map *VAR_3 = VAR_1->vm_private_data;
 unsigned long VAR_4;
 unsigned long VAR_5;
 struct page *VAR_6;

 if (!VAR_3)
  return VAR_0;

 VAR_4 = (unsigned long)VAR_2->virtual_address - VAR_1->vm_start;
 VAR_5 = (unsigned long)VAR_3->handle + VAR_4;
 VAR_6 = FUNC_2((void *)VAR_5);
 if (!VAR_6)
  return VAR_0;
 FUNC_1(VAR_6);
 VAR_2->page = VAR_6;

 FUNC_0("shm_fault 0x%lx\n", VAR_4);
 return 0;
}
