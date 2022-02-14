
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmm_page_array {scalar_t__ index; unsigned long* pages; struct cmm_page_array* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static long
FUNC_5(long VAR_4, long *VAR_5, struct cmm_page_array **VAR_6)
{
 struct cmm_page_array *VAR_7, *VAR_8;
 unsigned long VAR_9;

 while (VAR_4) {
  VAR_9 = FUNC_0(VAR_1);
  if (!VAR_9)
   break;
  FUNC_3(&VAR_3);
  VAR_7 = *VAR_6;
  if (!VAR_7 || VAR_7->index >= VAR_0) {

   FUNC_4(&VAR_3);
   VAR_8 = (struct cmm_page_array *)
    FUNC_0(VAR_1);
   if (!VAR_8) {
    FUNC_2(VAR_9);
    break;
   }
   FUNC_3(&VAR_3);
   VAR_7 = *VAR_6;
   if (!VAR_7 || VAR_7->index >= VAR_0) {
    VAR_8->next = VAR_7;
    VAR_8->index = 0;
    VAR_7 = VAR_8;
    *VAR_6 = VAR_7;
   } else
    FUNC_2((unsigned long) VAR_8);
  }
  FUNC_1(VAR_9 >> VAR_2, 1);
  VAR_7->pages[VAR_7->index++] = VAR_9;
  (*VAR_5)++;
  FUNC_4(&VAR_3);
  VAR_4--;
 }
 return VAR_4;
}
