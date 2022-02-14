
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vma_data {unsigned long* maddr; scalar_t__ type; int lock; int count; } ;
struct vm_fault {size_t pgoff; scalar_t__ virtual_address; } ;
struct vm_area_struct {struct vma_data* vm_private_data; } ;
typedef size_t pgoff_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int ,int) ;
 int FUNC_5 (unsigned long,int) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct vm_area_struct *VAR_5, struct vm_fault *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9;
 pgoff_t VAR_10 = VAR_6->pgoff;
 struct vma_data *VAR_11 = VAR_5->vm_private_data;

 VAR_8 = (volatile unsigned long) VAR_11->maddr[VAR_10];
 if (VAR_8 == 0) {
  VAR_8 = FUNC_4(FUNC_1(), 1);
  if (VAR_8 == 0)
   return VAR_3;

  FUNC_2(&VAR_11->lock);
  if (VAR_11->maddr[VAR_10] == 0) {
   VAR_11->count++;
   VAR_11->maddr[VAR_10] = VAR_8;
  } else {
   FUNC_5(VAR_8, 1);
   VAR_8 = VAR_11->maddr[VAR_10];
  }
  FUNC_3(&VAR_11->lock);
 }

 if (VAR_11->type == VAR_0)
  VAR_7 = FUNC_0(VAR_8);
 else
  VAR_7 = VAR_8 & ~VAR_4;

 VAR_9 = VAR_7 >> VAR_1;






 FUNC_6(VAR_5, (unsigned long)VAR_6->virtual_address, VAR_9);

 return VAR_2;
}
