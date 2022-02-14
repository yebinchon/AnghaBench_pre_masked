
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_continue_t ;
typedef int event_t ;
typedef void* clock_sec_t ;
typedef int clock_nsec_t ;
struct TYPE_2__ {int options; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (void**,int *) ;
 TYPE_1__* FUNC_4 () ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int VAR_5 ;
 int FUNC_10 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static void
FUNC_11(void)
{
 clock_sec_t VAR_11;
 clock_nsec_t VAR_12;

 FUNC_4()->options |= VAR_2;

 VAR_7++;
 VAR_8 = 1;

 while (VAR_3) {






  FUNC_10(VAR_0);

  FUNC_5(&VAR_5);

  if (VAR_4 == VAR_3)
   break;

  FUNC_3(&VAR_11, &VAR_12);

  if (FUNC_1(VAR_11) == 0)
   break;

  FUNC_6(&VAR_5);

  if (FUNC_9() == VAR_0) {
   VAR_9 = VAR_11;
   FUNC_0("vm_swap_create_file failed @ %lu secs\n", (unsigned long)VAR_11);

  } else
   VAR_10 = VAR_11;
 }
 VAR_8 = 0;

 if (VAR_4 == VAR_3)
  FUNC_8((event_t)&VAR_4);

 FUNC_2((event_t)&VAR_6, VAR_1);

 FUNC_6(&VAR_5);

 FUNC_7((thread_continue_t)FUNC_11);


}
