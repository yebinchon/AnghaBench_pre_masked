
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdevsw {int dummy; } ;


 struct bdevsw* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int VAR_2 ;
 struct bdevsw VAR_3 ;

int
FUNC_3(int VAR_4, struct bdevsw * VAR_5)
{
 struct bdevsw * VAR_6;

 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return (-1);

 VAR_6 = &VAR_0[VAR_4];
 FUNC_0(&VAR_1);
 if ((FUNC_2((char *)VAR_6, (char *)VAR_5, sizeof(struct bdevsw)) != 0)) {
  VAR_4 = -1;
 } else {
  VAR_0[VAR_4] = VAR_3;
 }
 FUNC_1(&VAR_1);
 return (VAR_4);
}
