
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (struct zd_chip*,int const) ;

int FUNC_1(struct zd_chip *VAR_0,
                   const u32 *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(VAR_0, VAR_1[VAR_4]);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
