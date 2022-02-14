
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int refcount; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(int *VAR_3)
{
 int VAR_4;

 if (VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_0(&VAR_2.lock);
 if (VAR_4)
  return VAR_4;
 VAR_2.refcount++;
 FUNC_1(&VAR_2.lock);

 *VAR_3 = 0;

 return 0;
}
