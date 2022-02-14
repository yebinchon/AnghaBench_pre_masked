
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_data; int sa_family; } ;
struct ifreq {TYPE_1__ ifr_addr; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int,struct ifreq*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*,char*,unsigned char,...) ;

__attribute__((used)) static int FUNC_5(char *VAR_12, char *VAR_13)
{
 struct ifreq VAR_14;
 int VAR_15;
 unsigned char *VAR_16;
 int VAR_17;
 struct {
  char *req_name;
  char *desc;
  int g_ioctl;
  int s_ioctl;
 } VAR_18[] = {
  {"IFADDR", "addr", VAR_2, VAR_6},
  {"DSTADDR", "destination addr", VAR_4, VAR_8},
  {"BRDADDR", "broadcast addr", VAR_3, VAR_7},
  {"NETMASK", "netmask", VAR_5, VAR_9},
  {((void*)0), ((void*)0), 0, 0},
 };

 for (VAR_17 = 0; VAR_18[VAR_17].req_name; VAR_17++) {
  FUNC_3(VAR_14.ifr_name, VAR_12, VAR_1);
  VAR_15 = FUNC_0(VAR_11, VAR_18[VAR_17].g_ioctl, &VAR_14);
  if (VAR_15 < 0) {
   int VAR_19 = VAR_10;

   FUNC_4("Interface '%s': Error: SIOCG%s failed: %s\n",
    VAR_12, VAR_18[VAR_17].req_name,
    FUNC_2(VAR_19));

   VAR_14.ifr_addr.sa_family = VAR_0;
   FUNC_1(VAR_14.ifr_addr.sa_data, 0,
          sizeof(VAR_14.ifr_addr.sa_data));
  }

  FUNC_3(VAR_14.ifr_name, VAR_13, VAR_1);
  VAR_15 = FUNC_0(VAR_11, VAR_18[VAR_17].s_ioctl, &VAR_14);
  if (VAR_15 < 0) {
   int VAR_20 = VAR_10;

   FUNC_4("Interface '%s': Error: SIOCS%s failed: %s\n",
    VAR_13, VAR_18[VAR_17].req_name,
    FUNC_2(VAR_20));

  }

  VAR_16 = (unsigned char *)VAR_14.ifr_addr.sa_data;
  FUNC_4("Interface '%s': set IP %s to %d.%d.%d.%d\n",
   VAR_13, VAR_18[VAR_17].desc,
   VAR_16[0], VAR_16[1], VAR_16[2], VAR_16[3]);
 }

 return 0;
}
