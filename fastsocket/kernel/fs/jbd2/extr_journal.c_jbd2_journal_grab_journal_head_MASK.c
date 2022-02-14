
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {int b_jcount; } ;
struct buffer_head {int dummy; } ;


 struct journal_head* FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;

struct journal_head *FUNC_4(struct buffer_head *VAR_0)
{
 struct journal_head *VAR_1 = ((void*)0);

 FUNC_2(VAR_0);
 if (FUNC_1(VAR_0)) {
  VAR_1 = FUNC_0(VAR_0);
  VAR_1->b_jcount++;
 }
 FUNC_3(VAR_0);
 return VAR_1;
}
