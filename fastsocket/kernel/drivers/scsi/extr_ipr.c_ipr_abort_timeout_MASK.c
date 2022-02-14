
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipr_ioa_cfg {TYPE_4__* host; scalar_t__ in_reset_reload; } ;
struct ipr_cmd_pkt {int* cdb; int request_type; } ;
struct TYPE_7__ {struct ipr_cmd_pkt cmd_pkt; int res_handle; } ;
struct TYPE_6__ {int sdev; } ;
struct TYPE_5__ {scalar_t__ done; } ;
struct ipr_cmnd {TYPE_3__ ioarcb; struct ipr_cmnd* sibling; TYPE_2__ u; TYPE_1__ completion; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_8__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ipr_cmnd*,int ,int ,int ) ;
 struct ipr_cmnd* FUNC_1 (struct ipr_ioa_cfg*) ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ipr_cmnd *VAR_10)
{
 struct ipr_cmnd *VAR_11;
 struct ipr_ioa_cfg *VAR_12 = VAR_10->ioa_cfg;
 struct ipr_cmd_pkt *VAR_13;
 unsigned long VAR_14 = 0;

 VAR_0;
 FUNC_3(VAR_12->host->host_lock, VAR_14);
 if (VAR_10->completion.done || VAR_12->in_reset_reload) {
  FUNC_4(VAR_12->host->host_lock, VAR_14);
  return;
 }

 FUNC_2(VAR_6, VAR_10->u.sdev, "Abort timed out. Resetting bus.\n");
 VAR_11 = FUNC_1(VAR_12);
 VAR_10->sibling = VAR_11;
 VAR_11->sibling = VAR_10;
 VAR_11->ioarcb.res_handle = VAR_10->ioarcb.res_handle;
 VAR_13 = &VAR_11->ioarcb.cmd_pkt;
 VAR_13->request_type = VAR_5;
 VAR_13->cdb[0] = VAR_3;
 VAR_13->cdb[2] = VAR_4 | VAR_1;

 FUNC_0(VAR_11, VAR_8, VAR_9, VAR_2);
 FUNC_4(VAR_12->host->host_lock, VAR_14);
 VAR_7;
}
