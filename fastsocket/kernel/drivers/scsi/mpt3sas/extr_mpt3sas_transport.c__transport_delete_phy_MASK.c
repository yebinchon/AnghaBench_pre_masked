
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ sas_address; } ;
struct _sas_port {int port; int num_phys; TYPE_1__ remote_identify; } ;
struct _sas_phy {scalar_t__ phy_belongs_to_port; TYPE_2__* phy; int port_siblings; int phy_id; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,unsigned long long,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1,
 struct _sas_port *VAR_2, struct _sas_phy *VAR_3)
{
 u64 VAR_4 = VAR_2->remote_identify.sas_address;

 FUNC_0(VAR_0, &VAR_3->phy->dev,
     "remove: sas_addr(0x%016llx), phy(%d)\n",
     (unsigned long long) VAR_4, VAR_3->phy_id);

 FUNC_1(&VAR_3->port_siblings);
 VAR_2->num_phys--;
 FUNC_2(VAR_2->port, VAR_3->phy);
 VAR_3->phy_belongs_to_port = 0;
}
