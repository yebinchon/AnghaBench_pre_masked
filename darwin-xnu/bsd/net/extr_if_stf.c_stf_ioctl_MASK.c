
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_4__ {int sa_family; } ;
struct ifreq {TYPE_2__ ifr_addr; } ;
struct ifaddr {int ifa_rtrequest; TYPE_1__* ifa_addr; } ;
typedef int ifnet_t ;
typedef int errno_t ;
struct TYPE_3__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int FUNC_2 (struct ifaddr*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;



 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;
 int VAR_5 ;

__attribute__((used)) static errno_t
FUNC_6(
 ifnet_t VAR_6,
 u_long VAR_7,
 void *VAR_8)
{
 struct ifaddr *VAR_9;
 struct ifreq *VAR_10;
 struct sockaddr_in6 *VAR_11;
 int VAR_12;

 VAR_12 = 0;
 switch (VAR_7) {
 case 128:
  VAR_9 = (struct ifaddr *)VAR_8;
  if (VAR_9 == ((void*)0)) {
   VAR_12 = VAR_1;
   break;
  }
  FUNC_0(VAR_9);
  if (VAR_9->ifa_addr->sa_family != VAR_0) {
   FUNC_2(VAR_9);
   VAR_12 = VAR_1;
   break;
  }
  VAR_11 = (struct sockaddr_in6 *)(void *)VAR_9->ifa_addr;
  if (FUNC_3(&VAR_11->sin6_addr)) {
                        if ( !(FUNC_4( VAR_6 ) & VAR_4) ) {

    VAR_9->ifa_rtrequest = VAR_5;
    FUNC_2(VAR_9);
    FUNC_5(VAR_6, VAR_4, VAR_4);
   } else {
    FUNC_2(VAR_9);
   }
  } else {
   FUNC_2(VAR_9);
   VAR_12 = VAR_2;
  }
  FUNC_1(VAR_9);
  break;

 case 130:
 case 129:
  VAR_10 = (struct ifreq *)VAR_8;
  if (VAR_10 && VAR_10->ifr_addr.sa_family == VAR_0)
   ;
  else
   VAR_12 = VAR_1;
  break;

 default:
  VAR_12 = VAR_3;
  break;
 }

 return VAR_12;
}
