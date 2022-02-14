
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct buffer_head *VAR_1)
{
 if (!FUNC_1(VAR_0, &VAR_1->b_state) && FUNC_0())
  return 0;
 return 1;
}
