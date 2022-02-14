
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct ifaddr {struct sockaddr* ifa_addr; } ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (struct sockaddr*) ;
 int FUNC_4 (struct sockaddr*) ;
 int VAR_3 ;

boolean_t
FUNC_5(struct sockaddr *VAR_4, struct ifaddr *VAR_5)
{
 boolean_t VAR_6 = VAR_2;

 if (VAR_5 == ((void*)0) || VAR_5->ifa_addr == ((void*)0))
  return (VAR_6);

 FUNC_0(VAR_5);

 if (VAR_4->sa_family == VAR_5->ifa_addr->sa_family &&
     ((VAR_4->sa_family == VAR_0 &&
     FUNC_3(VAR_4)->sin_addr.s_addr ==
     FUNC_3(VAR_5->ifa_addr)->sin_addr.s_addr) ||
     (VAR_4->sa_family == VAR_1 &&
     FUNC_2(FUNC_4(VAR_4), FUNC_4(VAR_5->ifa_addr)))))
  VAR_6 = VAR_3;

 FUNC_1(VAR_5);

 return (VAR_6);
}
