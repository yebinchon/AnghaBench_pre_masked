
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int revision_id; } ;
struct netxen_adapter {TYPE_2__ ahw; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int vendor; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct netxen_adapter*,int ) ;
 int FUNC_2 (struct netxen_adapter*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct netxen_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct netxen_adapter *VAR_2 = FUNC_4(VAR_1);
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2, FUNC_0(0));
 if ((VAR_3 & 0xffff) != VAR_2->pdev->vendor)
  return 1;

 if (FUNC_3(VAR_2->ahw.revision_id))
  return 0;

 VAR_4 = (u32)0xa5a5a5a5;

 FUNC_2(VAR_2, VAR_0, VAR_4);
 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4 != VAR_3)
  return 1;

 return 0;
}
