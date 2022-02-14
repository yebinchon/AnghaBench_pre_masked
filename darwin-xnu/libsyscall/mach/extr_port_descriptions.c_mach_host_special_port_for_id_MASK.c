
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hsp_ids ;
 char const* FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const**,int) ;

int
FUNC_2(const char *VAR_0)
{
 static const char *VAR_1[] = {

  [137] = "HOST_PORT",
  [136] = "HOST_PRIV_PORT",
  [143] = "HOST_IO_MASTER_PORT",
  [145] = "HOST_DYNAMIC_PAGER_PORT",
  [150] = "HOST_AUDIT_CONTROL_PORT",
  [129] = "HOST_USER_NOTIFICATION_PORT",
  [149] = "HOST_AUTOMOUNTD_PORT",
  [139] = "HOST_LOCKD_PORT",
  [141] = "HOST_KTRACE_BACKGROUND_PORT",
  [134] = "HOST_SEATBELT_PORT",
  [142] = "HOST_KEXTD_PORT",
  [140] = "HOST_LAUNCHCTL_PORT",
  [130] = "HOST_UNFREED_PORT",
  [152] = "HOST_AMFID_PORT",
  [144] = "HOST_GSSD_PORT",
  [131] = "HOST_TELEMETRY_PORT",
  [151] = "HOST_ATM_NOTIFICATION_PORT",
  [147] = "HOST_COALITION_PORT",
  [133] = "HOST_SYSDIAGNOSE_PORT",
  [128] = "HOST_XPC_EXCEPTION_PORT",
  [146] = "HOST_CONTAINERD_PORT",
  [138] = "HOST_NODE_PORT",
  [135] = "HOST_RESOURCE_NOTIFY_PORT",
  [148] = "HOST_CLOSURED_PORT",
  [132] = "HOST_SYSPOLICYD_PORT",
 };

 return FUNC_1(VAR_0, VAR_1,
   sizeof(VAR_1) / sizeof(VAR_1[0]));
}
