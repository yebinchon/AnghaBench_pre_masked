
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;

int FUNC_2(void)
{
 int VAR_3;

again:
 VAR_3 = FUNC_0(VAR_2, VAR_1);

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 if (FUNC_1(VAR_3, VAR_2))
  goto again;

 return VAR_3;
}
