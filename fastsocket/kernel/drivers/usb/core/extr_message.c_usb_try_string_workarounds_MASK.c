
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3 = *VAR_1;

 for (VAR_2 = 2; VAR_2 + 1 < VAR_3; VAR_2 += 2)
  if (!FUNC_0(VAR_0[VAR_2]) || VAR_0[VAR_2 + 1])
   break;

 if (VAR_2 > 2) {
  VAR_0[0] = VAR_2;
  *VAR_1 = VAR_2;
 }
}
