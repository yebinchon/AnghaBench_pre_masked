
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;
typedef int _node ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

s32 FUNC_2(void)
{
 s32 VAR_1;
 _node *VAR_2;

 VAR_1 = 0;
 while (1) {
  VAR_2 = (_node *) FUNC_0(&VAR_0);

  if (!VAR_2)
   break;

  FUNC_1(VAR_2);
  VAR_1++;
 }

 return VAR_1;
}
