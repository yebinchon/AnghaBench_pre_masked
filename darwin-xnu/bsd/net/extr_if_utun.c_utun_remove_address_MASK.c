
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct in6_ifreq {struct sockaddr ifr_addr; int ifr_name; } ;
struct ifreq {struct sockaddr ifr_addr; int ifr_name; } ;
typedef int socket_t ;
typedef scalar_t__ protocol_family_t ;
typedef int ifr6 ;
typedef int ifr ;
typedef int ifnet_t ;
typedef int ifaddr_t ;
typedef int errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in6_ifreq*,int) ;
 int FUNC_1 (int ,struct sockaddr*,int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int,char*,char*,int ) ;
 int FUNC_6 (int ,int ,struct in6_ifreq*) ;

__attribute__((used)) static void
FUNC_7(ifnet_t VAR_4,
     protocol_family_t VAR_5,
     ifaddr_t VAR_6,
     socket_t VAR_7)
{
 errno_t VAR_8 = 0;


 if (VAR_5 == VAR_0) {
  struct ifreq VAR_9;

  FUNC_0(&VAR_9, sizeof(VAR_9));
  FUNC_5(VAR_9.ifr_name, sizeof(VAR_9.ifr_name), "%s%d",
     FUNC_2(VAR_4), FUNC_3(VAR_4));
  VAR_8 = FUNC_1(VAR_6, &VAR_9.ifr_addr, sizeof(VAR_9.ifr_addr));
  if (VAR_8 != 0) {
   FUNC_4("utun_remove_address - ifaddr_address failed: %d", VAR_8);
  } else {
   VAR_8 = FUNC_6(VAR_7, VAR_2, &VAR_9);
   if (VAR_8 != 0) {
    FUNC_4("utun_remove_address - SIOCDIFADDR failed: %d", VAR_8);
   }
  }
 } else if (VAR_5 == VAR_1) {
  struct in6_ifreq VAR_10;

  FUNC_0(&VAR_10, sizeof(VAR_10));
  FUNC_5(VAR_10, sizeof(VAR_10), "%s%d",
     FUNC_2(VAR_4), FUNC_3(VAR_4));
  VAR_8 = FUNC_1(VAR_6, (struct sockaddr*)&VAR_10,
        sizeof(VAR_10));
  if (VAR_8 != 0) {
   FUNC_4("utun_remove_address - ifaddr_address failed (v6): %d",
       VAR_8);
  } else {
   VAR_8 = FUNC_6(VAR_7, VAR_3, &VAR_10);
   if (VAR_8 != 0) {
    FUNC_4("utun_remove_address - SIOCDIFADDR_IN6 failed: %d",
        VAR_8);
   }
  }
 }
}
