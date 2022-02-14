
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct journal_head {int b_jcount; struct buffer_head* b_bh; } ;
struct buffer_head {struct journal_head* b_private; TYPE_1__* b_page; int b_count; } ;
struct TYPE_2__ {scalar_t__ mapping; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct buffer_head*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 struct journal_head* FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 struct journal_head* FUNC_8 () ;
 int FUNC_9 (struct journal_head*) ;
 int FUNC_10 (struct journal_head*,int ,int) ;
 int FUNC_11 (struct buffer_head*) ;

struct journal_head *FUNC_12(struct buffer_head *VAR_0)
{
 struct journal_head *VAR_1;
 struct journal_head *VAR_2 = ((void*)0);

repeat:
 if (!FUNC_4(VAR_0)) {
  VAR_2 = FUNC_8();
  FUNC_10(VAR_2, 0, sizeof(*VAR_2));
 }

 FUNC_6(VAR_0);
 if (FUNC_4(VAR_0)) {
  VAR_1 = FUNC_3(VAR_0);
 } else {
  FUNC_1(VAR_0,
   (FUNC_2(&VAR_0->b_count) > 0) ||
   (VAR_0->b_page && VAR_0->b_page->mapping));

  if (!VAR_2) {
   FUNC_7(VAR_0);
   goto repeat;
  }

  VAR_1 = VAR_2;
  VAR_2 = ((void*)0);
  FUNC_11(VAR_0);
  VAR_0->b_private = VAR_1;
  VAR_1->b_bh = VAR_0;
  FUNC_5(VAR_0);
  FUNC_0(VAR_0, "added journal_head");
 }
 VAR_1->b_jcount++;
 FUNC_7(VAR_0);
 if (VAR_2)
  FUNC_9(VAR_2);
 return VAR_0->b_private;
}
