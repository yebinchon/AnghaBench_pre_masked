
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct _sas_node {int num_phys; TYPE_2__* phy; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_3__ {scalar_t__ sas_address; } ;
struct TYPE_4__ {int phy_belongs_to_port; TYPE_1__ remote_identify; } ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct _sas_node*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(struct MPT3SAS_ADAPTER *VAR_0, struct _sas_node *VAR_1,
 u64 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_phys; VAR_3++) {
  if (VAR_1->phy[VAR_3].remote_identify.sas_address != VAR_2)
   continue;
  if (VAR_1->phy[VAR_3].phy_belongs_to_port == 1)
   FUNC_0(VAR_0, VAR_1,
       &VAR_1->phy[VAR_3]);
 }
}
