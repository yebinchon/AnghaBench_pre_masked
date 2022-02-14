
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct ifnet {int dummy; } ;
struct ifaddr {struct sockaddr* ifa_addr; int ifa_flags; int ifa_rtrequest; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (struct ifaddr*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ifnet*,int ,int *,struct sockaddr*,int *,struct sockaddr*,int ) ;

void
FUNC_3(struct ifnet *VAR_3, struct ifaddr *VAR_4)
{
 struct sockaddr *VAR_5;

 FUNC_0(VAR_4);
 VAR_4->ifa_rtrequest = VAR_2;
 VAR_4->ifa_flags |= VAR_1;
 VAR_5 = VAR_4->ifa_addr;
 FUNC_1(VAR_4);
 FUNC_2(VAR_3, VAR_0, ((void*)0), VAR_5, ((void*)0), VAR_5, 0);
}
