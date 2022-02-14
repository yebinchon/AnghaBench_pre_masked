
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int int32_t ;
typedef TYPE_2__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int * c_buffer; int c_swap_handle; } ;
struct TYPE_13__ {int c_busy_swapping; scalar_t__ cseg_swap_size; scalar_t__ cseg_hash; int c_lock; int c_bytes_used; TYPE_1__ c_store; int c_mysegno; int c_populated_offset; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_2__*,int ,scalar_t__) ;
 scalar_t__ FUNC_21 (char*,int) ;

int
FUNC_22(c_segment_t VAR_7, boolean_t VAR_8, boolean_t VAR_9)
{
 vm_offset_t VAR_10 = 0;
 uint32_t VAR_11 = 0;
 uint64_t VAR_12;

 FUNC_7(FUNC_2(VAR_7));


 FUNC_10(VAR_7);

 VAR_11 = FUNC_17(FUNC_3(VAR_7->c_populated_offset));
 VAR_12 = VAR_7->c_store.c_swap_handle;

 FUNC_1(VAR_7);
 VAR_7->c_busy_swapping = 1;
 FUNC_18();
 FUNC_15(&VAR_7->c_lock);

 FUNC_6(VAR_0);

 VAR_10 = (vm_offset_t)FUNC_0(VAR_7->c_mysegno);
 VAR_7->c_store.c_buffer = (int32_t*) VAR_10;

 FUNC_13(VAR_6, VAR_10, VAR_11, VAR_2, VAR_4);

 if (FUNC_20(VAR_7, VAR_12, VAR_11) != VAR_1) {
  FUNC_6(VAR_3);

  FUNC_12(VAR_6, VAR_10, VAR_11, VAR_2);

  FUNC_9(VAR_7, VAR_0, VAR_3, VAR_9);
 } else {
  FUNC_6(VAR_3);

  FUNC_9(VAR_7, VAR_3, VAR_8 == VAR_3 ? VAR_0 : VAR_3, VAR_9);

  FUNC_5(VAR_7->c_bytes_used, &VAR_5);

  if (VAR_8 == VAR_3) {
   if (FUNC_8(VAR_7, VAR_0)) {







    FUNC_11();
    return (1);
   }

   FUNC_14(&VAR_7->c_lock);
  }
 }
 FUNC_4(VAR_7);





 FUNC_11();

 return (0);
}
