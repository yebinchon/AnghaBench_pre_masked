
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
typedef int journal_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(journal_t *VAR_1,
      struct buffer_head *VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(VAR_2);
 FUNC_6(VAR_2);

 if (FUNC_5(!FUNC_1(VAR_2)))
  VAR_3 = -VAR_0;
 FUNC_4(VAR_2);
 FUNC_3(FUNC_0(VAR_2));

 return VAR_3;
}
