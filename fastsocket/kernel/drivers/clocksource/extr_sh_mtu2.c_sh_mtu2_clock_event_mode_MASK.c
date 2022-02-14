
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mtu2_priv {int dummy; } ;
struct clock_event_device {int mode; int name; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;





 struct sh_mtu2_priv* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sh_mtu2_priv*) ;
 int FUNC_3 (struct sh_mtu2_priv*) ;

__attribute__((used)) static void FUNC_4(enum clock_event_mode VAR_0,
        struct clock_event_device *VAR_1)
{
 struct sh_mtu2_priv *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0;


 switch (VAR_1->mode) {
 case 130:
  FUNC_2(VAR_2);
  VAR_3 = 1;
  break;
 default:
  break;
 }

 switch (VAR_0) {
 case 130:
  FUNC_1("sh_mtu2: %s used for periodic clock events\n",
   VAR_1->name);
  FUNC_3(VAR_2);
  break;
 case 128:
  if (!VAR_3)
   FUNC_2(VAR_2);
  break;
 case 129:
 default:
  break;
 }
}
