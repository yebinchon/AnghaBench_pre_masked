
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void const*,int,int*) ;

int FUNC_1(const void *VAR_3, int VAR_4)
{
 if ((VAR_4 < 0) || (VAR_4 % VAR_2)
     || (FUNC_0(VAR_3, VAR_4, &VAR_4) != VAR_1))
  return -VAR_0;

 return VAR_4;
}
