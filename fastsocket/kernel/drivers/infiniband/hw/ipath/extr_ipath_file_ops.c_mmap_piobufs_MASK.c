
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_end; unsigned int vm_start; int vm_flags; int vm_page_prot; } ;
struct ipath_portdata {int dummy; } ;
struct ipath_devdata {unsigned int ipath_palign; unsigned int ipath_physaddr; TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned int,unsigned long,unsigned int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_8,
   struct ipath_devdata *VAR_9,
   struct ipath_portdata *VAR_10,
   unsigned VAR_11, unsigned VAR_12)
{
 unsigned long VAR_13;
 int VAR_14;







 if ((VAR_8->vm_end - VAR_8->vm_start) > (VAR_12 * VAR_9->ipath_palign)) {
  FUNC_0(&VAR_9->pcidev->dev, "FAIL mmap piobufs: "
    "reqlen %lx > PAGE\n",
    VAR_8->vm_end - VAR_8->vm_start);
  VAR_14 = -VAR_0;
  goto bail;
 }

 VAR_13 = VAR_9->ipath_physaddr + VAR_11;
 VAR_8->vm_flags &= ~VAR_4;
 VAR_8->vm_flags |= VAR_2 | VAR_3;

 VAR_14 = FUNC_1(VAR_8, VAR_8->vm_start, VAR_13 >> VAR_1,
     VAR_8->vm_end - VAR_8->vm_start,
     VAR_8->vm_page_prot);
bail:
 return VAR_14;
}
