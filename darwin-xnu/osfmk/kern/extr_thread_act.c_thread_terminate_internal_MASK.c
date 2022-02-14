
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_11__ {int * affinity_set; scalar_t__ started; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;

kern_return_t
FUNC_8(
 thread_t VAR_4)
{
 kern_return_t VAR_5 = VAR_1;

 FUNC_4(VAR_4);

 if (VAR_4->active) {
  VAR_4->active = VAR_0;

  FUNC_0(VAR_4);

  if (VAR_4->started)
   FUNC_1(VAR_4, VAR_3);
  else {
   FUNC_6(VAR_4);
  }
 }
 else
  VAR_5 = VAR_2;

 if (VAR_4->affinity_set != ((void*)0))
  FUNC_3(VAR_4);

 FUNC_5(VAR_4);

 if (VAR_4 != FUNC_2() && VAR_5 == VAR_1)
  FUNC_7(VAR_4, VAR_0);

 return (VAR_5);
}
