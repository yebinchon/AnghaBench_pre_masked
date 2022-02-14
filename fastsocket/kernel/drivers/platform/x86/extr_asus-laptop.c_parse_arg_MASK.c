
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, unsigned long VAR_2, int *VAR_3)
{
 if (!VAR_2)
  return 0;
 if (VAR_2 > 31)
  return -VAR_0;
 if (FUNC_0(VAR_1, "%i", VAR_3) != 1)
  return -VAR_0;
 return VAR_2;
}
