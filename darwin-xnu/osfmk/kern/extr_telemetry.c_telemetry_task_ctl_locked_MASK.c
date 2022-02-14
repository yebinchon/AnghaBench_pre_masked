
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
struct TYPE_4__ {int t_flags; int bsd_info; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;

void
FUNC_6(task_t VAR_2, uint32_t VAR_3, int VAR_4)
{
 uint32_t VAR_5;

 FUNC_2((VAR_3 != 0) && ((VAR_3 | VAR_0) == VAR_0));

 FUNC_5(VAR_2);

 VAR_5 = VAR_2->t_flags;

 if (VAR_4 == 1) {
  VAR_2->t_flags |= VAR_3;
  if ((VAR_5 & VAR_0) == 0) {
   FUNC_1(&VAR_1);



  }
 } else {
  VAR_2->t_flags &= ~VAR_3;
  if (((VAR_5 & VAR_0) != 0) && ((VAR_2->t_flags & VAR_0) == 0)) {




   FUNC_0(&VAR_1);



  }
 }
}
