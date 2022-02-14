
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct sas_phy_linkrates {int maximum_linkrate; int minimum_linkrate; } ;
struct sas_phy {void* phy_reset_problem_count; void* loss_of_dword_sync_count; void* running_disparity_error_count; void* invalid_dword_count; } ;
struct pm8001_hba_info {int lock; int chip_id; TYPE_3__* io_mem; TYPE_2__* phy; } ;
struct asd_sas_phy {int id; struct sas_phy* phy; TYPE_1__* ha; } ;
typedef enum phy_func { ____Placeholder_phy_func } phy_func ;
struct TYPE_8__ {int (* phy_stop_req ) (struct pm8001_hba_info*,int) ;int (* phy_ctl_req ) (struct pm8001_hba_info*,int,int ) ;int (* phy_start_req ) (struct pm8001_hba_info*,int) ;} ;
struct TYPE_7__ {scalar_t__ memvirtaddr; } ;
struct TYPE_6__ {int phy_state; int maximum_linkrate; int minimum_linkrate; int * enable_completion; } ;
struct TYPE_5__ {struct pm8001_hba_info* lldd_ha; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pm8001_hba_info*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct pm8001_hba_info*,int) ;
 int FUNC_6 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_7 (struct pm8001_hba_info*,int) ;
 int FUNC_8 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_9 (struct pm8001_hba_info*,int) ;
 int FUNC_10 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_11 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_12 (struct pm8001_hba_info*,int) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct asd_sas_phy *VAR_7, enum phy_func VAR_8,
 void *VAR_9)
{
 int VAR_10 = 0, VAR_11 = VAR_7->id;
 struct pm8001_hba_info *VAR_12 = ((void*)0);
 struct sas_phy_linkrates *VAR_13;
 FUNC_0(VAR_6);
 unsigned long VAR_14;
 VAR_12 = VAR_7->ha->lldd_ha;
 VAR_12->phy[VAR_11].enable_completion = &VAR_6;
 switch (VAR_8) {
 case 128:
  VAR_13 = VAR_9;
  if (VAR_13->minimum_linkrate) {
   VAR_12->phy[VAR_11].minimum_linkrate =
    VAR_13->minimum_linkrate;
  }
  if (VAR_13->maximum_linkrate) {
   VAR_12->phy[VAR_11].maximum_linkrate =
    VAR_13->maximum_linkrate;
  }
  if (VAR_12->phy[VAR_11].phy_state == 0) {
   VAR_4->phy_start_req(VAR_12, VAR_11);
   FUNC_13(&VAR_6);
  }
  VAR_4->phy_ctl_req(VAR_12, VAR_11,
           VAR_3);
  break;
 case 131:
  if (VAR_12->phy[VAR_11].phy_state == 0) {
   VAR_4->phy_start_req(VAR_12, VAR_11);
   FUNC_13(&VAR_6);
  }
  VAR_4->phy_ctl_req(VAR_12, VAR_11,
           VAR_2);
  break;
 case 130:
  if (VAR_12->phy[VAR_11].phy_state == 0) {
   VAR_4->phy_start_req(VAR_12, VAR_11);
   FUNC_13(&VAR_6);
  }
  VAR_4->phy_ctl_req(VAR_12, VAR_11,
           VAR_3);
  break;
 case 129:
  VAR_4->phy_ctl_req(VAR_12, VAR_11,
           VAR_3);
  break;
 case 133:
  VAR_4->phy_stop_req(VAR_12, VAR_11);
  break;
 case 132:
  FUNC_3(&VAR_12->lock, VAR_14);
  if (VAR_12->chip_id == VAR_5) {
   if (-1 == FUNC_2(VAR_12,
     (VAR_11 < 4) ? 0x30000 : 0x40000)) {
    FUNC_4(&VAR_12->lock, VAR_14);
    return -VAR_0;
   }
  }
  {
   struct sas_phy *VAR_15 = VAR_7->phy;
   uint32_t *VAR_16 = (uint32_t *)(((char *)
    VAR_12->io_mem[2].memvirtaddr)
    + 0x1034 + (0x4000 * (VAR_11 & 3)));

   VAR_15->invalid_dword_count = VAR_16[0];
   VAR_15->running_disparity_error_count = VAR_16[1];
   VAR_15->loss_of_dword_sync_count = VAR_16[3];
   VAR_15->phy_reset_problem_count = VAR_16[4];
  }
  if (VAR_12->chip_id == VAR_5)
   FUNC_2(VAR_12, 0);
  FUNC_4(&VAR_12->lock, VAR_14);
  return 0;
 default:
  VAR_10 = -VAR_1;
 }
 FUNC_1(300);
 return VAR_10;
}
