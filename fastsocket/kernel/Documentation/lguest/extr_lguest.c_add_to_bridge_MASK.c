
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {char* ifr_name; int ifr_ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*,char const*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int,int ,struct ifreq*) ;
 int FUNC_4 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5;
 struct ifreq VAR_6;

 if (!*VAR_4)
  FUNC_1(1, "must specify bridge name");

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  FUNC_1(1, "interface %s does not exist!", VAR_3);

 FUNC_4(VAR_6.ifr_name, VAR_4, VAR_0);
 VAR_6.ifr_name[VAR_0-1] = '\0';
 VAR_6.ifr_ifindex = VAR_5;
 if (FUNC_3(VAR_2, VAR_1, &VAR_6) < 0)
  FUNC_0(1, "can't add %s to bridge %s", VAR_3, VAR_4);
}
