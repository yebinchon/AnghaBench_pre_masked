
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u_long ;
struct TYPE_12__ {int sa_data; } ;
struct ifreq {TYPE_1__ ifr_addr; } ;
struct ifaddr {int dummy; } ;
struct ether_addr {int dummy; } ;
typedef int protocol_family_t ;
typedef TYPE_2__* ifnet_t ;
typedef int errno_t ;
struct TYPE_13__ {int if_unit; int if_softc; } ;
struct TYPE_11__ {int sin_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_10__* FUNC_0 (struct ifaddr*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;



 int VAR_5 ;
 int FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,struct ifaddr*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,struct ether_addr*) ;

__attribute__((used)) static errno_t
FUNC_10(ifnet_t VAR_6, protocol_family_t VAR_7,
    u_long VAR_8, void *VAR_9)
{
#pragma unused(protocol_family)
 int VAR_10 = 0;

 switch (VAR_8) {
 case 128:
 case 130: {





  struct ifaddr *VAR_11 = VAR_9;

  if (!(FUNC_3(VAR_6) & VAR_3)) {
   FUNC_6(VAR_6, VAR_4, VAR_4);
   FUNC_5(VAR_6, 0, VAR_5, ((void*)0));
  }

  if (FUNC_2(VAR_11) != VAR_0)
   break;

  FUNC_7(VAR_6, VAR_11);

  if (VAR_8 != 128)
   break;
  if ((FUNC_8() != 0 &&
      FUNC_8() == VAR_6->if_softc) ||
      (FUNC_8() == 0 && VAR_6->if_unit == 0))
   FUNC_9(&(FUNC_0(VAR_11)->sin_addr),
       (struct ether_addr *)FUNC_1(VAR_6));
  break;
 }

 case 129: {
  struct ifreq *VAR_12 = VAR_9;
  FUNC_4(VAR_6, VAR_12->ifr_addr.sa_data,
      VAR_2);
  break;
 }

 default:
  VAR_10 = VAR_1;
  break;
 }

 return (VAR_10);
}
