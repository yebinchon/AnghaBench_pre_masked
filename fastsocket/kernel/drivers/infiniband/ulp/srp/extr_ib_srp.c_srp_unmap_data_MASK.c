
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srp_target_port {TYPE_2__* srp_host; } ;
struct srp_request {int nfmr; struct ib_pool_fmr** fmr_list; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; } ;
struct ib_pool_fmr {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* srp_dev; } ;
struct TYPE_3__ {struct ib_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ib_device*,int ,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct scsi_cmnd *VAR_2,
      struct srp_target_port *VAR_3,
      struct srp_request *VAR_4)
{
 struct ib_device *VAR_5 = VAR_3->srp_host->srp_dev->dev;
 struct ib_pool_fmr **VAR_6;

 if (!FUNC_3(VAR_2) ||
     (VAR_2->sc_data_direction != VAR_1 &&
      VAR_2->sc_data_direction != VAR_0))
  return;

 VAR_6 = VAR_4->fmr_list;
 while (VAR_4->nfmr--)
  FUNC_1(*VAR_6++);

 FUNC_0(VAR_5, FUNC_3(VAR_2), FUNC_2(VAR_2),
   VAR_2->sc_data_direction);
}
