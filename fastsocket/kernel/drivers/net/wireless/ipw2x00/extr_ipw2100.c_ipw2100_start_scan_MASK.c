
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw2100_priv {int status; TYPE_1__* ieee; } ;
struct host_command {int host_command_length; scalar_t__* host_command_parameters; int host_command_sequence; int host_command; } ;
struct TYPE_2__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ipw2100_priv*,struct host_command*) ;

__attribute__((used)) static int FUNC_4(struct ipw2100_priv *VAR_3)
{
 struct host_command VAR_4 = {
  .host_command = VAR_0,
  .host_command_sequence = 0,
  .host_command_length = 4
 };
 int VAR_5;

 FUNC_0("START_SCAN\n");

 VAR_4.host_command_parameters[0] = 0;


 if (VAR_3->ieee->iw_mode == VAR_1)
  return 1;

 if (VAR_3->status & VAR_2) {
  FUNC_2("Scan requested while already in scan...\n");
  return 0;
 }

 FUNC_1("enter\n");






 FUNC_2("starting scan\n");

 VAR_3->status |= VAR_2;
 VAR_5 = FUNC_3(VAR_3, &VAR_4);
 if (VAR_5)
  VAR_3->status &= ~VAR_2;

 FUNC_1("exit\n");

 return VAR_5;
}
