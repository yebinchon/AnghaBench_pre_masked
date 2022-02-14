
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int x86_saved_state_t ;
typedef int uint64_t ;
typedef int kern_return_t ;
struct TYPE_10__ {int * cpu_int_state; } ;
struct TYPE_9__ {uintptr_t kernel_stack; } ;
struct TYPE_8__ {int cs; uintptr_t uesp; } ;
struct TYPE_6__ {int cs; uintptr_t rsp; } ;
struct TYPE_7__ {TYPE_1__ isf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 () ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 uintptr_t VAR_4 ;
 TYPE_3__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) __attribute__((used))
static kern_return_t
FUNC_5(uintptr_t *VAR_5)
{
 x86_saved_state_t *VAR_6;
 uintptr_t VAR_7;
 bool VAR_8;
 uint64_t VAR_9;
 uintptr_t VAR_10, VAR_11;

 VAR_6 = FUNC_0()->cpu_int_state;
 if (!VAR_6) {
  return VAR_0;
 }

 VAR_8 = FUNC_2(VAR_6);

 if (VAR_8) {
  VAR_9 = FUNC_4(VAR_6)->isf.cs;
 } else {
  VAR_9 = FUNC_3(VAR_6)->cs;
 }

 if ((VAR_9 & VAR_2) == VAR_3) {
  return VAR_0;
 }

 if (VAR_8) {
  VAR_7 = FUNC_4(VAR_6)->isf.rsp;
 } else {
  VAR_7 = FUNC_3(VAR_6)->uesp;
 }


 VAR_11 = FUNC_1()->kernel_stack;
 VAR_10 = VAR_11 + VAR_4;
 if (VAR_7 >= VAR_11 && VAR_7 < VAR_10) {
     return VAR_0;
 }

 *VAR_5 = *(uintptr_t *)VAR_7;
 return VAR_1;
}
