
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int x86_saved_state_t ;
typedef int uint64_t ;
typedef int kern_return_t ;
struct TYPE_8__ {int * cpu_int_state; } ;
struct TYPE_7__ {int cs; uintptr_t eip; uintptr_t ebp; } ;
struct TYPE_5__ {int cs; uintptr_t rip; } ;
struct TYPE_6__ {uintptr_t rbp; TYPE_1__ isf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;

__attribute__((used)) static kern_return_t
FUNC_4(uintptr_t *VAR_4, uintptr_t *VAR_5)
{
 x86_saved_state_t *VAR_6;
 bool VAR_7;
 uint64_t VAR_8;

 VAR_6 = FUNC_0()->cpu_int_state;
 if (!VAR_6) {
  return VAR_0;
 }

 VAR_7 = FUNC_1(VAR_6);

 if (VAR_7) {
  VAR_8 = FUNC_3(VAR_6)->isf.cs;
 } else {
  VAR_8 = FUNC_2(VAR_6)->cs;
 }

 if ((VAR_8 & VAR_2) == VAR_3) {
  return VAR_0;
 }

 if (VAR_7) {
  *VAR_4 = FUNC_3(VAR_6)->isf.rip;
  *VAR_5 = FUNC_3(VAR_6)->rbp;
 } else {
  *VAR_4 = FUNC_2(VAR_6)->eip;
  *VAR_5 = FUNC_2(VAR_6)->ebp;
 }
 return VAR_1;
}
