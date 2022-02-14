
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct buffer_head*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(handle_t *VAR_1, int VAR_2,
      struct buffer_head *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_1, VAR_2))
  return 0;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4) {
  if ((VAR_4 = FUNC_3(VAR_1, VAR_0)))
   return VAR_4;
  if ((VAR_4 = FUNC_2(VAR_1, VAR_3)))
   return VAR_4;
 }

 return 0;
}
