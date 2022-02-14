
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_state {int dummy; } ;
struct cpuidle_device {int dummy; } ;
typedef int s64 ;
typedef int ktime_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (struct cpuidle_state*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,unsigned long,int) ;

__attribute__((used)) static int FUNC_16(struct cpuidle_device *VAR_6, struct cpuidle_state *VAR_7)
{
 unsigned long VAR_8 = 1;
 unsigned long VAR_9 = (unsigned long)FUNC_3(VAR_7);
 unsigned int VAR_10;
 ktime_t VAR_11, VAR_12;
 s64 VAR_13;
 int VAR_14 = FUNC_12();

 VAR_10 = (((VAR_9) >> VAR_3) & VAR_2) + 1;

 FUNC_8();

 if (!(VAR_5 & (1 << (VAR_10))))
  FUNC_2(VAR_0, &VAR_14);

 VAR_11 = FUNC_5();

 FUNC_14();

 FUNC_15(VAR_4, (VAR_9 >> 4) + 1, VAR_14);

 if (!FUNC_10()) {

  FUNC_0((void *)&FUNC_4()->flags, 0, 0);
  FUNC_11();
  if (!FUNC_10())
   FUNC_1(VAR_9, VAR_8);
 }

 FUNC_13();

 VAR_12 = FUNC_5();
 VAR_13 = FUNC_7(FUNC_6(VAR_12, VAR_11));

 FUNC_9();

 if (!(VAR_5 & (1 << (VAR_10))))
  FUNC_2(VAR_1, &VAR_14);

 return VAR_13;
}
