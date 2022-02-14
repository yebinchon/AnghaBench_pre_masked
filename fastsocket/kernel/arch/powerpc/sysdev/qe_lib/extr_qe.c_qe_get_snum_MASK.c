
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int num; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(void)
{
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;
 int VAR_8;

 FUNC_0(&VAR_3, VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_5[VAR_8].state == VAR_1) {
   VAR_5[VAR_8].state = VAR_2;
   VAR_7 = VAR_5[VAR_8].num;
   break;
  }
 }
 FUNC_1(&VAR_3, VAR_6);

 return VAR_7;
}
