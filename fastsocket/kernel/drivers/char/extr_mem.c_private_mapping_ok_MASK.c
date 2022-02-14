
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct vm_area_struct *VAR_1)
{
 return VAR_1->vm_flags & VAR_0;
}
