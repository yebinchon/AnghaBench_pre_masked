
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int rip; int rsp; } ;
struct TYPE_11__ {int rbp; TYPE_2__ isf; } ;
typedef TYPE_3__ x86_saved_state64_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_4__* thread_t ;
typedef scalar_t__ boolean_t ;
typedef int addr64_t ;
struct TYPE_13__ {int k_rbp; int k_rip; } ;
struct TYPE_12__ {int kernel_stack; TYPE_1__* task; } ;
struct TYPE_9__ {int map; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_8__* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int ,int*) ;

int
FUNC_6(thread_t VAR_4,
                       char * VAR_5,
                       char * VAR_6,
                       int VAR_7,
                       boolean_t VAR_8,
                       boolean_t VAR_9,
                       uint32_t * VAR_10,
                       uint64_t *VAR_11)
{
 uint64_t * VAR_12 = (uint64_t *)VAR_5;
 unsigned VAR_13 = (VAR_9 ? 2 : 1) * sizeof(addr64_t);

 uint32_t VAR_14 = 0;
 addr64_t VAR_15 = 0;
 int VAR_16 = 0;
 addr64_t VAR_17 = 0;
 addr64_t VAR_18 = 0;
 vm_offset_t VAR_19 = 0;
 vm_map_t VAR_20 = VAR_1;

 VAR_7 = (VAR_6 > VAR_5) ? FUNC_0(VAR_7, (int)((VAR_6 - VAR_5) / VAR_13)) : 0;

 if (VAR_8) {
  x86_saved_state64_t *VAR_21;
  VAR_21 = FUNC_2(VAR_4);
  VAR_17 = VAR_21->isf.rip;
  VAR_15 = VAR_21->rbp;
  VAR_20 = VAR_4->task->map;
        if (VAR_11 && VAR_8) {
            *VAR_11 = VAR_21->isf.rsp;
        }
 }
 else {
  VAR_15 = FUNC_1(VAR_4->kernel_stack)->k_rbp;
  VAR_17 = FUNC_1(VAR_4->kernel_stack)->k_rip;
  VAR_17 = FUNC_3(VAR_17);
  VAR_20 = VAR_3;
 }

 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {

  *VAR_12++ = VAR_17;
  if (VAR_9) {
   *VAR_12++ = VAR_15;
  }

  if (!VAR_15 || (VAR_15 == VAR_14)) {
   break;
  }
  if (VAR_15 & 0x0000007) {
   break;
  }
  if (VAR_15 <= VAR_18) {
   break;
  }

  VAR_19 = FUNC_5(VAR_15 + VAR_0, VAR_20, VAR_10);
  if (!VAR_19) {
   if (VAR_10) {
    *VAR_10 |= VAR_2;
   }
   break;
  }

  VAR_17 = *(uint64_t *)VAR_19;
  if (!VAR_8) {
   VAR_17 = FUNC_3(VAR_17);
  }

  VAR_18 = VAR_15;

  VAR_19 = FUNC_5(VAR_15, VAR_20, VAR_10);

  if (VAR_19) {
   VAR_15 = *(uint64_t *)VAR_19;
  } else {
   VAR_15 = 0;
   if (VAR_10) {
    *VAR_10 |= VAR_2;
   }
  }
 }

 FUNC_4();

 return (uint32_t) (((char *) VAR_12) - VAR_5);
}
