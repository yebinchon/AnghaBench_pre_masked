
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,...) ;

int FUNC_1(int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (VAR_6 < 0)
  return -VAR_4;

 VAR_6 &= ~(VAR_2 | VAR_3);
 if (FUNC_0(VAR_5, VAR_1, VAR_6) < 0)
  return -VAR_4;
 return 0;
}
