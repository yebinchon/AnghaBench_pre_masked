
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {struct grant_entry* addr; } ;
struct grant_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int *,unsigned long,unsigned long,int ,unsigned long**) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vm_struct* FUNC_2 (unsigned long) ;

int FUNC_3(unsigned long *VAR_3, unsigned long VAR_4,
      unsigned long VAR_5,
      struct grant_entry **VAR_6)
{
 int VAR_7;
 struct grant_entry *VAR_8 = *VAR_6;

 if (VAR_8 == ((void*)0)) {
  struct vm_struct *VAR_9 =
   FUNC_2(VAR_0 * VAR_5);
  FUNC_0(VAR_9 == ((void*)0));
  VAR_8 = VAR_9->addr;
  *VAR_6 = VAR_8;
 }

 VAR_7 = FUNC_1(&VAR_1, (unsigned long)VAR_8,
     VAR_0 * VAR_4,
     VAR_2, &VAR_3);
 return VAR_7;
}
