
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
typedef int * host_priv_t ;
typedef int boolean_t ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int) ;

kern_return_t
FUNC_3(
 host_priv_t VAR_4,
 thread_t VAR_5,
 boolean_t VAR_6,
 boolean_t *VAR_7)
{
 if (VAR_4 == ((void*)0) || VAR_5 != FUNC_1())
  return (VAR_0);

 FUNC_0(VAR_4 == &VAR_3);

 if (VAR_7)
     *VAR_7 = (VAR_5->options & VAR_2) != 0;

 if (VAR_6) {
     if (!(VAR_5->options & VAR_2))
      FUNC_2(1);
     VAR_5->options |= VAR_2;
 }
 else {
     if (VAR_5->options & VAR_2)
      FUNC_2(-1);
     VAR_5->options &= ~VAR_2;
 }

 return (VAR_1);
}
