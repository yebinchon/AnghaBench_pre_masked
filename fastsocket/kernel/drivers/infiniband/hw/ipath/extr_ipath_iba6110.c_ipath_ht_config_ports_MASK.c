
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ushort ;
struct ipath_devdata {TYPE_1__* ipath_kregs; void* ipath_p0_rcvegrcnt; void* ipath_portcnt; } ;
struct TYPE_2__ {int kr_rcvegrcnt; int kr_portcnt; } ;


 void* FUNC_0 (struct ipath_devdata*,int ) ;

__attribute__((used)) static void FUNC_1(struct ipath_devdata *VAR_0, ushort VAR_1)
{
 VAR_0->ipath_portcnt =
  FUNC_0(VAR_0, VAR_0->ipath_kregs->kr_portcnt);
 VAR_0->ipath_p0_rcvegrcnt =
  FUNC_0(VAR_0, VAR_0->ipath_kregs->kr_rcvegrcnt);
}
