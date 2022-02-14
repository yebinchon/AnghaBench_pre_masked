
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (struct vm_area_struct*,unsigned long) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int *) ;

int FUNC_2(struct vm_area_struct *VAR_0,
      unsigned long VAR_1, pte_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_0, VAR_1);

 return VAR_3;
}
