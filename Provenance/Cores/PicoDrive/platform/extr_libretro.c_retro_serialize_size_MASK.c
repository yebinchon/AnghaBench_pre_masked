
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savestate_state {size_t pos; int member_0; } ;


 int FUNC_0 (struct savestate_state*,int,int *,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

size_t FUNC_1(void)
{
 struct savestate_state VAR_2 = { 0, };
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2, 1, ((void*)0), VAR_1, ((void*)0), VAR_0);
 if (VAR_3 != 0)
  return 0;

 return VAR_2.pos;
}
