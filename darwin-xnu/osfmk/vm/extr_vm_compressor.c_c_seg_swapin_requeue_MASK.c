
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int32_t ;
typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;
typedef TYPE_2__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {int * c_buffer; } ;
struct TYPE_8__ {scalar_t__ c_overage_swap; scalar_t__ c_swappedin_ts; int c_populated_offset; TYPE_1__ c_store; int c_on_minorcompact_q; scalar_t__ c_busy_swapping; scalar_t__ c_busy; int c_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(c_segment_t VAR_8, boolean_t VAR_9, boolean_t VAR_10, boolean_t VAR_11)
{
        clock_sec_t VAR_12;
        clock_nsec_t VAR_13;

 FUNC_5(&VAR_12, &VAR_13);

 FUNC_6(VAR_6);
 FUNC_6(&VAR_8->c_lock);

 FUNC_2(VAR_8->c_busy_swapping);
 FUNC_2(VAR_8->c_busy);

 VAR_8->c_busy_swapping = 0;

 if (VAR_8->c_overage_swap == VAR_5) {
  VAR_7--;
  VAR_8->c_overage_swap = VAR_3;
 }
 if (VAR_9 == VAR_5) {
  if (VAR_11 == VAR_5)
   FUNC_4(VAR_8, VAR_2, VAR_3);
  else
   FUNC_4(VAR_8, VAR_0, VAR_3);

  if (VAR_10 == VAR_5 && !VAR_8->c_on_minorcompact_q && FUNC_1(VAR_8) >= VAR_4)
   FUNC_3(VAR_8, VAR_5);
 } else {
  VAR_8->c_store.c_buffer = (int32_t*) ((void*)0);
  VAR_8->c_populated_offset = FUNC_0(0);

  FUNC_4(VAR_8, VAR_1, VAR_3);
 }
 VAR_8->c_swappedin_ts = (uint32_t)VAR_12;

 FUNC_7(VAR_6);
}
