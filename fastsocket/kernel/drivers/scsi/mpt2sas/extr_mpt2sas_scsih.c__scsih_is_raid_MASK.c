
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; int host; } ;
struct device {int dummy; } ;
struct MPT2SAS_ADAPTER {scalar_t__ is_warpdrive; } ;


 scalar_t__ VAR_0 ;
 struct MPT2SAS_ADAPTER* FUNC_0 (int ) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int
FUNC_2(struct device *VAR_1)
{
 struct scsi_device *VAR_2 = FUNC_1(VAR_1);
 struct MPT2SAS_ADAPTER *VAR_3 = FUNC_0(VAR_2->host);

 if (VAR_3->is_warpdrive)
  return 0;
 return (VAR_2->channel == VAR_0) ? 1 : 0;
}
