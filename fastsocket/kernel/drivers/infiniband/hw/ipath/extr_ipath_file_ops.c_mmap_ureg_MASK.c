
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_page_prot; } ;
struct ipath_devdata {unsigned long ipath_physaddr; TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,unsigned long,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_5, struct ipath_devdata *VAR_6,
       u64 VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;






 if ((VAR_5->vm_end - VAR_5->vm_start) > VAR_2) {
  FUNC_0(&VAR_6->pcidev->dev, "FAIL mmap userreg: reqlen "
    "%lx > PAGE\n", VAR_5->vm_end - VAR_5->vm_start);
  VAR_9 = -VAR_0;
 } else {
  VAR_8 = VAR_6->ipath_physaddr + VAR_7;
  VAR_5->vm_page_prot = FUNC_2(VAR_5->vm_page_prot);

  VAR_5->vm_flags |= VAR_3 | VAR_4;
  VAR_9 = FUNC_1(VAR_5, VAR_5->vm_start,
      VAR_8 >> VAR_1,
      VAR_5->vm_end - VAR_5->vm_start,
      VAR_5->vm_page_prot);
 }
 return VAR_9;
}
