
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ipw2100_priv {void* short_retry_limit; } ;
struct host_command {int host_command_length; void** host_command_parameters; int host_command_sequence; int host_command; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw2100_priv*,struct host_command*) ;

__attribute__((used)) static int FUNC_1(struct ipw2100_priv *VAR_1, u32 VAR_2)
{
 struct host_command VAR_3 = {
  .host_command = VAR_0,
  .host_command_sequence = 0,
  .host_command_length = 4
 };
 int VAR_4;

 VAR_3.host_command_parameters[0] = VAR_2;

 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_1->short_retry_limit = VAR_2;

 return 0;
}
