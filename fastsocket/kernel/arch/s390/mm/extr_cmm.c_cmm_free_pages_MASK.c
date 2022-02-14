
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmm_page_array {size_t index; unsigned long* pages; struct cmm_page_array* next; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static long
FUNC_3(long VAR_1, long *VAR_2, struct cmm_page_array **VAR_3)
{
 struct cmm_page_array *VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_0);
 VAR_4 = *VAR_3;
 while (VAR_1) {
  if (!VAR_4 || VAR_4->index <= 0)
   break;
  VAR_5 = VAR_4->pages[--VAR_4->index];
  if (VAR_4->index == 0) {
   VAR_4 = VAR_4->next;
   FUNC_0((unsigned long) *VAR_3);
   *VAR_3 = VAR_4;
  }
  FUNC_0(VAR_5);
  (*VAR_2)--;
  VAR_1--;
 }
 FUNC_2(&VAR_0);
 return VAR_1;
}
