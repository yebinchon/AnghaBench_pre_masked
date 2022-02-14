
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipath_portdata {int port_pkeys; } ;
struct ipath_devdata {struct ipath_portdata** ipath_pd; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ipath_devdata *VAR_0, u16 * VAR_1)
{

 struct ipath_portdata *VAR_2 = VAR_0->ipath_pd[0];

 FUNC_0(VAR_1, VAR_2->port_pkeys, sizeof(VAR_2->port_pkeys));

 return 0;
}
