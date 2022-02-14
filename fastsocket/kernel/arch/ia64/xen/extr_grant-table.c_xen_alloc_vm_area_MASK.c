
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {unsigned long size; unsigned long nr_pages; scalar_t__ phys_addr; int * pages; void* addr; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (unsigned long) ;
 struct vm_struct* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned long,unsigned long) ;

struct vm_struct *FUNC_5(unsigned long VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5;
 struct vm_struct *VAR_6;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_0, VAR_3);
 if (VAR_4 == 0)
  goto err0;
 VAR_5 = 1 << VAR_3;
 FUNC_4(VAR_4, VAR_5);

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  goto err1;

 VAR_6->flags = VAR_1;
 VAR_6->addr = (void *)VAR_4;
 VAR_6->size = VAR_2;
 VAR_6->pages = ((void*)0);
 VAR_6->nr_pages = VAR_5;
 VAR_6->phys_addr = 0;

 return VAR_6;

err1:
 FUNC_1(VAR_4, VAR_3);
err0:
 return ((void*)0);
}
