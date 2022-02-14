
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;

int FUNC_0(unsigned VAR_4, const char *VAR_5)
{
 if (VAR_4 >= VAR_0)
  return -VAR_2;

 if (VAR_3[VAR_4])
  return -VAR_1;

 if (VAR_5)
  VAR_3[VAR_4] = VAR_5;
 else
  VAR_3[VAR_4] = "busy";

 return 0;
}
