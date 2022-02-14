
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; int vm_page_prot; } ;
struct qib_devdata {int flags; unsigned long physaddr; int pcidev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_6, struct qib_devdata *VAR_7,
       u64 VAR_8)
{
 unsigned long VAR_9;
 unsigned long VAR_10;
 int VAR_11;






 VAR_10 = VAR_7->flags & VAR_3 ? 2 * VAR_2 : VAR_2;
 if ((VAR_6->vm_end - VAR_6->vm_start) > VAR_10) {
  FUNC_2(VAR_7->pcidev,
   "FAIL mmap userreg: reqlen %lx > PAGE\n",
   VAR_6->vm_end - VAR_6->vm_start);
  VAR_11 = -VAR_0;
 } else {
  VAR_9 = VAR_7->physaddr + VAR_8;
  VAR_6->vm_page_prot = FUNC_1(VAR_6->vm_page_prot);

  VAR_6->vm_flags |= VAR_4 | VAR_5;
  VAR_11 = FUNC_0(VAR_6, VAR_6->vm_start,
      VAR_9 >> VAR_1,
      VAR_6->vm_end - VAR_6->vm_start,
      VAR_6->vm_page_prot);
 }
 return VAR_11;
}
