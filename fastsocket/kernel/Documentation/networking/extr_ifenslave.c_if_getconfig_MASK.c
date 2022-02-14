
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_4__ {int sa_family; scalar_t__ sa_data; } ;
struct TYPE_3__ {int* sa_data; } ;
struct ifreq {int ifr_flags; int ifr_metric; int ifr_mtu; struct sockaddr ifr_netmask; int ifr_name; struct sockaddr ifr_broadaddr; struct sockaddr ifr_dstaddr; TYPE_2__ ifr_hwaddr; TYPE_1__ ifr_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (struct sockaddr*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_10)
{
 struct ifreq VAR_11;
 int VAR_12, VAR_13;
 struct sockaddr VAR_14, VAR_15, VAR_16;
 unsigned char *VAR_17;

 FUNC_3(VAR_11.ifr_name, VAR_10);
 if (FUNC_0(VAR_9, VAR_3, &VAR_11) < 0)
  return -1;
 VAR_8 = VAR_11.ifr_flags;
 FUNC_2("The result of SIOCGIFFLAGS on %s is %x.\n",
        VAR_10, VAR_11.ifr_flags);

 FUNC_3(VAR_11.ifr_name, VAR_10);
 if (FUNC_0(VAR_9, VAR_0, &VAR_11) < 0)
  return -1;
 FUNC_2("The result of SIOCGIFADDR is %2.2x.%2.2x.%2.2x.%2.2x.\n",
        VAR_11.ifr_addr.sa_data[0], VAR_11.ifr_addr.sa_data[1],
        VAR_11.ifr_addr.sa_data[2], VAR_11.ifr_addr.sa_data[3]);

 FUNC_3(VAR_11.ifr_name, VAR_10);
 if (FUNC_0(VAR_9, VAR_4, &VAR_11) < 0)
  return -1;


 VAR_17 = (unsigned char *)VAR_11.ifr_hwaddr.sa_data;
 FUNC_2("The result of SIOCGIFHWADDR is type %d  "
        "%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x.\n",
        VAR_11.ifr_hwaddr.sa_family, VAR_17[0], VAR_17[1],
        VAR_17[2], VAR_17[3], VAR_17[4], VAR_17[5]);

 FUNC_3(VAR_11.ifr_name, VAR_10);
 if (FUNC_0(VAR_9, VAR_5, &VAR_11) < 0) {
  VAR_12 = 0;
 } else
  VAR_12 = VAR_11.ifr_metric;

 FUNC_3(VAR_11.ifr_name, VAR_10);
 if (FUNC_0(VAR_9, VAR_6, &VAR_11) < 0)
  VAR_13 = 0;
 else
  VAR_13 = VAR_11.ifr_mtu;

 FUNC_3(VAR_11.ifr_name, VAR_10);
 if (FUNC_0(VAR_9, VAR_2, &VAR_11) < 0) {
  FUNC_1(&VAR_14, 0, sizeof(struct sockaddr));
 } else
  VAR_14 = VAR_11.ifr_dstaddr;

 FUNC_3(VAR_11.ifr_name, VAR_10);
 if (FUNC_0(VAR_9, VAR_1, &VAR_11) < 0) {
  FUNC_1(&VAR_15, 0, sizeof(struct sockaddr));
 } else
  VAR_15 = VAR_11.ifr_broadaddr;

 FUNC_3(VAR_11.ifr_name, VAR_10);
 if (FUNC_0(VAR_9, VAR_7, &VAR_11) < 0) {
  FUNC_1(&VAR_16, 0, sizeof(struct sockaddr));
 } else
  VAR_16 = VAR_11.ifr_netmask;

 return 0;
}
