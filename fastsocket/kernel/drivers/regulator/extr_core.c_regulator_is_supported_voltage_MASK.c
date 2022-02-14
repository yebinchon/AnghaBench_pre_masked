
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;


 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*,int) ;

int FUNC_2(struct regulator *VAR_0,
       int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4 = VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = FUNC_1(VAR_0, VAR_3);

  if (VAR_5 >= VAR_1 && VAR_5 <= VAR_2)
   return 1;
 }

 return 0;
}
