
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc {int p_kdebug; } ;
typedef scalar_t__ pid_t ;
struct TYPE_4__ {scalar_t__ value2; scalar_t__ value1; } ;
typedef TYPE_1__ kd_regtype ;
struct TYPE_5__ {int kdebug_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 struct proc* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct proc*) ;

int
FUNC_3(kd_regtype *VAR_7)
{
 pid_t VAR_8;
 int VAR_9, VAR_10=0;
 struct proc *VAR_11;

 VAR_8 = (pid_t)VAR_7->value1;
 VAR_9 = (int)VAR_7->value2;

 if (VAR_8 >= 0) {
  if ((VAR_11 = FUNC_1(VAR_8)) == ((void*)0))
   VAR_10 = VAR_1;
  else {
   if (VAR_9 == 1) {



    VAR_6.kdebug_flags |= VAR_3;
    VAR_6.kdebug_flags &= ~VAR_2;
    FUNC_0(VAR_4, 0, VAR_5);

    VAR_11->p_kdebug = 1;
   }
   else {






    VAR_11->p_kdebug = 0;
   }
   FUNC_2(VAR_11);
  }
 } else
  VAR_10 = VAR_0;

 return(VAR_10);
}
