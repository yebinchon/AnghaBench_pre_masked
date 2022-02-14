
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct arm_saved_state {int dummy; } ;
typedef struct arm_saved_state x86_saved_state_t ;
typedef int * vm_map_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {uintptr_t eip; uintptr_t ebp; } ;
struct TYPE_4__ {uintptr_t rip; } ;
struct TYPE_5__ {uintptr_t rbp; TYPE_1__ isf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (uintptr_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,char*,size_t) ;
 void* FUNC_3 () ;
 uintptr_t FUNC_4 (struct arm_saved_state*) ;
 uintptr_t FUNC_5 (struct arm_saved_state*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 struct arm_saved_state* FUNC_8 (void*) ;
 int FUNC_9 (struct arm_saved_state*) ;
 scalar_t__ FUNC_10 () ;
 TYPE_3__* FUNC_11 (struct arm_saved_state*) ;
 TYPE_2__* FUNC_12 (struct arm_saved_state*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;

int
FUNC_15(void *VAR_2, uintptr_t *VAR_3, uint32_t VAR_4,
 uint32_t *VAR_5, bool *VAR_6)
{
 bool VAR_7;
 uintptr_t VAR_8, VAR_9, VAR_10;
 vm_map_t VAR_11 = ((void*)0), VAR_12 = ((void*)0);
 uint32_t VAR_13 = 0;
 int VAR_14 = 0;
 size_t VAR_15;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 > 0);
 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_6 != ((void*)0));






 x86_saved_state_t *VAR_16 = FUNC_8(VAR_2);

 if (!VAR_16) {
  return VAR_0;
 }

 VAR_7 = FUNC_9(VAR_16);
 if (VAR_7) {
  VAR_8 = FUNC_12(VAR_16)->isf.rip;
  VAR_9 = FUNC_12(VAR_16)->rbp;
 } else {
  VAR_8 = FUNC_11(VAR_16)->eip;
  VAR_9 = FUNC_11(VAR_16)->ebp;
 }
 if (VAR_4 == 0) {
  goto out;
 }

 VAR_3[VAR_13++] = VAR_8;

 if (VAR_13 >= VAR_4) {
  goto out;
 }

 if (((VAR_9) == 0 || !FUNC_0((VAR_9)))) {
  goto out;
 }

 FUNC_1(FUNC_10() == VAR_1);
 if (!FUNC_10()) {
  return VAR_0;
 }

 union {
  struct {
   uint64_t fp;
   uint64_t ret;
  } u64;
  struct {
   uint32_t fp;
   uint32_t ret;
  } u32;
 } VAR_17;

 VAR_15 = 2 * (VAR_7 ? sizeof(uint64_t) : sizeof(uint32_t));


 if (VAR_2 != FUNC_3()) {
  VAR_11 = FUNC_6(FUNC_7(VAR_2));
  if (VAR_11 == ((void*)0)) {
   return VAR_0;
  }
  VAR_12 = FUNC_14(VAR_11);
 } else {
  VAR_11 = ((void*)0);
 }

 while (VAR_9 != 0 && VAR_13 < VAR_4) {
  VAR_14 = FUNC_2(VAR_9, (char *)&VAR_17, VAR_15);
  if (VAR_14) {
   goto out;
  }

  VAR_10 = VAR_7 ? VAR_17.u64.fp : VAR_17.u32.fp;

  if (((VAR_10) == 0 || !FUNC_0((VAR_10)))) {
   break;
  }

  uintptr_t VAR_18 = VAR_7 ? VAR_17.u64.ret : VAR_17.u32.ret;
  VAR_3[VAR_13++] = VAR_18;


  if (VAR_10 <= VAR_9) {
   break;
  }
  VAR_9 = VAR_10;
 }

out:
 if (VAR_11) {
  (void)FUNC_14(VAR_12);
  FUNC_13(VAR_11);
 }

 *VAR_6 = VAR_7;
 *VAR_5 = VAR_13;
 return VAR_14;

}
