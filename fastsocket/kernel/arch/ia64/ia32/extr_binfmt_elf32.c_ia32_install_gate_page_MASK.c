
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {int page; } ;
struct vm_area_struct {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

int
FUNC_1 (struct vm_area_struct *VAR_1, struct vm_fault *VAR_2)
{
 VAR_2->page = VAR_0;
 FUNC_0(VAR_2->page);
 return 0;
}
