
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuidle_state {unsigned long long time; int usage; scalar_t__ (* enter ) (struct cpuidle_device*,struct cpuidle_state*) ;} ;
struct cpuidle_device {scalar_t__ last_residency; struct cpuidle_state* last_state; struct cpuidle_state* states; int enabled; } ;
struct TYPE_2__ {int (* select ) (struct cpuidle_device*) ;int (* reflect ) (struct cpuidle_device*) ;} ;


 struct cpuidle_device* FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct cpuidle_device*) ;
 scalar_t__ FUNC_8 (struct cpuidle_device*,struct cpuidle_state*) ;
 int FUNC_9 (struct cpuidle_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(void)
{
 struct cpuidle_device *VAR_2 = FUNC_0(VAR_1);
 struct cpuidle_state *VAR_3;
 int VAR_4;


 if (!VAR_2 || !VAR_2->enabled) {
  if (&FUNC_5)
   FUNC_5();
  else



   FUNC_3();

  return;
 }
 VAR_4 = VAR_0->select(VAR_2);
 if (FUNC_4()) {
  FUNC_3();
  return;
 }

 VAR_3 = &VAR_2->states[VAR_4];


 VAR_2->last_state = VAR_3;
 VAR_2->last_residency = VAR_3->enter(VAR_2, VAR_3);
 if (VAR_2->last_state)
  VAR_3 = VAR_2->last_state;

 VAR_3->time += (unsigned long long)VAR_2->last_residency;
 VAR_3->usage++;


 if (VAR_0->reflect)
  VAR_0->reflect(VAR_2);
 FUNC_10(FUNC_6());
}
