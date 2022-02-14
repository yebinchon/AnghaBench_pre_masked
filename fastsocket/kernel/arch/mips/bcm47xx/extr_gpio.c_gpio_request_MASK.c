
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extif; int chipco; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned int,int ) ;

int FUNC_3(unsigned VAR_6, const char *VAR_7)
{
 if (FUNC_0(&VAR_5.chipco) &&
     ((unsigned)VAR_6 >= VAR_0))
  return -VAR_3;

 if (FUNC_1(&VAR_5.extif) &&
     ((unsigned)VAR_6 >= VAR_1))
  return -VAR_3;

 if (FUNC_2(VAR_6, VAR_4))
  return -VAR_2;

 return 0;
}
