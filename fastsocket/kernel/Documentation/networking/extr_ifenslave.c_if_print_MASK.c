
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {char* ifr_name; } ;
struct ifconf {int ifc_len; char* ifc_buf; struct ifreq* ifc_req; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,struct ifconf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(char *VAR_6)
{
 char VAR_7[1024];
 struct ifconf VAR_8;
 struct ifreq *VAR_9;
 int VAR_10;

 if (VAR_6 == (char *)((void*)0)) {
  VAR_8.ifc_len = sizeof(VAR_7);
  VAR_8.ifc_buf = VAR_7;
  if (FUNC_2(VAR_4, VAR_1, &VAR_8) < 0) {
   FUNC_3("SIOCGIFCONF failed");
   return;
  }

  VAR_9 = VAR_8.ifc_req;
  for (VAR_10 = VAR_8.ifc_len / sizeof(struct ifreq); --VAR_10 >= 0; VAR_9++) {
   if (FUNC_1(VAR_9->ifr_name) < 0) {
    FUNC_0(VAR_5,
     "%s: unknown interface.\n",
     VAR_9->ifr_name);
    continue;
   }

   if (((VAR_2 & VAR_0) == 0) && !VAR_3) continue;

  }
 } else {
  if (FUNC_1(VAR_6) < 0) {
   FUNC_0(VAR_5,
    "%s: unknown interface.\n", VAR_6);
  }
 }
}
