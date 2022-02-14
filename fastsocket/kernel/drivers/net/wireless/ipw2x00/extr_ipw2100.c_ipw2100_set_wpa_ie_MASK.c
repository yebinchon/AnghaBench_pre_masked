
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_wpa_assoc_frame {int dummy; } ;
struct ipw2100_priv {int dummy; } ;
struct host_command {int host_command_length; int host_command_parameters; int host_command_sequence; int host_command; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct ipw2100_priv*) ;
 scalar_t__ FUNC_2 (struct ipw2100_priv*) ;
 int FUNC_3 (struct ipw2100_priv*,struct host_command*) ;
 int FUNC_4 (int ,struct ipw2100_wpa_assoc_frame*,int) ;

__attribute__((used)) static int FUNC_5(struct ipw2100_priv *VAR_2,
         struct ipw2100_wpa_assoc_frame *VAR_3,
         int VAR_4)
{
 struct host_command VAR_5 = {
  .host_command = VAR_1,
  .host_command_sequence = 0,
  .host_command_length = sizeof(struct ipw2100_wpa_assoc_frame),
 };
 int VAR_6;

 FUNC_0("SET_WPA_IE\n");

 if (!VAR_4) {
  VAR_6 = FUNC_1(VAR_2);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_4(VAR_5.host_command_parameters, VAR_3,
        sizeof(struct ipw2100_wpa_assoc_frame));

 VAR_6 = FUNC_3(VAR_2, &VAR_5);

 if (!VAR_4) {
  if (FUNC_2(VAR_2))
   VAR_6 = -VAR_0;
 }

 return VAR_6;
}
