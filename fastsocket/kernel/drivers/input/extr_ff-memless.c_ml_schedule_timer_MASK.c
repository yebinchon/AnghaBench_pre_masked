
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ml_effect_state {unsigned long play_at; int flags; } ;
struct ml_device {int timer; struct ml_effect_state* states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct ml_effect_state*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 unsigned long VAR_3 ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ml_device *VAR_4)
{
 struct ml_effect_state *VAR_5;
 unsigned long VAR_6 = VAR_3;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_1("calculating next timer");

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {

  VAR_5 = &VAR_4->states[VAR_10];

  if (!FUNC_4(VAR_1, &VAR_5->flags))
   continue;

  if (FUNC_4(VAR_0, &VAR_5->flags))
   VAR_8 = FUNC_0(VAR_5);
  else
   VAR_8 = VAR_5->play_at;

  if (FUNC_6(VAR_6, VAR_8) &&
      (++VAR_9 == 1 || FUNC_5(VAR_8, VAR_7)))
   VAR_7 = VAR_8;
 }

 if (!VAR_9) {
  FUNC_1("no actions");
  FUNC_2(&VAR_4->timer);
 } else {
  FUNC_1("timer set");
  FUNC_3(&VAR_4->timer, VAR_7);
 }
}
