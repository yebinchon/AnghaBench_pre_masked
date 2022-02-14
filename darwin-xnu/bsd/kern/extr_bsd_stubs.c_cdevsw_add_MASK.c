
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdevsw {int dummy; } ;


 struct cdevsw* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(int VAR_2, struct cdevsw * VAR_3)
{
 FUNC_1(&VAR_1);
 VAR_2 = FUNC_0(VAR_2);
 if (VAR_2 < 0) {
  VAR_2 = -1;
 } else {
  VAR_0[VAR_2] = *VAR_3;
 }
 FUNC_2(&VAR_1);
 return (VAR_2);
}
