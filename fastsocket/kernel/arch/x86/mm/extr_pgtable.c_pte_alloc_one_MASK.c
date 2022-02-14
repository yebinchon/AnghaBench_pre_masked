
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef struct page* pgtable_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct page*) ;

pgtable_t FUNC_2(struct mm_struct *VAR_1, unsigned long VAR_2)
{
 struct page *VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0);
 if (VAR_3)
  FUNC_1(VAR_3);
 return VAR_3;
}
