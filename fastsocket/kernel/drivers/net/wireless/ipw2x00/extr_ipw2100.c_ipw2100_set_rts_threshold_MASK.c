
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw2100_priv {int rts_threshold; } ;
struct host_command {int host_command_length; int* host_command_parameters; int host_command_sequence; int host_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipw2100_priv*,struct host_command*) ;

__attribute__((used)) static int FUNC_1(struct ipw2100_priv *VAR_3, u32 VAR_4)
{
 struct host_command VAR_5 = {
  .host_command = VAR_2,
  .host_command_sequence = 0,
  .host_command_length = 4
 };
 int VAR_6;

 if (VAR_4 & VAR_1)
  VAR_5.host_command_parameters[0] = VAR_0;
 else
  VAR_5.host_command_parameters[0] = VAR_4 & ~VAR_1;

 VAR_6 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->rts_threshold = VAR_4;

 return 0;
}
