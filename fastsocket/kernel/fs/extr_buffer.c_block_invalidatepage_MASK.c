
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ) ;

void FUNC_6(struct page *VAR_0, unsigned long VAR_1)
{
 struct buffer_head *VAR_2, *VAR_3, *VAR_4;
 unsigned int VAR_5 = 0;

 FUNC_0(!FUNC_1(VAR_0));
 if (!FUNC_4(VAR_0))
  goto out;

 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = VAR_2;
 do {
  unsigned int VAR_6 = VAR_5 + VAR_3->b_size;
  VAR_4 = VAR_3->b_this_page;




  if (VAR_1 <= VAR_5)
   FUNC_2(VAR_3);
  VAR_5 = VAR_6;
  VAR_3 = VAR_4;
 } while (VAR_3 != VAR_2);






 if (VAR_1 == 0)
  FUNC_5(VAR_0, 0);
out:
 return;
}
