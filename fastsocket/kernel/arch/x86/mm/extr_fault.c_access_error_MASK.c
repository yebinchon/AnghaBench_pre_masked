
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1(unsigned long VAR_4, int VAR_5, struct vm_area_struct *VAR_6)
{
 if (VAR_5) {

  if (FUNC_0(!(VAR_6->vm_flags & VAR_3)))
   return 1;
  return 0;
 }


 if (FUNC_0(VAR_4 & VAR_0))
  return 1;


 if (FUNC_0(!(VAR_6->vm_flags & (VAR_2 | VAR_1 | VAR_3))))
  return 1;

 return 0;
}
