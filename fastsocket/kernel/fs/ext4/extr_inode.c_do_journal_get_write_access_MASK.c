
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *,int *,struct buffer_head*) ;
 int FUNC_5 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_6(handle_t *VAR_0,
           struct buffer_head *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (!FUNC_2(VAR_1) || FUNC_1(VAR_1))
  return 0;
 if (VAR_2)
  FUNC_3(VAR_1);
 VAR_3 = FUNC_5(VAR_0, VAR_1);
 if (!VAR_3 && VAR_2)
  VAR_3 = FUNC_4(VAR_0, ((void*)0), VAR_1);
 return VAR_3;
}
