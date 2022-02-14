
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned int vm_end; unsigned int vm_start; int vm_flags; int vm_page_prot; } ;
struct qib_devdata {unsigned int palign; unsigned int physaddr; int pcidev; } ;
struct qib_ctxtdata {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vm_area_struct*,unsigned int,unsigned long,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_9,
   struct qib_devdata *VAR_10,
   struct qib_ctxtdata *VAR_11,
   unsigned VAR_12, unsigned VAR_13)
{
 unsigned long VAR_14;
 int VAR_15;







 if ((VAR_9->vm_end - VAR_9->vm_start) > (VAR_13 * VAR_10->palign)) {
  FUNC_3(VAR_10->pcidev,
   "FAIL mmap piobufs: reqlen %lx > PAGE\n",
    VAR_9->vm_end - VAR_9->vm_start);
  VAR_15 = -VAR_0;
  goto bail;
 }

 VAR_14 = VAR_10->physaddr + VAR_12;
 VAR_9->vm_flags &= ~VAR_4;
 VAR_9->vm_flags |= VAR_2 | VAR_3;

 if (VAR_8)
  VAR_9->vm_page_prot = FUNC_2(VAR_9->vm_page_prot);

 VAR_15 = FUNC_0(VAR_9, VAR_9->vm_start, VAR_14 >> VAR_1,
     VAR_9->vm_end - VAR_9->vm_start,
     VAR_9->vm_page_prot);
bail:
 return VAR_15;
}
