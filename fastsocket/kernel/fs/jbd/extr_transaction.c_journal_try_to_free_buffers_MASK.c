
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct journal_head {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;
typedef int journal_t ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 struct journal_head* FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct journal_head*) ;
 struct buffer_head* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

int FUNC_10(journal_t *VAR_0,
    struct page *VAR_1, gfp_t VAR_2)
{
 struct buffer_head *VAR_3;
 struct buffer_head *VAR_4;
 int VAR_5 = 0;

 FUNC_0(FUNC_1(VAR_1));

 VAR_3 = FUNC_8(VAR_1);
 VAR_4 = VAR_3;
 do {
  struct journal_head *VAR_6;






  VAR_6 = FUNC_6(VAR_4);
  if (!VAR_6)
   continue;

  FUNC_4(VAR_4);
  FUNC_2(VAR_0, VAR_4);
  FUNC_7(VAR_6);
  FUNC_5(VAR_4);
  if (FUNC_3(VAR_4))
   goto busy;
 } while ((VAR_4 = VAR_4->b_this_page) != VAR_3);

 VAR_5 = FUNC_9(VAR_1);

busy:
 return VAR_5;
}
