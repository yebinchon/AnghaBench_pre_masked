
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ml_effect_state {scalar_t__ stop_at; scalar_t__ play_at; struct ff_effect* effect; } ;
struct ff_envelope {int attack_length; int fade_length; int fade_level; int attack_level; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct ff_effect {TYPE_1__ replay; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;
 unsigned long VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ml_effect_state *VAR_2, int VAR_3,
     struct ff_envelope *VAR_4)
{
 struct ff_effect *VAR_5 = VAR_2->effect;
 unsigned long VAR_6 = VAR_1;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_4->attack_length &&
     FUNC_6(VAR_6,
   VAR_2->play_at + FUNC_4(VAR_4->attack_length))) {
  FUNC_1("value = 0x%x, attack_level = 0x%x", VAR_3,
        VAR_4->attack_level);
  VAR_7 = FUNC_2(VAR_6 - VAR_2->play_at);
  VAR_8 = VAR_4->attack_length;
  VAR_9 = FUNC_3(VAR_0, VAR_4->attack_level, 0x7fff);

 } else if (VAR_4->fade_length && VAR_5->replay.length &&
     FUNC_5(VAR_6,
         VAR_2->stop_at - FUNC_4(VAR_4->fade_length)) &&
     FUNC_6(VAR_6, VAR_2->stop_at)) {
  VAR_7 = FUNC_2(VAR_2->stop_at - VAR_6);
  VAR_8 = VAR_4->fade_length;
  VAR_9 = FUNC_3(VAR_0, VAR_4->fade_level, 0x7fff);
 } else
  return VAR_3;

 VAR_10 = FUNC_0(VAR_3) - VAR_9;

 FUNC_1("difference = %d", VAR_10);
 FUNC_1("time_from_level = 0x%x", VAR_7);
 FUNC_1("time_of_envelope = 0x%x", VAR_8);

 VAR_10 = VAR_10 * VAR_7 / VAR_8;

 FUNC_1("difference = %d", VAR_10);

 return VAR_3 < 0 ?
  -(VAR_10 + VAR_9) : (VAR_10 + VAR_9);
}
