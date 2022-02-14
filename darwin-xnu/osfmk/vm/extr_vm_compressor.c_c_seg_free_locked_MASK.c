
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ uint64_t ;
struct c_slot {int dummy; } ;
typedef int int32_t ;
typedef TYPE_2__* c_segment_t ;
struct TYPE_11__ {int c_segno; } ;
struct TYPE_9__ {scalar_t__ c_swap_handle; int * c_buffer; } ;
struct TYPE_10__ {int c_busy; scalar_t__ c_slots_used; scalar_t__ c_overage_swap; int c_mysegno; int c_slot_var_array_len; int c_slot_var_array; int c_lock; TYPE_1__ c_store; int c_populated_offset; int c_busy_swapping; int c_on_minorcompact_q; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*,int ,scalar_t__) ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_12 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,TYPE_2__*) ;

void
FUNC_13(c_segment_t VAR_13)
{
 int VAR_14;
 int VAR_15 = 0;
 int32_t *VAR_16 = ((void*)0);
 uint64_t VAR_17 = 0;

 FUNC_3(VAR_13->c_busy);
 FUNC_3(VAR_13->c_slots_used == 0);
 FUNC_3(!VAR_13->c_on_minorcompact_q);
 FUNC_3(!VAR_13->c_busy_swapping);

 if (VAR_13->c_overage_swap == VAR_4) {
  VAR_7--;
  VAR_13->c_overage_swap = VAR_1;
 }
 if ( !(FUNC_0(VAR_13)))
  VAR_16 = VAR_13->c_store.c_buffer;
 else
  VAR_17 = VAR_13->c_store.c_swap_handle;

 FUNC_4(VAR_13, VAR_0, VAR_1);

 FUNC_9(VAR_6);

 if (VAR_16) {
  VAR_15 = (FUNC_10(FUNC_1(VAR_13->c_populated_offset))) / VAR_3;
  VAR_13->c_store.c_buffer = ((void*)0);
 } else
  VAR_13->c_store.c_swap_handle = (uint64_t)-1;

 FUNC_9(&VAR_13->c_lock);

 if (VAR_16) {
  if (VAR_15)
   FUNC_5(VAR_10, (vm_offset_t) VAR_16, VAR_15 * VAR_3, VAR_2);

 } else if (VAR_17) {



  FUNC_11(VAR_17);
 }
 FUNC_8(&VAR_13->c_lock);




 FUNC_2(VAR_13);
 FUNC_9(&VAR_13->c_lock);

 VAR_14 = VAR_13->c_mysegno;

 FUNC_8(VAR_6);







 VAR_9[VAR_14].c_segno = VAR_5;
 VAR_5 = VAR_14;
 VAR_8--;

 FUNC_9(VAR_6);

 FUNC_7(&VAR_13->c_lock, &VAR_12);

 if (VAR_13->c_slot_var_array_len)
  FUNC_6(VAR_13->c_slot_var_array, sizeof(struct c_slot) * VAR_13->c_slot_var_array_len);

 FUNC_12(VAR_11, VAR_13);
}
