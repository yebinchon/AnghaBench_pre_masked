
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {scalar_t__ b_jlist; } ;
struct buffer_head {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct journal_head*,char*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct journal_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 struct buffer_head* FUNC_8 (struct journal_head*) ;
 int FUNC_9 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_10(struct journal_head *VAR_1)
{
 int VAR_2 = 0;
 struct buffer_head *VAR_3 = FUNC_8(VAR_1);

 if (VAR_1->b_jlist == VAR_0 && !FUNC_5(VAR_3) &&
     !FUNC_4(VAR_3) && !FUNC_6(VAR_3)) {
  FUNC_1(VAR_1, "remove from checkpoint list");
  VAR_2 = FUNC_3(VAR_1) + 1;
  FUNC_7(VAR_3);
  FUNC_9(VAR_3);
  FUNC_0(VAR_3, "release");
  FUNC_2(VAR_3);
 } else {
  FUNC_7(VAR_3);
 }
 return VAR_2;
}
