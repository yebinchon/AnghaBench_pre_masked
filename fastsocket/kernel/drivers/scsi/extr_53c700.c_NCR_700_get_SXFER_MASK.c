
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int sdev_target; TYPE_1__* host; } ;
struct NCR_700_Host_Parameters {int dummy; } ;
typedef int __u8 ;
struct TYPE_2__ {scalar_t__* hostdata; } ;


 int FUNC_0 (struct NCR_700_Host_Parameters*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline __u8
FUNC_3(struct scsi_device *VAR_0)
{
 struct NCR_700_Host_Parameters *VAR_1 =
  (struct NCR_700_Host_Parameters *)VAR_0->host->hostdata[0];

 return FUNC_0(VAR_1,
           FUNC_1(VAR_0->sdev_target),
           FUNC_2(VAR_0->sdev_target));
}
