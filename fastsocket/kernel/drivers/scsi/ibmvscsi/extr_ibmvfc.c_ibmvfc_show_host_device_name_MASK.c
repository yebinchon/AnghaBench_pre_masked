
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibmvfc_host {TYPE_2__* login_buf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {char* device_name; } ;
struct TYPE_4__ {TYPE_1__ resp; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct ibmvfc_host* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct ibmvfc_host *VAR_5 = FUNC_1(VAR_4);

 return FUNC_2(VAR_3, VAR_0, "%s\n",
   VAR_5->login_buf->resp.device_name);
}
