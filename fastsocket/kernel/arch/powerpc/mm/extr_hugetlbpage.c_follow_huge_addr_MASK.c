
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned int FUNC_1 (struct mm_struct*,unsigned long) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 int * VAR_2 ;
 unsigned int FUNC_3 (unsigned int) ;
 struct page* FUNC_4 (int ) ;

struct page *
FUNC_5(struct mm_struct *VAR_3, unsigned long VAR_4, int VAR_5)
{
 pte_t *VAR_6;
 struct page *VAR_7;
 unsigned int VAR_8 = FUNC_1(VAR_3, VAR_4);


 if (!VAR_2[VAR_8])
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 VAR_7 = FUNC_4(*VAR_6);
 if (VAR_7) {
  unsigned int VAR_9 = FUNC_3(VAR_8);
  unsigned long VAR_10 = ((1UL) << VAR_9);
  VAR_7 += (VAR_4 % VAR_10) / VAR_1;
 }

 return VAR_7;
}
