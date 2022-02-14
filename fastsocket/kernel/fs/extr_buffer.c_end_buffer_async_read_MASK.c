
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int b_state; struct buffer_head* b_this_page; struct page* b_page; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (unsigned long) ;
 struct buffer_head* FUNC_14 (struct page*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct page*) ;

__attribute__((used)) static void FUNC_19(struct buffer_head *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct buffer_head *VAR_4;
 struct buffer_head *VAR_5;
 struct page *VAR_6;
 int VAR_7 = 1;

 FUNC_0(!FUNC_6(VAR_1));

 VAR_6 = VAR_1->b_page;
 if (VAR_2) {
  FUNC_16(VAR_1);
 } else {
  FUNC_11(VAR_1);
  if (!FUNC_15(VAR_1))
   FUNC_7(VAR_1);
  FUNC_2(VAR_6);
 }






 VAR_4 = FUNC_14(VAR_6);
 FUNC_13(VAR_3);
 FUNC_4(VAR_0, &VAR_4->b_state);
 FUNC_10(VAR_1);
 FUNC_17(VAR_1);
 VAR_5 = VAR_1;
 do {
  if (!FUNC_9(VAR_5))
   VAR_7 = 0;
  if (FUNC_6(VAR_5)) {
   FUNC_0(!FUNC_8(VAR_5));
   goto still_busy;
  }
  VAR_5 = VAR_5->b_this_page;
 } while (VAR_5 != VAR_1);
 FUNC_5(VAR_0, &VAR_4->b_state);
 FUNC_12(VAR_3);





 if (VAR_7 && !FUNC_1(VAR_6))
  FUNC_3(VAR_6);
 FUNC_18(VAR_6);
 return;

still_busy:
 FUNC_5(VAR_0, &VAR_4->b_state);
 FUNC_12(VAR_3);
 return;
}
