
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_led {int * ah; int led_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ath5k_led *VAR_0)
{
 if (!VAR_0->ah)
  return;
 FUNC_1(&VAR_0->led_dev);
 FUNC_0(VAR_0->ah);
 VAR_0->ah = ((void*)0);
}
