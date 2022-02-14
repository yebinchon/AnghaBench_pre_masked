
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw2100_priv {int status; int adapter_mutex; int hang_check; scalar_t__ stop_hang_check; TYPE_1__* net_dev; } ;
struct host_command {int host_command_length; int host_command_sequence; int host_command; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ipw2100_priv*,struct host_command*) ;
 int FUNC_3 (struct ipw2100_priv*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ipw2100_priv*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct ipw2100_priv *VAR_4)
{
 struct host_command VAR_5 = {
  .host_command = VAR_0,
  .host_command_sequence = 0,
  .host_command_length = 0
 };
 int VAR_6 = 0;

 FUNC_0("HOST_COMPLETE\n");

 if (VAR_4->status & VAR_3)
  return 0;

 FUNC_4(&VAR_4->adapter_mutex);

 if (FUNC_6(VAR_4)) {
  FUNC_0("Command aborted due to RF kill active.\n");
  goto fail_up;
 }

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_1("Failed to send HOST_COMPLETE command\n");
  goto fail_up;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_2);
 if (VAR_6) {
  FUNC_1("%s: card not responding to init command.\n",
          VAR_4->net_dev->name);
  goto fail_up;
 }

 if (VAR_4->stop_hang_check) {
  VAR_4->stop_hang_check = 0;
  FUNC_7(&VAR_4->hang_check, VAR_1 / 2);
 }

      fail_up:
 FUNC_5(&VAR_4->adapter_mutex);
 return VAR_6;
}
