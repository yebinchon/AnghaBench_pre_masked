
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;
typedef int journal_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *,struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct buffer_head*) ;

void FUNC_9(journal_t *VAR_0,
        struct page *VAR_1,
        unsigned long VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4, *VAR_5;
 unsigned int VAR_6 = 0;
 int VAR_7 = 1;

 if (!FUNC_2(VAR_1))
  FUNC_0();
 if (!FUNC_6(VAR_1))
  return;





 VAR_3 = VAR_4 = FUNC_5(VAR_1);
 do {
  unsigned int VAR_8 = VAR_6 + VAR_4->b_size;
  VAR_5 = VAR_4->b_this_page;

  if (VAR_2 <= VAR_6) {

   FUNC_4(VAR_4);
   VAR_7 &= FUNC_3(VAR_0, VAR_4);
   FUNC_8(VAR_4);
  }
  VAR_6 = VAR_8;
  VAR_4 = VAR_5;

 } while (VAR_4 != VAR_3);

 if (!VAR_2) {
  if (VAR_7 && FUNC_7(VAR_1))
   FUNC_1(!FUNC_6(VAR_1));
 }
}
