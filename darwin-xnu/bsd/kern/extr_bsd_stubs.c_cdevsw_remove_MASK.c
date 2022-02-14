
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdevsw {int dummy; } ;


 struct cdevsw* VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int VAR_3 ;
 struct cdevsw VAR_4 ;

int
FUNC_3(int VAR_5, struct cdevsw * VAR_6)
{
 struct cdevsw * VAR_7;

 if (VAR_5 < 0 || VAR_5 >= VAR_3)
  return (-1);

 VAR_7 = &VAR_0[VAR_5];
 FUNC_0(&VAR_2);
 if ((FUNC_2((char *)VAR_7, (char *)VAR_6, sizeof(struct cdevsw)) != 0)) {
  VAR_5 = -1;
 } else {
  VAR_0[VAR_5] = VAR_4;
  VAR_1[VAR_5] = 0;
 }
 FUNC_1(&VAR_2);
 return (VAR_5);
}
