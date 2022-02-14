
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int event_t ;
typedef int cpu_data_t ;
typedef int (* broadcastFunc ) (void*) ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {scalar_t__ cpu_data_vaddr; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,void*,void*) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (unsigned int*,unsigned int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 unsigned int VAR_7 ;
 int FUNC_8 (int ) ;

unsigned int
FUNC_9(uint32_t *VAR_8,
      boolean_t VAR_9,
      broadcastFunc VAR_10,
      void *VAR_11)
{
 boolean_t VAR_12;
 cpu_data_t *VAR_13;
 cpu_data_t *VAR_14;
 unsigned int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_12 = FUNC_7(VAR_1);
 VAR_13 = FUNC_4();

 VAR_15 = 0;

 if (VAR_8 != ((void*)0)) {
  *VAR_8 = VAR_7;
  FUNC_0((event_t)VAR_8, VAR_6);
 }

 VAR_17 = FUNC_6();
 for (VAR_16=0; VAR_16 <= VAR_17; VAR_16++) {
  VAR_14 = (cpu_data_t *)VAR_0[VAR_16].cpu_data_vaddr;

  if ((VAR_14 == ((void*)0)) || (VAR_14 == VAR_13))
   continue;

  if(VAR_2 != FUNC_2(VAR_14, VAR_3, (void *)VAR_10, VAR_11)) {
   VAR_15++;
  }
 }


 if (VAR_9) {
  VAR_10(VAR_11);
 }

 (void) FUNC_7(VAR_12);

 if (VAR_8 != ((void*)0)) {
  if (FUNC_5(VAR_8, (!VAR_9)? VAR_15+1 : VAR_15) == 0)
   FUNC_1(FUNC_3(), VAR_4);
  else
   FUNC_8(VAR_5);
 }

 if (!VAR_9)
  return (VAR_7 - VAR_15 - 1);
 else
  return (VAR_7 - VAR_15);
}
