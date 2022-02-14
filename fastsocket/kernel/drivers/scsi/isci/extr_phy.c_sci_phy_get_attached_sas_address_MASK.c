
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sci_sas_address {int dummy; } ;
struct sas_identify_frame {int sas_addr; } ;
struct TYPE_2__ {struct sas_identify_frame iaf; } ;
struct isci_phy {TYPE_1__ frame_rcvd; } ;


 int VAR_0 ;
 int FUNC_0 (struct sci_sas_address*,int ,int ) ;

void FUNC_1(struct isci_phy *VAR_1, struct sci_sas_address *VAR_2)
{
 struct sas_identify_frame *VAR_3;

 VAR_3 = &VAR_1->frame_rcvd.iaf;
 FUNC_0(VAR_2, VAR_3->sas_addr, VAR_0);
}
