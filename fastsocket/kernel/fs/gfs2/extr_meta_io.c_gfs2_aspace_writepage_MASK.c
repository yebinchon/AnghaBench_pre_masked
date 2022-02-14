
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; int nonblocking; } ;
struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 struct buffer_head* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct writeback_control*,struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int,struct buffer_head*) ;
 scalar_t__ FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(struct page *VAR_5, struct writeback_control *VAR_6)
{
 struct buffer_head *VAR_7, *VAR_8;
 int VAR_9 = 0;
 int VAR_10 = (1 << VAR_0) |
  (VAR_6->sync_mode == VAR_1 ? VAR_4 : VAR_3);

 FUNC_0(!FUNC_1(VAR_5));
 FUNC_0(!FUNC_9(VAR_5));

 VAR_8 = FUNC_8(VAR_5);
 VAR_7 = VAR_8;

 do {
  if (!FUNC_4(VAR_7))
   continue;







  if (VAR_6->sync_mode != VAR_2 || !VAR_6->nonblocking) {
   FUNC_6(VAR_7);
  } else if (!FUNC_14(VAR_7)) {
   FUNC_10(VAR_6, VAR_5);
   continue;
  }
  if (FUNC_13(VAR_7)) {
   FUNC_7(VAR_7);
  } else {
   FUNC_15(VAR_7);
  }
 } while ((VAR_7 = VAR_7->b_this_page) != VAR_8);





 FUNC_0(FUNC_2(VAR_5));
 FUNC_11(VAR_5);

 do {
  struct buffer_head *VAR_11 = VAR_7->b_this_page;
  if (FUNC_3(VAR_7)) {
   FUNC_12(VAR_10, VAR_7);
   VAR_9++;
  }
  VAR_7 = VAR_11;
 } while (VAR_7 != VAR_8);
 FUNC_16(VAR_5);

 if (VAR_9 == 0)
  FUNC_5(VAR_5);

 return 0;
}
