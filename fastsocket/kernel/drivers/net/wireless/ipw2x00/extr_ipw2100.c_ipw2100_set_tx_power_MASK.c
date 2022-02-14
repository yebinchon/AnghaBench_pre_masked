
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ipw2100_priv {scalar_t__ tx_power; TYPE_1__* ieee; } ;
struct host_command {int host_command_length; scalar_t__* host_command_parameters; int host_command_sequence; int host_command; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipw2100_priv*,struct host_command*) ;

__attribute__((used)) static int FUNC_1(struct ipw2100_priv *VAR_5, u32 VAR_6)
{
 struct host_command VAR_7 = {
  .host_command = VAR_4,
  .host_command_sequence = 0,
  .host_command_length = 4
 };
 int VAR_8 = 0;
 u32 VAR_9 = VAR_6;

 if (VAR_6 != VAR_0)
  VAR_9 = (VAR_6 - VAR_2) * 16 /
        (VAR_1 - VAR_2);

 VAR_7.host_command_parameters[0] = VAR_9;

 if (VAR_5->ieee->iw_mode == VAR_3)
  VAR_8 = FUNC_0(VAR_5, &VAR_7);
 if (!VAR_8)
  VAR_5->tx_power = VAR_6;

 return 0;
}
