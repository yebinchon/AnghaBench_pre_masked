
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {int ampdu_work; int ping_work; int ps_work; int led_work; int tx_janitor; int stat_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ar9170 *VAR_0)
{
 FUNC_0(&VAR_0->stat_work);
 FUNC_0(&VAR_0->tx_janitor);



 FUNC_1(&VAR_0->ps_work);
 FUNC_1(&VAR_0->ping_work);
 FUNC_1(&VAR_0->ampdu_work);
}
