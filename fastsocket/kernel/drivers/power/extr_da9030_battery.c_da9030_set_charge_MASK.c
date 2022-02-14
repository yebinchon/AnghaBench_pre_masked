
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da9030_charger {int charge_milliamp; int charge_millivolt; int is_on; int psy; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct da9030_charger *VAR_2, int VAR_3)
{
 uint8_t VAR_4;

 if (VAR_3) {
  VAR_4 = VAR_1;
  VAR_4 |= (VAR_2->charge_milliamp / 100) << 3;
  VAR_4 |= (VAR_2->charge_millivolt - 4000) / 50;
  VAR_2->is_on = 1;
 } else {
  VAR_4 = 0;
  VAR_2->is_on = 0;
 }

 FUNC_0(VAR_2->master, VAR_0, VAR_4);

 FUNC_1(&VAR_2->psy);
}
