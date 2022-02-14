
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {int in_reset_reload; int reset_wait_q; TYPE_1__* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
           struct device_attribute *VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_1(VAR_3);
 struct ipr_ioa_cfg *VAR_8 = (struct ipr_ioa_cfg *)VAR_7->hostdata;
 unsigned long VAR_9;
 int VAR_10 = VAR_6;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 FUNC_3(VAR_8->host->host_lock, VAR_9);
 if (!VAR_8->in_reset_reload)
  FUNC_2(VAR_8, VAR_2);
 FUNC_4(VAR_8->host->host_lock, VAR_9);
 FUNC_5(VAR_8->reset_wait_q, !VAR_8->in_reset_reload);

 return VAR_10;
}
