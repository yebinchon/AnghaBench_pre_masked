
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int thread_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int cpu_nthread; } ;
struct TYPE_3__ {int (* pmThreadTellUrgency ) (int,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int,int,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,int (*) (int,scalar_t__,scalar_t__),scalar_t__) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int ** VAR_10 ;

void
FUNC_12(int VAR_11,
    uint64_t VAR_12,
    uint64_t VAR_13,
    uint64_t VAR_14,
    thread_t VAR_15)
{
 uint64_t VAR_16 = 0, VAR_17;
 boolean_t VAR_18 = (VAR_8 != 0);
 FUNC_3(FUNC_6() > 0 || FUNC_9() == VAR_3);



 if (!VAR_7
     || VAR_6 == ((void*)0)
     || VAR_6->pmThreadTellUrgency == ((void*)0))
  return;

 FUNC_1(FUNC_0(VAR_2,VAR_4) | VAR_1, VAR_11, VAR_12, VAR_13, VAR_14, 0);

 if (FUNC_2((VAR_18 == VAR_5)))
  VAR_16 = FUNC_7();

 FUNC_5()->cpu_nthread = VAR_15;
 VAR_6->pmThreadTellUrgency(VAR_11, VAR_12, VAR_13);

 if (FUNC_2((VAR_18 == VAR_5))) {
  VAR_17 = FUNC_7() - VAR_16;

  if (FUNC_2(VAR_17 > VAR_9)) {




   VAR_9 = VAR_17;

   if (FUNC_2((VAR_17 > VAR_8) && !FUNC_8()))
    FUNC_10("Urgency notification callout %p exceeded threshold, 0x%llx abstime units", VAR_6->pmThreadTellUrgency, VAR_17);
  }
 }

 FUNC_1(FUNC_0(VAR_2,VAR_4) | VAR_0, VAR_11, VAR_12, VAR_13, 0, 0);
}
