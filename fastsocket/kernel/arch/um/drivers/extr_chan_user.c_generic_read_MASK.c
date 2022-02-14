
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;

int FUNC_1(int VAR_3, char *VAR_4, void *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, sizeof(*VAR_4));
 if (VAR_6 > 0)
  return VAR_6;
 else if (VAR_2 == VAR_0)
  return 0;
 else if (VAR_6 == 0)
  return -VAR_1;
 return -VAR_2;
}
