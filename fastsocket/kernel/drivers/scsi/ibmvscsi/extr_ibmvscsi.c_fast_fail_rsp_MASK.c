
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct srp_event_struct {TYPE_4__* xfer_iu; struct ibmvscsi_host_data* hostdata; } ;
struct ibmvscsi_host_data {int dev; } ;
struct TYPE_5__ {scalar_t__ status; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct TYPE_7__ {TYPE_2__ fast_fail; } ;
struct TYPE_8__ {TYPE_3__ mad; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ibmvscsi_host_data*) ;

__attribute__((used)) static void FUNC_2(struct srp_event_struct *VAR_3)
{
 struct ibmvscsi_host_data *VAR_4 = VAR_3->hostdata;
 u8 VAR_5 = VAR_3->xfer_iu->mad.fast_fail.common.status;

 if (VAR_5 == VAR_1)
  FUNC_0(VAR_4->dev, "fast_fail not supported in server\n");
 else if (VAR_5 == VAR_0)
  FUNC_0(VAR_4->dev, "fast_fail request failed\n");
 else if (VAR_5 != VAR_2)
  FUNC_0(VAR_4->dev, "error 0x%X enabling fast_fail\n", VAR_5);

 FUNC_1(VAR_4);
}
