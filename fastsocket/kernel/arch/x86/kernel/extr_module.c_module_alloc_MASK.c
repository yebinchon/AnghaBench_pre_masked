
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vm_struct* FUNC_1 (unsigned long,int ,int ,int ) ;
 void* FUNC_2 (struct vm_struct*,int,int ) ;

void *FUNC_3(unsigned long VAR_7)
{
 struct vm_struct *VAR_8;

 if (!VAR_7)
  return ((void*)0);
 VAR_7 = FUNC_0(VAR_7);
 if (VAR_7 > VAR_2)
  return ((void*)0);

 VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_3, VAR_1);
 if (!VAR_8)
  return ((void*)0);

 return FUNC_2(VAR_8, VAR_0 | VAR_6,
     VAR_4);
}
