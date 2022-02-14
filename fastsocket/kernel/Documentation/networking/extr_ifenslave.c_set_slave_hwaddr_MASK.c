
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_data; } ;
struct ifreq {int ifr_hwaddr; int ifr_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (int *,struct sockaddr*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(char *VAR_8, struct sockaddr *VAR_9)
{
 unsigned char *VAR_10 = (unsigned char *)VAR_9->sa_data;
 struct ifreq VAR_11;
 int VAR_12 = 0;

 FUNC_3(VAR_11.ifr_name, VAR_8, VAR_3);
 FUNC_1(&(VAR_11.ifr_hwaddr), VAR_9, sizeof(struct sockaddr));
 VAR_12 = FUNC_0(VAR_7, VAR_4, &VAR_11);
 if (VAR_12 < 0) {
  VAR_6 = VAR_5;

  FUNC_4("Slave '%s': Error: SIOCSIFHWADDR failed: %s\n",
   VAR_8, FUNC_2(VAR_6));

  if (VAR_6 == VAR_0) {
   FUNC_4("  The device is busy: it must be idle "
    "before running this command.\n");
  } else if (VAR_6 == VAR_2) {
   FUNC_4("  The device does not support setting "
    "the MAC address.\n"
    "  Your kernel likely does not support slave "
    "devices.\n");
  } else if (VAR_6 == VAR_1) {
   FUNC_4("  The device's address type does not match "
    "the master's address type.\n");
  }
  return VAR_12;
 } else {
  FUNC_4("Slave '%s': hardware address set to "
   "%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x.\n",
   VAR_8, VAR_10[0], VAR_10[1], VAR_10[2],
   VAR_10[3], VAR_10[4], VAR_10[5]);
 }

 return VAR_12;
}
