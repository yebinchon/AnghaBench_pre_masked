
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ll {scalar_t__ sll_ifindex; int sll_family; } ;
struct sockaddr {int dummy; } ;
typedef int ll ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (struct sockaddr_ll*,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_5 ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_6)
{
 struct sockaddr_ll VAR_7;
 int VAR_8;

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.sll_family = VAR_0;
 VAR_7.sll_ifindex = FUNC_4(VAR_6);
 if (VAR_7.sll_ifindex == 0) {
  FUNC_2(VAR_5, "Monitor interface '%s' does not exist\n", VAR_6);
  return -1;
 }

 VAR_8 = FUNC_6(VAR_2, VAR_3, FUNC_3(VAR_1));
 if (VAR_8 < 0) {
  FUNC_2(VAR_5, "socket(PF_PACKET,SOCK_RAW): %s\n", FUNC_7(VAR_4));
  return -1;
 }

 if (FUNC_0(VAR_8, (struct sockaddr *) &VAR_7, sizeof(VAR_7)) < 0) {
  FUNC_2(VAR_5, "bind(PACKET): %s\n", FUNC_7(VAR_4));
  FUNC_1(VAR_8);
  return -1;
 }

 return VAR_8;
}
