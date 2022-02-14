
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct qla_hw_data {TYPE_1__* isp_ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_8__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_7__ {int (* beacon_on ) (TYPE_2__*) ;int (* beacon_off ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_4 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ,TYPE_2__*,int,char*) ;
 int VAR_5 ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_6, struct device_attribute *VAR_7,
       const char *VAR_8, size_t VAR_9)
{
 scsi_qla_host_t *VAR_10 = FUNC_4(FUNC_2(VAR_6));
 struct qla_hw_data *VAR_11 = VAR_10->hw;
 int VAR_12 = 0;
 int VAR_13;

 if (FUNC_0(VAR_11) || FUNC_1(VAR_11))
  return -VAR_3;

 if (FUNC_8(VAR_0, &VAR_10->dpc_flags)) {
  FUNC_3(VAR_5, VAR_10, 0x707a,
      "Abort ISP active -- ignoring beacon request.\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_8, "%d", &VAR_12) != 1)
  return -VAR_2;

 if (VAR_12)
  VAR_13 = VAR_11->isp_ops->beacon_on(VAR_10);
 else
  VAR_13 = VAR_11->isp_ops->beacon_off(VAR_10);

 if (VAR_13 != VAR_4)
  VAR_9 = 0;

 return VAR_9;
}
