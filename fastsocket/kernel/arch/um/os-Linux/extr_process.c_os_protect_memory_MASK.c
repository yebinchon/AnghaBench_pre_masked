
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*,unsigned long,int) ;

int FUNC_1(void *VAR_4, unsigned long VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = ((VAR_6 ? VAR_1 : 0) | (VAR_7 ? VAR_2 : 0) |
      (VAR_8 ? VAR_0 : 0));

 if (FUNC_0(VAR_4, VAR_5, VAR_9) < 0)
  return -VAR_3;

 return 0;
}
