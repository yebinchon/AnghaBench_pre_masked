
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int thread_state_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {scalar_t__ inspection; scalar_t__ active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static inline kern_return_t
FUNC_9(
 thread_t VAR_6,
 int VAR_7,
 thread_state_t VAR_8,
 mach_msg_type_number_t *VAR_9,
 boolean_t VAR_10)
{
 kern_return_t VAR_11 = VAR_3;

 if (VAR_6 == VAR_5)
  return (VAR_2);

 FUNC_4(VAR_6);

 if (VAR_6->active) {
  if (VAR_6 != FUNC_0()) {
   FUNC_3(VAR_6);

   FUNC_5(VAR_6);

   if (FUNC_7(VAR_6, VAR_0)) {
    FUNC_4(VAR_6);
    VAR_11 = FUNC_1(
          VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_8(VAR_6);
   }
   else {
    FUNC_4(VAR_6);
    VAR_11 = VAR_1;
   }

   FUNC_6(VAR_6);
  }
  else
   VAR_11 = FUNC_1(
         VAR_6, VAR_7, VAR_8, VAR_9);
 }
 else if (VAR_6->inspection)
 {
  VAR_11 = FUNC_1(
         VAR_6, VAR_7, VAR_8, VAR_9);
 }
 else
  VAR_11 = VAR_4;

 if (VAR_10 && VAR_11 == VAR_3) {
  VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8,
    VAR_9);
 }

 FUNC_5(VAR_6);

 return (VAR_11);
}
