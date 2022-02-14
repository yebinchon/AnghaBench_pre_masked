
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_end_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ,struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_7(struct buffer_head *VAR_2)
{
 FUNC_3(VAR_2);
 if (FUNC_1(VAR_2)) {
  FUNC_5(VAR_2);
  return VAR_2;
 } else {
  FUNC_2(VAR_2);
  VAR_2->b_end_io = VAR_1;
  FUNC_4(VAR_0, VAR_2);
  FUNC_6(VAR_2);
  if (FUNC_1(VAR_2))
   return VAR_2;
 }
 FUNC_0(VAR_2);
 return ((void*)0);
}
