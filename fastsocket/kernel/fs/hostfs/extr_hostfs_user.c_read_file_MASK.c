
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int,unsigned long long) ;

int FUNC_1(int VAR_1, unsigned long long *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4, *VAR_2);
 if (VAR_5 < 0)
  return -VAR_0;
 *VAR_2 += VAR_5;
 return VAR_5;
}
