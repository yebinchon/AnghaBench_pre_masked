
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct radeon_bo {int tbo; } ;


 int FUNC_0 (struct vm_area_struct*,int *) ;

int FUNC_1(struct radeon_bo *VAR_0,
        struct vm_area_struct *VAR_1)
{
 return FUNC_0(VAR_1, &VAR_0->tbo);
}
