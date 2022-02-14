
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw2100_priv {int config; int essid_len; scalar_t__ essid; } ;
struct host_command {int host_command_length; scalar_t__ host_command_parameters; int host_command_sequence; int host_command; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ipw2100_priv*) ;
 scalar_t__ FUNC_3 (struct ipw2100_priv*) ;
 int FUNC_4 (struct ipw2100_priv*,struct host_command*) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct ipw2100_priv *VAR_5, char *VAR_6,
        int VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_7(VAR_7, VAR_2);
 struct host_command VAR_10 = {
  .host_command = VAR_3,
  .host_command_sequence = 0,
  .host_command_length = VAR_9
 };
 int VAR_11;
 FUNC_0(VAR_4);

 FUNC_1("SSID: '%s'\n", FUNC_8(VAR_4, VAR_6, VAR_9));

 if (VAR_9)
  FUNC_5(VAR_10.host_command_parameters, VAR_6, VAR_9);

 if (!VAR_8) {
  VAR_11 = FUNC_2(VAR_5);
  if (VAR_11)
   return VAR_11;
 }



 if (!VAR_9 && !(VAR_5->config & VAR_0)) {
  int VAR_12;
  u8 *VAR_13 = (u8 *) VAR_10.host_command_parameters;
  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
   VAR_13[VAR_12] = 0x18 + VAR_12;
  VAR_10.host_command_length = VAR_2;
 }




 VAR_11 = FUNC_4(VAR_5, &VAR_10);
 if (!VAR_11) {
  FUNC_6(VAR_5->essid + VAR_9, 0, VAR_2 - VAR_9);
  FUNC_5(VAR_5->essid, VAR_6, VAR_9);
  VAR_5->essid_len = VAR_9;
 }

 if (!VAR_8) {
  if (FUNC_3(VAR_5))
   VAR_11 = -VAR_1;
 }

 return VAR_11;
}
