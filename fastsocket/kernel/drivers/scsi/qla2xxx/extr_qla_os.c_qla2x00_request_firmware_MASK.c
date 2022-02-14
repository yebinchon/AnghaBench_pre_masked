
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {TYPE_1__* pdev; } ;
struct fw_blob {int * fw; int name; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*) ;
 scalar_t__ FUNC_8 (struct qla_hw_data*) ;
 scalar_t__ FUNC_9 (struct qla_hw_data*) ;
 scalar_t__ FUNC_10 (struct qla_hw_data*) ;
 scalar_t__ FUNC_11 (struct qla_hw_data*) ;
 scalar_t__ FUNC_12 (struct qla_hw_data*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,TYPE_2__*,int,char*,int ) ;
 int VAR_10 ;
 struct fw_blob* VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_16 (int **,int ,int *) ;

struct fw_blob *
FUNC_17(scsi_qla_host_t *VAR_13)
{
 struct qla_hw_data *VAR_14 = VAR_13->hw;
 struct fw_blob *VAR_15;

 if (FUNC_1(VAR_14)) {
  VAR_15 = &VAR_11[VAR_1];
 } else if (FUNC_2(VAR_14)) {
  VAR_15 = &VAR_11[VAR_2];
 } else if (FUNC_3(VAR_14) || FUNC_4(VAR_14) || FUNC_8(VAR_14)) {
  VAR_15 = &VAR_11[VAR_3];
 } else if (FUNC_5(VAR_14) || FUNC_9(VAR_14)) {
  VAR_15 = &VAR_11[VAR_4];
 } else if (FUNC_6(VAR_14)) {
  VAR_15 = &VAR_11[VAR_5];
 } else if (FUNC_7(VAR_14)) {
  VAR_15 = &VAR_11[VAR_6];
 } else if (FUNC_11(VAR_14)) {
  VAR_15 = &VAR_11[VAR_8];
 } else if (FUNC_12(VAR_14)) {
  VAR_15 = &VAR_11[VAR_9];
 } else if (FUNC_0(VAR_14)) {
  VAR_15 = &VAR_11[VAR_0];
 } else if (FUNC_10(VAR_14)) {
  VAR_15 = &VAR_11[VAR_7];
 } else {
  return ((void*)0);
 }

 FUNC_13(&VAR_12);
 if (VAR_15->fw)
  goto out;

 if (FUNC_16(&VAR_15->fw, VAR_15->name, &VAR_14->pdev->dev)) {
  FUNC_15(VAR_10, VAR_13, 0x0063,
      "Failed to load firmware image (%s).\n", VAR_15->name);
  VAR_15->fw = ((void*)0);
  VAR_15 = ((void*)0);
  goto out;
 }

out:
 FUNC_14(&VAR_12);
 return VAR_15;
}
