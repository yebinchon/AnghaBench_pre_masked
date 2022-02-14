
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_page_prot; scalar_t__ vm_pgoff; } ;
typedef unsigned long resource_size_t ;
typedef int pgprot_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;
 unsigned long FUNC_2 (unsigned long) ;
 int VAR_2 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,unsigned long,int *,int ) ;

int FUNC_5(struct vm_area_struct *VAR_3, pgprot_t *VAR_4,
   unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;
 resource_size_t VAR_8;
 unsigned long VAR_9 = VAR_3->vm_end - VAR_3->vm_start;

 if (FUNC_1(VAR_3)) {

  VAR_8 = (resource_size_t)VAR_3->vm_pgoff << VAR_0;
  return FUNC_4(VAR_8, VAR_9, VAR_4, 0);
 }

 if (!VAR_2)
  return 0;


 VAR_7 = FUNC_2(VAR_5 << VAR_0);
 *VAR_4 = FUNC_0((FUNC_3(VAR_3->vm_page_prot) & (~VAR_1)) |
    VAR_7);

 return 0;
}
