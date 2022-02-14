
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct sas_identify {int dummy; } ;
struct TYPE_5__ {scalar_t__ sas_address; } ;
struct _sas_phy {TYPE_2__ remote_identify; TYPE_1__* phy; int attached_handle; } ;
struct _sas_node {struct _sas_phy* phy; } ;
struct MPT2SAS_ADAPTER {int logging_level; int sas_node_lock; scalar_t__ pci_error_recovery; scalar_t__ shost_recovery; } ;
struct TYPE_4__ {int dev; int negotiated_linkrate; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT2SAS_ADAPTER*,struct _sas_node*,struct _sas_phy*,scalar_t__) ;
 int FUNC_1 (size_t) ;
 struct _sas_node* FUNC_2 (struct MPT2SAS_ADAPTER*,scalar_t__) ;
 int FUNC_3 (struct MPT2SAS_ADAPTER*,int ,TYPE_2__*) ;
 int FUNC_4 (int ,int *,char*,unsigned long long,size_t,size_t,int ,unsigned long long) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void
FUNC_8(struct MPT2SAS_ADAPTER *VAR_3,
     u64 VAR_4, u16 VAR_5, u8 VAR_6, u8 VAR_7)
{
 unsigned long VAR_8;
 struct _sas_node *VAR_9;
 struct _sas_phy *VAR_10;

 if (VAR_3->shost_recovery || VAR_3->pci_error_recovery)
  return;

 FUNC_6(&VAR_3->sas_node_lock, VAR_8);
 VAR_9 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_9) {
  FUNC_7(&VAR_3->sas_node_lock, VAR_8);
  return;
 }

 VAR_10 = &VAR_9->phy[VAR_6];
 VAR_10->attached_handle = VAR_5;
 FUNC_7(&VAR_3->sas_node_lock, VAR_8);
 if (VAR_5 && (VAR_7 >= VAR_1)) {
  FUNC_3(VAR_3, VAR_5,
      &VAR_10->remote_identify);
  FUNC_0(VAR_3, VAR_9,
      VAR_10, VAR_10->remote_identify.sas_address);
 } else
  FUNC_5(&VAR_10->remote_identify, 0 , sizeof(struct
      sas_identify));

 if (VAR_10->phy)
  VAR_10->phy->negotiated_linkrate =
      FUNC_1(VAR_7);

 if ((VAR_3->logging_level & VAR_2))
  FUNC_4(VAR_0, &VAR_10->phy->dev,
      "refresh: parent sas_addr(0x%016llx),\n"
      "\tlink_rate(0x%02x), phy(%d)\n"
      "\tattached_handle(0x%04x), sas_addr(0x%016llx)\n",
      (unsigned long long)VAR_4,
      VAR_7, VAR_6, VAR_5, (unsigned long long)
      VAR_10->remote_identify.sas_address);
}
