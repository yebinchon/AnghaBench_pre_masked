
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_data; } ;
struct ifreq {int ifr_hwaddr; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (int *,struct sockaddr*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*,unsigned char,...) ;

__attribute__((used)) static int FUNC_5(char *VAR_5, struct sockaddr *VAR_6)
{
 unsigned char *VAR_7 = (unsigned char *)VAR_6->sa_data;
 struct ifreq VAR_8;
 int VAR_9 = 0;

 FUNC_3(VAR_8.ifr_name, VAR_5, VAR_0);
 FUNC_1(&(VAR_8.ifr_hwaddr), VAR_6, sizeof(struct sockaddr));
 VAR_9 = FUNC_0(VAR_4, VAR_1, &VAR_8);
 if (VAR_9 < 0) {
  VAR_3 = VAR_2;
  FUNC_4("Master '%s': Error: SIOCSIFHWADDR failed: %s\n",
   VAR_5, FUNC_2(VAR_3));
  return VAR_9;
 } else {
  FUNC_4("Master '%s': hardware address set to "
   "%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x.\n",
   VAR_5, VAR_7[0], VAR_7[1], VAR_7[2],
   VAR_7[3], VAR_7[4], VAR_7[5]);
 }

 return VAR_9;
}
