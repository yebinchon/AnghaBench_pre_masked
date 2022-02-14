
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int diff ;


 int FUNC_0 () ;

int FUNC_1(void *VAR_0, int *VAR_1)
{
 static int VAR_2 = 0;
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_0();
 VAR_4 = VAR_3 ^ VAR_2;
 if (VAR_4 == 0)
  return -1;


 for (VAR_5 = 0; VAR_5 < sizeof(VAR_4)*8; VAR_5++)
  if (VAR_4 & (1<<VAR_5))
   break;

 VAR_2 ^= 1 << VAR_5;

 if (VAR_1)
  *VAR_1 = !!(VAR_3 & (1<<VAR_5));
 return VAR_5;
}
