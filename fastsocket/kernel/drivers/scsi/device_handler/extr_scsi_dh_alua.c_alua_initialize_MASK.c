
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct alua_dh_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,struct alua_dh_data*) ;
 int FUNC_1 (struct scsi_device*,struct alua_dh_data*) ;
 int FUNC_2 (struct scsi_device*,struct alua_dh_data*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_1, struct alua_dh_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != VAR_0)
  goto out;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 != VAR_0)
  goto out;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != VAR_0)
  goto out;

out:
 return VAR_3;
}
