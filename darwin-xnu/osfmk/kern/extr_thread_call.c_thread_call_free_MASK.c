
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* thread_call_t ;
typedef int spl_t ;
typedef scalar_t__ int32_t ;
typedef int boolean_t ;
struct TYPE_6__ {int * queue; } ;
struct TYPE_7__ {int tc_flags; scalar_t__ tc_refs; scalar_t__ tc_finish_count; scalar_t__ tc_submit_count; TYPE_1__ tc_call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,TYPE_2__*) ;

boolean_t
FUNC_8(
  thread_call_t VAR_6)
{
 spl_t VAR_7 = FUNC_1();

 if (VAR_6->tc_call.queue != ((void*)0) ||
    ((VAR_6->tc_flags & VAR_1) != 0)) {
  FUNC_5();
  FUNC_4(VAR_7);

  return (VAR_0);
 }

 int32_t VAR_8 = --VAR_6->tc_refs;
 if (VAR_8 < 0) {
  FUNC_3("Refcount negative: %d\n", VAR_8);
 }

 if ((VAR_3 | VAR_2)
   == ((VAR_3 | VAR_2) & VAR_6->tc_flags)) {
  FUNC_6(VAR_6, VAR_7);

 } else {
  FUNC_2(VAR_7);
 }

 if (VAR_8 == 0) {
  FUNC_0(VAR_6->tc_finish_count == VAR_6->tc_submit_count);
  FUNC_7(VAR_5, VAR_6);
 }

 return (VAR_4);
}
