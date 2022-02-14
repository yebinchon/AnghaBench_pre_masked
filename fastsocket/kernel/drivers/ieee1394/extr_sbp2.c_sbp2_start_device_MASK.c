
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sbp2_reconnect_orb {int dummy; } ;
struct sbp2_query_logins_response {int dummy; } ;
struct sbp2_query_logins_orb {int dummy; } ;
struct sbp2_lu {int workarounds; TYPE_3__* ud; int shost; void* login_orb; int login_orb_dma; void* logout_orb; int logout_orb_dma; void* reconnect_orb; int reconnect_orb_dma; void* query_logins_response; int query_logins_response_dma; void* query_logins_orb; int query_logins_orb_dma; void* login_response; int login_response_dma; struct sbp2_fwhost_info* hi; } ;
struct sbp2_logout_orb {int dummy; } ;
struct sbp2_login_response {int dummy; } ;
struct sbp2_login_orb {int dummy; } ;
struct sbp2_fwhost_info {TYPE_2__* host; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,int,int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sbp2_lu*,int) ;
 scalar_t__ FUNC_4 (struct sbp2_lu*) ;
 int FUNC_5 (struct sbp2_lu*) ;
 int FUNC_6 (struct sbp2_lu*) ;
 int FUNC_7 (struct sbp2_lu*) ;
 int FUNC_8 (struct sbp2_lu*) ;
 scalar_t__ FUNC_9 (struct sbp2_lu*) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sbp2_lu *VAR_6)
{
 struct sbp2_fwhost_info *VAR_7 = VAR_6->hi;
 int VAR_8;

 VAR_6->login_response = FUNC_1(VAR_7->host->device.parent,
         sizeof(struct sbp2_login_response),
         &VAR_6->login_response_dma, VAR_3);
 if (!VAR_6->login_response)
  goto alloc_fail;

 VAR_6->query_logins_orb = FUNC_1(VAR_7->host->device.parent,
         sizeof(struct sbp2_query_logins_orb),
         &VAR_6->query_logins_orb_dma, VAR_3);
 if (!VAR_6->query_logins_orb)
  goto alloc_fail;

 VAR_6->query_logins_response = FUNC_1(VAR_7->host->device.parent,
         sizeof(struct sbp2_query_logins_response),
         &VAR_6->query_logins_response_dma, VAR_3);
 if (!VAR_6->query_logins_response)
  goto alloc_fail;

 VAR_6->reconnect_orb = FUNC_1(VAR_7->host->device.parent,
         sizeof(struct sbp2_reconnect_orb),
         &VAR_6->reconnect_orb_dma, VAR_3);
 if (!VAR_6->reconnect_orb)
  goto alloc_fail;

 VAR_6->logout_orb = FUNC_1(VAR_7->host->device.parent,
         sizeof(struct sbp2_logout_orb),
         &VAR_6->logout_orb_dma, VAR_3);
 if (!VAR_6->logout_orb)
  goto alloc_fail;

 VAR_6->login_orb = FUNC_1(VAR_7->host->device.parent,
         sizeof(struct sbp2_login_orb),
         &VAR_6->login_orb_dma, VAR_3);
 if (!VAR_6->login_orb)
  goto alloc_fail;

 if (FUNC_9(VAR_6))
  goto alloc_fail;



 if (FUNC_2(1000)) {
  FUNC_7(VAR_6);
  return -VAR_1;
 }

 if (FUNC_4(VAR_6)) {
  FUNC_7(VAR_6);
  return -VAR_0;
 }

 FUNC_8(VAR_6);
 FUNC_3(VAR_6, 1);
 FUNC_6(VAR_6);

 if (VAR_6->workarounds & VAR_5)
  FUNC_11(VAR_4);

 VAR_8 = FUNC_10(VAR_6->shost, 0, VAR_6->ud->id, 0);
 if (VAR_8) {
  FUNC_0("scsi_add_device failed");
  FUNC_5(VAR_6);
  FUNC_7(VAR_6);
  return VAR_8;
 }

 return 0;

alloc_fail:
 FUNC_0("Could not allocate memory for lu");
 FUNC_7(VAR_6);
 return -VAR_2;
}
