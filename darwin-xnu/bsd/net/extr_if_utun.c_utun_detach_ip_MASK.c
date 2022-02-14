
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_ifreq {int ifr_name; } ;
struct ifreq {int ifr_name; } ;
typedef int socket_t ;
typedef scalar_t__ protocol_family_t ;
typedef int ifr6 ;
typedef int ifr ;
typedef int ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct in6_ifreq*,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,char*,int ) ;
 int FUNC_4 (int ,int ,struct in6_ifreq*) ;

__attribute__((used)) static errno_t
FUNC_5(ifnet_t VAR_5,
      protocol_family_t VAR_6,
      socket_t VAR_7)
{
 errno_t VAR_8 = VAR_0;


 if (VAR_6 == VAR_1) {
  struct ifreq VAR_9;

  FUNC_0(&VAR_9, sizeof(VAR_9));
  FUNC_3(VAR_9.ifr_name, sizeof(VAR_9.ifr_name), "%s%d",
     FUNC_1(VAR_5), FUNC_2(VAR_5));

  VAR_8 = FUNC_4(VAR_7, VAR_3, &VAR_9);
 } else if (VAR_6 == VAR_2) {
  struct in6_ifreq VAR_10;

  FUNC_0(&VAR_10, sizeof(VAR_10));
  FUNC_3(VAR_10, sizeof(VAR_10), "%s%d",
     FUNC_1(VAR_5), FUNC_2(VAR_5));

  VAR_8 = FUNC_4(VAR_7, VAR_4, &VAR_10);
 }

 return VAR_8;
}
