
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef void* uint64_t ;
typedef int uint16_t ;
typedef int * thread_t ;
typedef int savearea_t ;
struct TYPE_4__ {size_t cpu_id; } ;
struct TYPE_3__ {int cpuc_dtrace_flags; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int volatile VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;
 int * FUNC_2 () ;
 int FUNC_3 (void**,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

void
FUNC_10(uint64_t * VAR_4, int VAR_5)
{
 thread_t VAR_6 = FUNC_2();
 savearea_t *VAR_7;
 user_addr_t VAR_8, VAR_9, VAR_10;
 volatile uint16_t *VAR_11 = (volatile uint16_t *) & VAR_3[VAR_0->cpu_id].cpuc_dtrace_flags;
 int VAR_12;

 if (*VAR_11 & VAR_2)
  return;

 if (VAR_5 <= 0)
  return;




 if (VAR_6 == ((void*)0))
  goto zero;

 VAR_7 = (savearea_t *) FUNC_5(VAR_6);
 if (VAR_7 == ((void*)0))
  goto zero;

 *VAR_4++ = (uint64_t)FUNC_4();
 VAR_5--;

 if (VAR_5 <= 0)
  return;

 VAR_8 = FUNC_8(VAR_7);
 VAR_9 = FUNC_9(VAR_7);
 VAR_10 = FUNC_6(VAR_7);

 if (FUNC_1(VAR_1)) {
  *VAR_4++ = (uint64_t) VAR_8;
  VAR_5--;
  if (VAR_5 <= 0)
   return;

  VAR_8 = FUNC_7(VAR_7);
 }

 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_8, VAR_10);

 FUNC_0(VAR_12 >= 0);
 FUNC_0(VAR_12 <= VAR_5);

 VAR_4 += VAR_12;
 VAR_5 -= VAR_12;

zero:
 while (VAR_5-- > 0)
  *VAR_4++ = 0ULL;
}
