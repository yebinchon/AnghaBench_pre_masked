
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh_flctl {int dummy; } ;


 scalar_t__ FUNC_0 (struct sh_flctl*) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct sh_flctl*,int) ;

__attribute__((used)) static int FUNC_4(struct sh_flctl *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned long *VAR_4 = (unsigned long *)VAR_1;
 void *VAR_5 = (void *)FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  if (FUNC_3(VAR_0 , VAR_2))
   return 1;
  VAR_4[VAR_3] = FUNC_2(VAR_5);
  VAR_4[VAR_3] = FUNC_1(VAR_4[VAR_3]);
 }

 return 0;
}
