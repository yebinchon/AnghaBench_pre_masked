
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {short ifr_flags; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct ifreq*) ;
 int VAR_3 ;
 int VAR_4 ;
 short FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,char*,short) ;

__attribute__((used)) static int FUNC_4(char *VAR_5, short VAR_6)
{
 struct ifreq VAR_7;
 int VAR_8 = 0;

 VAR_7.ifr_flags = VAR_6;
 FUNC_2(VAR_7.ifr_name, VAR_5, VAR_0);

 VAR_8 = FUNC_0(VAR_4, VAR_1, &VAR_7);
 if (VAR_8 < 0) {
  VAR_3 = VAR_2;
  FUNC_3("Interface '%s': Error: SIOCSIFFLAGS failed: %s\n",
   VAR_5, FUNC_1(VAR_3));
 } else {
  FUNC_3("Interface '%s': flags set to %04X.\n", VAR_5, VAR_6);
 }

 return VAR_8;
}
