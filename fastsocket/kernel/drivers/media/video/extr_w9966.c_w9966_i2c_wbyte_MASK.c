
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {int dummy; } ;


 int FUNC_0 (struct w9966_dev*,int) ;
 int FUNC_1 (struct w9966_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct w9966_dev* VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 7; VAR_2 >= 0; VAR_2--)
 {
  FUNC_1(VAR_0, (VAR_1 >> VAR_2) & 0x01);

  if (FUNC_0(VAR_0, 1) == -1)
   return -1;
  FUNC_0(VAR_0, 0);
 }

 FUNC_1(VAR_0, 1);

 if (FUNC_0(VAR_0, 1) == -1)
  return -1;
 FUNC_0(VAR_0, 0);

 return 0;
}
