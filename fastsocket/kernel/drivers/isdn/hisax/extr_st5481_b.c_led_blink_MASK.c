
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct st5481_adapter {int led_counter; int leds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct st5481_adapter*,int ,int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct st5481_adapter *VAR_2)
{
 u_char VAR_3 = VAR_2->leds;


 if (++VAR_2->led_counter % 50) {
  return;
 }

 if (VAR_2->led_counter % 100) {
  VAR_3 |= VAR_1;
 } else {
  VAR_3 &= ~VAR_1;
 }

 FUNC_0(VAR_2, VAR_0, VAR_3, ((void*)0), ((void*)0));
}
