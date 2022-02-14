
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef size_t uint32_t ;
typedef int event_t ;
typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;
typedef TYPE_2__* c_segment_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int * c_buffer; } ;
struct TYPE_12__ {size_t c_populated_offset; size_t c_nextoffset; size_t c_creation_ts; int c_state; scalar_t__ c_generation_id; int c_lock; int c_busy; TYPE_1__ c_store; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int,scalar_t__) ;
 int VAR_13 ;
 int FUNC_9 (scalar_t__*,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int ,int ,size_t,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 size_t FUNC_15 (int) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void
FUNC_16(c_segment_t VAR_17, c_segment_t *VAR_18)
{
 uint32_t VAR_19;
 uint32_t VAR_20;
 int VAR_21 = VAR_0;
 clock_sec_t VAR_22;
 clock_nsec_t VAR_23;
 boolean_t VAR_24 = VAR_3;

 VAR_19 = FUNC_15(FUNC_2(VAR_17->c_populated_offset - VAR_17->c_nextoffset));
 if (VAR_19) {
  VAR_20 = FUNC_1(FUNC_13(FUNC_2(VAR_17->c_nextoffset)));




  FUNC_12(&VAR_17->c_lock);

  FUNC_10(
   VAR_14,
   (vm_offset_t) &VAR_17->c_store.c_buffer[VAR_20],
   VAR_19,
   VAR_4);

  FUNC_11(&VAR_17->c_lock);

  VAR_17->c_populated_offset = VAR_20;
 }
 FUNC_6(FUNC_2(VAR_17->c_populated_offset) <= VAR_2);
 if (VAR_16 == VAR_7) {
  VAR_21 = VAR_1;
  VAR_24 = VAR_7;
 }

 FUNC_9(&VAR_22, &VAR_23);
 VAR_17->c_creation_ts = (uint32_t)VAR_22;

 FUNC_11(VAR_12);

 VAR_17->c_generation_id = VAR_11++;
 FUNC_8(VAR_17, VAR_21, VAR_24);
 if (VAR_17->c_state == VAR_0 && FUNC_3(VAR_17) >= VAR_5)
  FUNC_7(VAR_17, VAR_7);

 FUNC_12(VAR_12);

 if (VAR_17->c_state == VAR_1)
  FUNC_14((event_t)&VAR_13);

 *VAR_18 = ((void*)0);
}
