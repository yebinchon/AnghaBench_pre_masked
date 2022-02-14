
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
struct TYPE_12__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

kern_return_t
FUNC_8(
 thread_t VAR_6)
{
 kern_return_t VAR_7 = VAR_2;

 if (VAR_6 == VAR_4)
  return (VAR_1);

 FUNC_3(VAR_6);

 if (VAR_6->active) {
  if (VAR_6 != FUNC_0()) {
   FUNC_2(VAR_6);

   FUNC_4(VAR_6);

   if (FUNC_6(VAR_6, VAR_5)) {
    FUNC_3(VAR_6);
    VAR_7 = FUNC_1( VAR_6 );
    FUNC_7(VAR_6);
   }
   else {
    FUNC_3(VAR_6);
    VAR_7 = VAR_0;
   }

   FUNC_5(VAR_6);
  }
  else
   VAR_7 = FUNC_1( VAR_6 );
 }
 else
  VAR_7 = VAR_3;

 FUNC_4(VAR_6);

 return (VAR_7);
}
