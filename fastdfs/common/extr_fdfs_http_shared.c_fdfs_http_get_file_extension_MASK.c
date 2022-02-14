
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

const char *FUNC_0(const char *VAR_1, const int VAR_2, int *VAR_3)

{
 const char *VAR_4;
 const char *VAR_5;
 int VAR_6;

 VAR_4 = VAR_1 + VAR_2;
 VAR_5 = VAR_4 - 1;
 for (VAR_6=0; VAR_6<VAR_0 && VAR_5 >= VAR_1; VAR_6++, VAR_5--)

 {
  if (*VAR_5 == '.')
  {
   break;
  }
 }

 if (VAR_6 < VAR_0)
 {
  VAR_5++;
  *VAR_3 = VAR_4 - VAR_5;
  return VAR_5;
 }
 else
 {
  *VAR_3 = 0;
  return ((void*)0);
 }
}
