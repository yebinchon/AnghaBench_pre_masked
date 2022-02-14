
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* request_queue; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int rq_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2 (struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_device *VAR_4;
 VAR_4 = FUNC_1(VAR_1);
 return FUNC_0(VAR_3, 20, "%d\n", VAR_4->request_queue->rq_timeout / VAR_0);
}
