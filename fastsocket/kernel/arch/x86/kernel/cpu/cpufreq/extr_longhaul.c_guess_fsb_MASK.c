
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 int VAR_3 = VAR_1 / 1000;
 int VAR_4;
 int VAR_5[] = { 666, 1000, 1333, 2000 };
 int VAR_6, VAR_7;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_6 = ((VAR_5[VAR_4] * VAR_2) + 50) / 100;
  VAR_6 += (VAR_0 / 2);
  VAR_7 = VAR_6 - VAR_0;
  if ((VAR_3 <= VAR_6) && (VAR_3 >= VAR_7))
   return VAR_5[VAR_4] / 10;
 }
 return 0;
}
