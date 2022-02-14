
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct w9966_dev*,int) ;
 int FUNC_1 (struct w9966_dev*,int) ;
 int FUNC_2 (struct w9966_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct w9966_dev* VAR_1, int VAR_2, int VAR_3)
{
 FUNC_1(VAR_1, 0);
 FUNC_0(VAR_1, 0);

 if (
  FUNC_2(VAR_1, VAR_0) == -1 ||
  FUNC_2(VAR_1, VAR_2) == -1 ||
  FUNC_2(VAR_1, VAR_3) == -1
 )
  return -1;

 FUNC_1(VAR_1, 0);
 if (FUNC_0(VAR_1, 1) == -1)
  return -1;

 FUNC_1(VAR_1, 1);

 return 0;
}
