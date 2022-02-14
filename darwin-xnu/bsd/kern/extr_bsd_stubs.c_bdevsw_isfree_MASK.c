
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdevsw {int dummy; } ;


 struct bdevsw* VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(int VAR_3)
{
 struct bdevsw * VAR_4;

 if (VAR_3 < 0) {
  if (VAR_3 == -1)
   VAR_3 = 1;
  else
   VAR_3 = -VAR_3;
  VAR_4 = &VAR_0[VAR_3];
  for (; VAR_3 < VAR_1; VAR_3++, VAR_4++) {
   if (FUNC_0((char *)VAR_4, (char *)&VAR_2, sizeof(struct bdevsw)) == 0)
    break;
  }
 }

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (-1);

 VAR_4 = &VAR_0[VAR_3];
 if ((FUNC_0((char *)VAR_4, (char *)&VAR_2, sizeof(struct bdevsw)) != 0)) {
  return (-1);
 }
 return (VAR_3);
}
