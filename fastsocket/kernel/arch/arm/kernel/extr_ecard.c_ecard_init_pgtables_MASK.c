
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vm_area_struct*,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (struct mm_struct*,int) ;

__attribute__((used)) static void FUNC_3(struct mm_struct *VAR_7)
{
 struct vm_area_struct VAR_8;
 pgd_t *VAR_9, *VAR_10;

 VAR_9 = FUNC_2(VAR_7, (unsigned long)VAR_3);
 VAR_10 = FUNC_2(VAR_7, VAR_5);

 FUNC_1(VAR_10, VAR_9, sizeof(pgd_t) * (VAR_4 / VAR_6));

 VAR_9 = FUNC_2(VAR_7, VAR_0);
 VAR_10 = FUNC_2(VAR_7, VAR_2);

 FUNC_1(VAR_10, VAR_9, sizeof(pgd_t) * (VAR_1 / VAR_6));

 VAR_8.vm_mm = VAR_7;

 FUNC_0(&VAR_8, VAR_5, VAR_5 + VAR_4);
 FUNC_0(&VAR_8, VAR_2, VAR_2 + VAR_1);
}
