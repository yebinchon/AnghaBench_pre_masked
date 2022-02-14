
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int index; int flags; } ;
struct TYPE_3__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(void)
{
 u32 VAR_6;

 VAR_3 = 1;
 if (!VAR_5)
  return 0;

 if (VAR_4.index != -1 &&
  !(VAR_4.flags & VAR_0))
  return 1;



 VAR_6 = FUNC_0(&VAR_5->control);
 if (VAR_6 & VAR_2) {
  VAR_6 &= ~(VAR_1);
  FUNC_1(VAR_6, &VAR_5->control);
 }
 return 0;
}
