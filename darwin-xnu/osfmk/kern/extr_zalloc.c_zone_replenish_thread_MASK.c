
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef scalar_t__ kern_return_t ;
typedef TYPE_1__* event_t ;
struct TYPE_10__ {int options; } ;
struct TYPE_9__ {int zone_valid; int prio_refill_watermark; int cur_size; int count; int elem_size; scalar_t__ doing_alloc_without_vm_priv; scalar_t__ doing_alloc_with_vm_priv; scalar_t__ async_prio_refill; int zone_replenish_thread; scalar_t__ zone_replenishing; scalar_t__ noencrypt; int alloc_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int,int) ;
 TYPE_8__* FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int ,int *,int ,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_14 ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) __attribute__((noreturn))
static void
FUNC_14(zone_t VAR_18)
{
 vm_size_t VAR_19;
 FUNC_4()->options |= VAR_10;

 for (;;) {
  FUNC_7(VAR_18);
  FUNC_1(VAR_18->zone_valid);
  VAR_18->zone_replenishing = VAR_11;
  FUNC_1(VAR_18->prio_refill_watermark != 0);
  while ((VAR_19 = (VAR_18->cur_size - (VAR_18->count * VAR_18->elem_size))) < (VAR_18->prio_refill_watermark * VAR_18->elem_size)) {
   FUNC_1(VAR_18->doing_alloc_without_vm_priv == VAR_0);
   FUNC_1(VAR_18->doing_alloc_with_vm_priv == VAR_0);
   FUNC_1(VAR_18->async_prio_refill == VAR_11);

   FUNC_11(VAR_18);
   int VAR_20 = VAR_4|VAR_6;
   vm_offset_t VAR_21, VAR_22;
   kern_return_t VAR_23;

   if (FUNC_12())
    VAR_22 = FUNC_8(VAR_18->elem_size);
   else
    VAR_22 = VAR_18->alloc_size;

   if (VAR_18->noencrypt)
    VAR_20 |= VAR_5;


   if (FUNC_5()) {
    FUNC_10((event_t) &VAR_14);
   }

   VAR_23 = FUNC_6(VAR_15, &VAR_21, VAR_22, 0, VAR_20, VAR_12);

   if (VAR_23 == VAR_3) {
    FUNC_13(VAR_18, VAR_21, VAR_22);
   } else if (VAR_23 == VAR_2) {
    FUNC_0();
   } else if (VAR_23 == VAR_1) {
    VAR_23 = FUNC_6(VAR_13, &VAR_21, VAR_22, 0, VAR_20, VAR_12);
    if (VAR_23 == VAR_3) {
     FUNC_13(VAR_18, VAR_21, VAR_22);
    } else {
     FUNC_3(&VAR_18->zone_replenish_thread, VAR_9, 1, 100 * VAR_7);
     FUNC_9(VAR_8);
    }
   }

   FUNC_7(VAR_18);
   FUNC_1(VAR_18->zone_valid);
   VAR_16++;
  }

  VAR_18->zone_replenishing = VAR_0;



  FUNC_10(VAR_18);

  FUNC_2(&VAR_18->zone_replenish_thread, VAR_9);
  FUNC_11(VAR_18);
  FUNC_9(VAR_8);
  VAR_17++;
 }
}
