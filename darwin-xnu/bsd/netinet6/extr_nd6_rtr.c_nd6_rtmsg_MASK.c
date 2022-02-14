
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtentry {int rt_flags; TYPE_2__* rt_ifa; int rt_gateway; struct ifnet* rt_ifp; } ;
struct rt_addrinfo {int * rti_info; } ;
struct ifnet {TYPE_1__* if_lladdr; } ;
typedef int info ;
typedef int caddr_t ;
struct TYPE_4__ {int ifa_addr; } ;
struct TYPE_3__ {int ifa_addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (int,struct rt_addrinfo*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_5, struct rtentry *VAR_6)
{
 struct rt_addrinfo VAR_7;
 struct ifnet *VAR_8 = VAR_6->rt_ifp;

 FUNC_0(VAR_6);

 FUNC_1((caddr_t)&VAR_7, sizeof (VAR_7));

 VAR_7.rti_info[VAR_0] = FUNC_2(VAR_6);
 VAR_7.rti_info[VAR_1] = VAR_6->rt_gateway;
 VAR_7.rti_info[VAR_4] = FUNC_3(VAR_6);




 VAR_7.rti_info[VAR_3] = VAR_8->if_lladdr->ifa_addr;
 VAR_7.rti_info[VAR_2] = VAR_6->rt_ifa->ifa_addr;

 FUNC_4(VAR_5, &VAR_7, VAR_6->rt_flags, 0);
}
