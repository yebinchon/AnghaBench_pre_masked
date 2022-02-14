
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {int dummy; } ;
struct clock_event_device {int mode; int name; } ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;






 int VAR_0 ;
 struct sh_cmt_priv* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sh_cmt_priv*,int) ;
 int FUNC_3 (struct sh_cmt_priv*,int ) ;

__attribute__((used)) static void FUNC_4(enum clock_event_mode VAR_1,
        struct clock_event_device *VAR_2)
{
 struct sh_cmt_priv *VAR_3 = FUNC_0(VAR_2);


 switch (VAR_2->mode) {
 case 130:
 case 131:
  FUNC_3(VAR_3, VAR_0);
  break;
 default:
  break;
 }

 switch (VAR_1) {
 case 130:
  FUNC_1("sh_cmt: %s used for periodic clock events\n",
   VAR_2->name);
  FUNC_2(VAR_3, 1);
  break;
 case 131:
  FUNC_1("sh_cmt: %s used for oneshot clock events\n",
   VAR_2->name);
  FUNC_2(VAR_3, 0);
  break;
 case 129:
 case 128:
  FUNC_3(VAR_3, VAR_0);
  break;
 default:
  break;
 }
}
