
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct reg_dev_req {int sas_addr; void* firstburstsize_ITNexustimeout; void* dtype_dlr_retry; void* phyid_portid; void* tag; } ;
struct pm8001_hba_info {struct pm8001_ccb_info* ccb_info; struct inbound_queue_table* inbnd_q_tbl; } ;
struct pm8001_device {scalar_t__ dev_type; int attached_phy; struct domain_device* sas_device; } ;
struct pm8001_ccb_info {int ccb_tag; struct pm8001_device* device; } ;
struct inbound_queue_table {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ex_phy; } ;
struct domain_device {scalar_t__ linkrate; int sas_addr; TYPE_3__* port; TYPE_2__ ex_dev; int dev_type; struct domain_device* parent; } ;
typedef int payload ;
struct TYPE_6__ {scalar_t__ linkrate; int id; } ;
struct TYPE_4__ {int phy_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct reg_dev_req*,int ,int) ;
 int FUNC_4 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct reg_dev_req*,int ) ;
 int FUNC_5 (struct pm8001_hba_info*,int*) ;

__attribute__((used)) static int FUNC_6(struct pm8001_hba_info *VAR_6,
 struct pm8001_device *VAR_7, u32 VAR_8)
{
 struct reg_dev_req VAR_9;
 u32 VAR_10;
 u32 VAR_11 = 0x4;
 struct inbound_queue_table *VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15, VAR_16 = 0xdeadbeef;
 struct pm8001_ccb_info *VAR_17;
 u8 VAR_18 = 0x1;
 u16 VAR_19 = 0;
 u16 VAR_20 = 2000;
 struct domain_device *VAR_21 = VAR_7->sas_device;
 struct domain_device *VAR_22 = VAR_21->parent;
 VAR_12 = &VAR_6->inbnd_q_tbl[0];

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_15 = FUNC_5(VAR_6, &VAR_16);
 if (VAR_15)
  return VAR_15;
 VAR_17 = &VAR_6->ccb_info[VAR_16];
 VAR_17->device = VAR_7;
 VAR_17->ccb_tag = VAR_16;
 VAR_9.tag = FUNC_1(VAR_16);
 if (VAR_8 == 1)
  VAR_11 = 0x02;
 else {
  if (VAR_7->dev_type == VAR_5)
   VAR_11 = 0x00;
  else if (VAR_7->dev_type == VAR_3 ||
   VAR_7->dev_type == VAR_2 ||
   VAR_7->dev_type == VAR_4)
   VAR_11 = 0x01;
 }
 if (VAR_22 && FUNC_0(VAR_22->dev_type))
  VAR_14 = VAR_22->ex_dev.ex_phy->phy_id;
 else
  VAR_14 = VAR_7->attached_phy;
 VAR_10 = VAR_0;
 VAR_13 = (VAR_7->sas_device->linkrate < VAR_21->port->linkrate) ?
   VAR_7->sas_device->linkrate : VAR_21->port->linkrate;
 VAR_9.phyid_portid =
  FUNC_1(((VAR_7->sas_device->port->id) & 0x0F) |
  ((VAR_14 & 0x0F) << 4));
 VAR_9.dtype_dlr_retry = FUNC_1((VAR_18 & 0x01) |
  ((VAR_13 & 0x0F) * 0x1000000) |
  ((VAR_11 & 0x03) * 0x10000000));
 VAR_9.firstburstsize_ITNexustimeout =
  FUNC_1(VAR_20 | (VAR_19 * 0x10000));
 FUNC_2(VAR_9.sas_addr, VAR_7->sas_device->sas_addr,
  VAR_1);
 VAR_15 = FUNC_4(VAR_6, VAR_12, VAR_10, &VAR_9, 0);
 return VAR_15;
}
