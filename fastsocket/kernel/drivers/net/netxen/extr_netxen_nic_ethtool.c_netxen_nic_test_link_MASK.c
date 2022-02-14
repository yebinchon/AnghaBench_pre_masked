
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pci_func; int revision_id; } ;
struct netxen_adapter {int physical_port; TYPE_1__ ahw; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct netxen_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_4(struct net_device *VAR_4)
{
 struct netxen_adapter *VAR_5 = FUNC_3(VAR_4);
 u32 VAR_6, VAR_7;

 VAR_7 = VAR_5->physical_port;
 if (FUNC_1(VAR_5->ahw.revision_id)) {
  VAR_6 = FUNC_0(VAR_5, VAR_1);
  VAR_6 = FUNC_2(VAR_5->ahw.pci_func, VAR_6);
  return (VAR_6 == VAR_3) ? 0 : 1;
 } else {
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  VAR_6 = (VAR_6 >> VAR_7*8) & 0xff;
  return (VAR_6 == VAR_2) ? 0 : 1;
 }
}
