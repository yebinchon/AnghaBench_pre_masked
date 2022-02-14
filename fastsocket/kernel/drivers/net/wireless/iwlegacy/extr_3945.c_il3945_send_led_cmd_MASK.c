
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;
struct il_led_cmd {int dummy; } ;
struct il_host_cmd {int len; int * callback; int flags; struct il_led_cmd* data; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct il_priv*,struct il_host_cmd*) ;

__attribute__((used)) static int
FUNC_1(struct il_priv *VAR_2, struct il_led_cmd *VAR_3)
{
 struct il_host_cmd VAR_4 = {
  .id = VAR_1,
  .len = sizeof(struct il_led_cmd),
  .data = VAR_3,
  .flags = VAR_0,
  .callback = ((void*)0),
 };

 return FUNC_0(VAR_2, &VAR_4);
}
