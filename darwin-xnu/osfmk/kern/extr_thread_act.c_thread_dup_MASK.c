
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
struct TYPE_15__ {scalar_t__ affinity_set; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

kern_return_t
FUNC_9(
 thread_t VAR_8)
{
 thread_t VAR_9 = FUNC_0();
 kern_return_t VAR_10 = VAR_4;

 if (VAR_8 == VAR_6 || VAR_8 == VAR_9)
  return (VAR_3);

 FUNC_4(VAR_8);

 if (VAR_8->active) {
  FUNC_3(VAR_8);

  FUNC_5(VAR_8);

  if (FUNC_7(VAR_8, VAR_7)) {
   FUNC_4(VAR_8);
   VAR_10 = FUNC_1(VAR_9, VAR_8, VAR_1);

   if (VAR_9->affinity_set != VAR_0)
    FUNC_2(VAR_9, VAR_8);
   FUNC_8(VAR_8);
  }
  else {
   FUNC_4(VAR_8);
   VAR_10 = VAR_2;
  }

  FUNC_6(VAR_8);
 }
 else
  VAR_10 = VAR_5;

 FUNC_5(VAR_8);

 return (VAR_10);
}
