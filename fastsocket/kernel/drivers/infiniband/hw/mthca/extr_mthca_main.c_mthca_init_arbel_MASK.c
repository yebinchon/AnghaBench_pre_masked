
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_profile {int num_uar; int num_srq; scalar_t__ num_udav; } ;
struct mthca_init_hca_param {int dummy; } ;
struct mthca_dev_lim {int uar_size; int max_srqs; } ;
struct TYPE_3__ {int fw_icm; } ;
struct TYPE_4__ {TYPE_1__ arbel; } ;
struct mthca_dev {int mthca_flags; TYPE_2__ fw; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mthca_profile VAR_4 ;
 int FUNC_0 (struct mthca_dev*) ;
 int FUNC_1 (struct mthca_dev*) ;
 int FUNC_2 (struct mthca_dev*,struct mthca_init_hca_param*) ;
 int FUNC_3 (struct mthca_dev*) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (struct mthca_dev*,char*) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_dev_lim*) ;
 int FUNC_7 (struct mthca_dev*,char*,int) ;
 int FUNC_8 (struct mthca_dev*,int ,int ) ;
 int FUNC_9 (struct mthca_dev*) ;
 int FUNC_10 (struct mthca_dev*,struct mthca_dev_lim*,struct mthca_init_hca_param*,int) ;
 int FUNC_11 (struct mthca_dev*) ;
 int FUNC_12 (struct mthca_dev*,struct mthca_profile*,struct mthca_dev_lim*,struct mthca_init_hca_param*) ;

__attribute__((used)) static int FUNC_13(struct mthca_dev *VAR_5)
{
 struct mthca_dev_lim VAR_6;
 struct mthca_profile VAR_7;
 struct mthca_init_hca_param VAR_8;
 s64 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_5);
 if (VAR_10) {
  FUNC_7(VAR_5, "QUERY_FW command failed %d, aborting.\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10 == -VAR_0) {
  FUNC_5(VAR_5, "No HCA-attached memory (running in MemFree mode)\n");
  VAR_5->mthca_flags |= VAR_1;
 } else if (VAR_10) {
  FUNC_7(VAR_5, "ENABLE_LAM returned %d, aborting.\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_11(VAR_5);
 if (VAR_10) {
  FUNC_7(VAR_5, "Loading FW returned %d, aborting.\n", VAR_10);
  goto err_disable;
 }

 VAR_10 = FUNC_6(VAR_5, &VAR_6);
 if (VAR_10) {
  FUNC_7(VAR_5, "QUERY_DEV_LIM returned %d, aborting.\n", VAR_10);
  goto err_stop_fw;
 }

 VAR_7 = VAR_4;
 VAR_7.num_uar = VAR_6.uar_size / VAR_3;
 VAR_7.num_udav = 0;
 if (VAR_5->mthca_flags & VAR_2)
  VAR_7.num_srq = VAR_6.max_srqs;

 VAR_9 = FUNC_12(VAR_5, &VAR_7, &VAR_6, &VAR_8);
 if (VAR_9 < 0) {
  VAR_10 = VAR_9;
  goto err_stop_fw;
 }

 VAR_10 = FUNC_10(VAR_5, &VAR_6, &VAR_8, VAR_9);
 if (VAR_10)
  goto err_stop_fw;

 VAR_10 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_10) {
  FUNC_7(VAR_5, "INIT_HCA command returned %d, aborting.\n", VAR_10);
  goto err_free_icm;
 }

 return 0;

err_free_icm:
 FUNC_9(VAR_5);

err_stop_fw:
 FUNC_4(VAR_5);
 FUNC_8(VAR_5, VAR_5->fw.arbel.fw_icm, 0);

err_disable:
 if (!(VAR_5->mthca_flags & VAR_1))
  FUNC_0(VAR_5);

 return VAR_10;
}
