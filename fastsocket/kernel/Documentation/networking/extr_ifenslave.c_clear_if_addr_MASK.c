
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_family; } ;
struct ifreq {TYPE_1__ ifr_addr; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int FUNC_5(char *VAR_6)
{
 struct ifreq VAR_7;
 int VAR_8 = 0;

 FUNC_3(VAR_7.ifr_name, VAR_6, VAR_1);
 VAR_7.ifr_addr.sa_family = VAR_0;
 FUNC_1(VAR_7.ifr_addr.sa_data, 0, sizeof(VAR_7.ifr_addr.sa_data));

 VAR_8 = FUNC_0(VAR_5, VAR_2, &VAR_7);
 if (VAR_8 < 0) {
  VAR_4 = VAR_3;
  FUNC_4("Interface '%s': Error: SIOCSIFADDR failed: %s\n",
   VAR_6, FUNC_2(VAR_4));
 } else {
  FUNC_4("Interface '%s': address cleared\n", VAR_6);
 }

 return VAR_8;
}
