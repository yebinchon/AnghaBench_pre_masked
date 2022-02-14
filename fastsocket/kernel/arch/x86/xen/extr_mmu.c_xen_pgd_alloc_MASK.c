
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long private; } ;
struct mm_struct {int * pgd; } ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 size_t FUNC_5 (int ) ;
 struct page* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mm_struct *VAR_6)
{
 pgd_t *VAR_7 = VAR_6->pgd;
 int VAR_8 = 0;

 FUNC_0(FUNC_1(FUNC_6(VAR_7)));
 return VAR_8;
}
