
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_2__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {int c_swap_handle; scalar_t__ c_buffer; } ;
struct TYPE_11__ {scalar_t__ c_generation_id; int c_bytes_used; scalar_t__ c_overage_swap; int c_lock; scalar_t__ c_busy_swapping; scalar_t__ c_busy; int c_on_minorcompact_q; TYPE_1__ c_store; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__) ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (int ,int ,int,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_16 ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_13(c_segment_t VAR_17, uint64_t VAR_18, uint32_t VAR_19, kern_return_t VAR_20)
{

 FUNC_4(VAR_8);

 if (VAR_20 == VAR_4) {
         FUNC_9(VAR_12, (vm_offset_t)VAR_17->c_store.c_buffer, VAR_19, VAR_5);
 }





 FUNC_10(VAR_9);
 FUNC_10(&VAR_17->c_lock);

 if (VAR_20 == VAR_4) {
         int VAR_21 = VAR_2;
  boolean_t VAR_22 = VAR_3;

  if (VAR_14 == VAR_8) {
          if (VAR_17->c_generation_id >= VAR_13 &&
             VAR_17->c_generation_id <= VAR_15)
           VAR_22 = VAR_8;
  } else if (FUNC_0(VAR_17))
          VAR_21 = VAR_1;

  FUNC_8(VAR_17, VAR_21, VAR_22);

  VAR_17->c_store.c_swap_handle = VAR_18;

  FUNC_5(VAR_16, VAR_19 >> VAR_6);

  if (VAR_17->c_bytes_used)
          FUNC_3(-VAR_17->c_bytes_used, &VAR_11);
 } else {
         if (VAR_17->c_overage_swap == VAR_8) {
          VAR_17->c_overage_swap = VAR_3;
   VAR_10--;
  }
  FUNC_8(VAR_17, VAR_0, VAR_3);

  if (!VAR_17->c_on_minorcompact_q && FUNC_1(VAR_17) >= VAR_7)
          FUNC_7(VAR_17, VAR_8);
 }
 FUNC_6(VAR_17->c_busy_swapping);
 FUNC_6(VAR_17->c_busy);

 VAR_17->c_busy_swapping = 0;
 FUNC_11(VAR_9);

 FUNC_2(VAR_17);
 FUNC_11(&VAR_17->c_lock);

 FUNC_4(VAR_3);
}
