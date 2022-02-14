
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct scsi_qla_host*,int) ;
 int FUNC_3 (char const*,char*,char*) ;
 struct scsi_qla_host* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct scsi_qla_host *VAR_5 = FUNC_4(FUNC_0(VAR_1));
 int VAR_6 = -VAR_0;
 char VAR_7[10];
 int VAR_8;

 FUNC_3(VAR_3, "%s", VAR_7);
 VAR_8 = FUNC_1(VAR_7);

 if (!VAR_8)
  goto exit_store_host_reset;

 VAR_6 = FUNC_2(VAR_5, VAR_8);

exit_store_host_reset:
 if (VAR_6 == 0)
  VAR_6 = VAR_4;
 return VAR_6;
}
