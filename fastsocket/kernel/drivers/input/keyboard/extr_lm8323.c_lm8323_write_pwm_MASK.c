
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lm8323_pwm {int running; int id; int chip; } ;


 int VAR_0 ;
 int const FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (struct lm8323_pwm*,int,int const) ;

__attribute__((used)) static void FUNC_3(struct lm8323_pwm *VAR_1, int VAR_2,
        int VAR_3, const u16 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_2(VAR_1, VAR_5, VAR_4[VAR_5]);

 FUNC_2(VAR_1, VAR_5++, FUNC_0(VAR_2));
 FUNC_1(VAR_1->chip, 2, VAR_0, VAR_1->id);
 VAR_1->running = 1;
}
