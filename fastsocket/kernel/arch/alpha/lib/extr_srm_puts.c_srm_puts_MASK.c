
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long FUNC_0 (int ,char const*,long) ;

long
FUNC_1(const char *VAR_1, long VAR_2)
{
 long VAR_3, VAR_4;

 if (!VAR_0)
  return VAR_2;

 for (VAR_3 = VAR_2; VAR_3 > 0; VAR_3 -= VAR_4)
 {
  VAR_4 = FUNC_0(0, VAR_1, VAR_3);
  VAR_4 &= 0xffffffff;
  VAR_1 += VAR_4;
 }
 return VAR_2;
}
