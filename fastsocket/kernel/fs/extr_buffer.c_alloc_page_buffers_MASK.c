
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int b_blocknr; unsigned long b_size; struct buffer_head* b_this_page; int * b_private; int b_count; scalar_t__ b_state; int * b_bdev; } ;


 int VAR_0 ;
 long VAR_1 ;
 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct buffer_head*,int *,int *) ;
 int FUNC_5 (struct buffer_head*,struct page*,long) ;

struct buffer_head *FUNC_6(struct page *VAR_2, unsigned long VAR_3,
  int VAR_4)
{
 struct buffer_head *VAR_5, *VAR_6;
 long VAR_7;

try_again:
 VAR_6 = ((void*)0);
 VAR_7 = VAR_1;
 while ((VAR_7 -= VAR_3) >= 0) {
  VAR_5 = FUNC_0(VAR_0);
  if (!VAR_5)
   goto no_grow;

  VAR_5->b_bdev = ((void*)0);
  VAR_5->b_this_page = VAR_6;
  VAR_5->b_blocknr = -1;
  VAR_6 = VAR_5;

  VAR_5->b_state = 0;
  FUNC_1(&VAR_5->b_count, 0);
  VAR_5->b_private = ((void*)0);
  VAR_5->b_size = VAR_3;


  FUNC_5(VAR_5, VAR_2, VAR_7);

  FUNC_4(VAR_5, ((void*)0), ((void*)0));
 }
 return VAR_6;



no_grow:
 if (VAR_6) {
  do {
   VAR_5 = VAR_6;
   VAR_6 = VAR_6->b_this_page;
   FUNC_2(VAR_5);
  } while (VAR_6);
 }







 if (!VAR_4)
  return ((void*)0);







 FUNC_3();
 goto try_again;
}
