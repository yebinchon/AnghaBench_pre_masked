
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static u16 FUNC_1(unsigned int VAR_0, unsigned int *VAR_1)
{
 u16 VAR_2;

 if (VAR_0 == *VAR_1)
  return 0;

 VAR_2 = (VAR_0 * 4096 / *VAR_1) & ~7;

 while (VAR_2 > 4096 && FUNC_0(VAR_0, VAR_2) < *VAR_1)
  VAR_2 -= 8;

 *VAR_1 = FUNC_0(VAR_0, VAR_2);

 return VAR_2;
}
