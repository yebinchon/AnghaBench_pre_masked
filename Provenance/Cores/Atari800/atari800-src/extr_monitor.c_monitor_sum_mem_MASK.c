
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 UWORD VAR_0;
 UWORD VAR_1;
 if (FUNC_1(&VAR_0, &VAR_1)) {
  int VAR_2 = 0;
  int VAR_3;
  for (VAR_3 = VAR_0; VAR_3 <= VAR_1; VAR_3++)
   VAR_2 += FUNC_0(VAR_3);
  FUNC_2("SUM: %X\n", VAR_2);
 }
}
