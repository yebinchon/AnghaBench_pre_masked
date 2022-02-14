
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*,int ) ;

int FUNC_5(struct buffer_head **VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_4(VAR_3[VAR_5], VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_3(VAR_3[VAR_5]);
  if (FUNC_0(VAR_3[VAR_5])) {
   FUNC_2(VAR_3[VAR_5]);
   VAR_6 = -VAR_1;
  } else if (!VAR_6 && !FUNC_1(VAR_3[VAR_5]))
   VAR_6 = -VAR_0;
 }
 return VAR_6;
}
