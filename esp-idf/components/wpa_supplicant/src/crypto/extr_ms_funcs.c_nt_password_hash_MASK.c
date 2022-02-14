
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int buf ;


 int FUNC_0 (int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_1 (int const*,size_t,int *,size_t,size_t*) ;

int FUNC_2(const u8 *VAR_0, size_t VAR_1,
   u8 *VAR_2)
{
 u8 VAR_3[512], *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_6 = sizeof(VAR_3);
 if (FUNC_1(VAR_0, VAR_1, VAR_3, VAR_6, &VAR_5) < 0)
  return -1;

 VAR_5 *= 2;
 VAR_4 = VAR_3;
 return FUNC_0(1, (const u8 **) &VAR_4, &VAR_5, VAR_2);
}
