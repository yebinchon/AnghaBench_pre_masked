
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct il_priv {int dummy; } ;
struct il_led_cmd {int dummy; } ;
struct il_host_cmd {int len; int * callback; int flags; struct il_led_cmd* data; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct il_priv*,int ) ;
 int FUNC_1 (struct il_priv*,int ,int) ;
 int FUNC_2 (struct il_priv*,struct il_host_cmd*) ;

__attribute__((used)) static int
FUNC_3(struct il_priv *VAR_4, struct il_led_cmd *VAR_5)
{
 struct il_host_cmd VAR_6 = {
  .id = VAR_3,
  .len = sizeof(struct il_led_cmd),
  .data = VAR_5,
  .flags = VAR_0,
  .callback = ((void*)0),
 };
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_2);
 if (VAR_7 != (VAR_7 & VAR_1))
  FUNC_1(VAR_4, VAR_2, VAR_7 & VAR_1);

 return FUNC_2(VAR_4, &VAR_6);
}
