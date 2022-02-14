
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_end_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buffer_head*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int,struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

void FUNC_7(int VAR_7, int VAR_8, struct buffer_head *VAR_9[])
{
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  struct buffer_head *VAR_11 = VAR_9[VAR_10];

  if (VAR_7 == VAR_0 || VAR_7 == VAR_1 || VAR_7 == VAR_2)
   FUNC_2(VAR_11);
  else if (!FUNC_5(VAR_11))
   continue;

  if (VAR_7 == VAR_3 || VAR_7 == VAR_0 || VAR_7 == VAR_1 ||
      VAR_7 == VAR_2) {
   if (FUNC_4(VAR_11)) {
    VAR_11->b_end_io = VAR_6;
    FUNC_1(VAR_11);
    if (VAR_7 == VAR_1)
     FUNC_3(VAR_4, VAR_11);
    else
     FUNC_3(VAR_3, VAR_11);
    continue;
   }
  } else {
   if (!FUNC_0(VAR_11)) {
    VAR_11->b_end_io = VAR_5;
    FUNC_1(VAR_11);
    FUNC_3(VAR_7, VAR_11);
    continue;
   }
  }
  FUNC_6(VAR_11);
 }
}
