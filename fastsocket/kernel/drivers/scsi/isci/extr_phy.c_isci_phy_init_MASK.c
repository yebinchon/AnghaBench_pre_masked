
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sci_oem_params {TYPE_2__* phys; } ;
struct TYPE_6__ {int enabled; int id; int linkrate; int oob_mode; int role; int type; scalar_t__ tproto; int iproto; int class; struct isci_phy* lldd_phy; int * ha; int * frame_rcvd; int * sas_addr; } ;
struct isci_phy {int frame_rcvd; TYPE_3__ sas_phy; int * sas_addr; } ;
struct isci_host {int sas_ha; struct sci_oem_params oem_parameters; } ;
typedef int sas_addr ;
typedef int __be64 ;
struct TYPE_4__ {int high; int low; } ;
struct TYPE_5__ {TYPE_1__ sas_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(struct isci_phy *VAR_6, struct isci_host *VAR_7, int VAR_8)
{
 struct sci_oem_params *VAR_9 = &VAR_7->oem_parameters;
 u64 VAR_10;
 __be64 VAR_11;

 VAR_10 = VAR_9->phys[VAR_8].sas_address.high;
 VAR_10 <<= 32;
 VAR_10 |= VAR_9->phys[VAR_8].sas_address.low;
 VAR_11 = FUNC_0(VAR_10);
 FUNC_1(VAR_6->sas_addr, &VAR_11, sizeof(VAR_11));

 VAR_6->sas_phy.enabled = 0;
 VAR_6->sas_phy.id = VAR_8;
 VAR_6->sas_phy.sas_addr = &VAR_6->sas_addr[0];
 VAR_6->sas_phy.frame_rcvd = (u8 *)&VAR_6->frame_rcvd;
 VAR_6->sas_phy.ha = &VAR_7->sas_ha;
 VAR_6->sas_phy.lldd_phy = VAR_6;
 VAR_6->sas_phy.enabled = 1;
 VAR_6->sas_phy.class = VAR_3;
 VAR_6->sas_phy.iproto = VAR_5;
 VAR_6->sas_phy.tproto = 0;
 VAR_6->sas_phy.type = VAR_2;
 VAR_6->sas_phy.role = VAR_1;
 VAR_6->sas_phy.oob_mode = VAR_0;
 VAR_6->sas_phy.linkrate = VAR_4;
 FUNC_2(&VAR_6->frame_rcvd, 0, sizeof(VAR_6->frame_rcvd));
}
