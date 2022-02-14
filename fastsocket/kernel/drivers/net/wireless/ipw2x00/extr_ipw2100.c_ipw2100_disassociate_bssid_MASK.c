
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int bssid; } ;
struct host_command {int host_command_length; int host_command_parameters; int host_command_sequence; int host_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ipw2100_priv*,struct host_command*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ipw2100_priv *VAR_2)
{
 struct host_command VAR_3 = {
  .host_command = VAR_0,
  .host_command_sequence = 0,
  .host_command_length = VAR_1
 };
 int VAR_4;
 int VAR_5;

 FUNC_0("DISASSOCIATION_BSSID\n");

 VAR_5 = VAR_1;




 FUNC_2(VAR_3.host_command_parameters, VAR_2->bssid, VAR_1);

 VAR_4 = FUNC_1(VAR_2, &VAR_3);

 return VAR_4;
}
