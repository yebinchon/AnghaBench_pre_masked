
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ipw2100_priv {scalar_t__ channel; int config; TYPE_1__* ieee; } ;
struct host_command {int host_command_length; scalar_t__* host_command_parameters; int host_command_sequence; int host_command; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ipw2100_priv*) ;
 int FUNC_3 (struct ipw2100_priv*) ;
 int FUNC_4 (struct ipw2100_priv*,struct host_command*) ;

__attribute__((used)) static int FUNC_5(struct ipw2100_priv *VAR_6, u32 VAR_7,
          int VAR_8)
{
 struct host_command VAR_9 = {
  .host_command = VAR_1,
  .host_command_sequence = 0,
  .host_command_length = sizeof(u32)
 };
 int VAR_10;

 VAR_9.host_command_parameters[0] = VAR_7;

 FUNC_0("CHANNEL: %d\n", VAR_7);


 if (VAR_6->ieee->iw_mode == VAR_3)
  return 0;

 if ((VAR_7 != 0) &&
     ((VAR_7 < VAR_5) || (VAR_7 > VAR_4)))
  return -VAR_2;

 if (!VAR_8) {
  VAR_10 = FUNC_2(VAR_6);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_6, &VAR_9);
 if (VAR_10) {
  FUNC_1("Failed to set channel to %d", VAR_7);
  return VAR_10;
 }

 if (VAR_7)
  VAR_6->config |= VAR_0;
 else
  VAR_6->config &= ~VAR_0;

 VAR_6->channel = VAR_7;

 if (!VAR_8) {
  VAR_10 = FUNC_3(VAR_6);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
