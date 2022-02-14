
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_mtu; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct ifreq*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_5, int VAR_6)
{
 struct ifreq VAR_7;
 int VAR_8 = 0;

 VAR_7.ifr_mtu = VAR_6;
 FUNC_2(VAR_7.ifr_name, VAR_5, VAR_0);

 VAR_8 = FUNC_0(VAR_4, VAR_1, &VAR_7);
 if (VAR_8 < 0) {
  VAR_3 = VAR_2;
  FUNC_3("Slave '%s': Error: SIOCSIFMTU failed: %s\n",
   VAR_5, FUNC_1(VAR_3));
 } else {
  FUNC_3("Slave '%s': MTU set to %d.\n", VAR_5, VAR_6);
 }

 return VAR_8;
}
