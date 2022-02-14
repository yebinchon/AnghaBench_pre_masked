
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sched_param {int sched_priority; } ;
struct TYPE_2__ {int status; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int VAR_8 ;
 int FUNC_10 (unsigned int) ;
 int VAR_9 ;
 int FUNC_11 (int ,int ,struct sched_param*) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_18(void *VAR_12)
{
 struct sched_param VAR_13 = {.sched_priority = 1};
 int VAR_14;
 unsigned int VAR_15 = (unsigned long)VAR_12;
 u64 VAR_16 = 0;

 FUNC_11(VAR_5, VAR_3, &VAR_13);

 while (!FUNC_5()) {
  int VAR_17;
  u64 VAR_18;

  FUNC_17();


  if (VAR_16 + VAR_9 * VAR_2 < VAR_7) {
   VAR_16 = VAR_7;
   FUNC_10(VAR_15);
  }

  VAR_14 = 0;

  FUNC_3()->status &= ~VAR_4;




  FUNC_13();

  VAR_18 = VAR_7 + VAR_2 * (100 - VAR_6) / 100;

  while (!FUNC_9()) {
   if (VAR_10 && !VAR_11) {

    FUNC_8("TSC halts in idle");
    VAR_11 = 1;
   }
   FUNC_6();
   VAR_17 = FUNC_14();
   FUNC_2(VAR_0,
    &VAR_17);
   FUNC_16();

   FUNC_0((void *)&FUNC_3()->flags, 0, 0);
   FUNC_13();
   if (!FUNC_9())
    FUNC_1(VAR_8, 1);

   FUNC_15();
   FUNC_2(VAR_1,
    &VAR_17);
   FUNC_7();

   if (VAR_7 > VAR_18) {
    VAR_14 = 1;
    break;
   }
  }

  FUNC_3()->status |= VAR_4;
  if (VAR_14)
   FUNC_12(VAR_2 * VAR_6 / 100);
 }

 FUNC_4(VAR_15);
 return 0;
}
