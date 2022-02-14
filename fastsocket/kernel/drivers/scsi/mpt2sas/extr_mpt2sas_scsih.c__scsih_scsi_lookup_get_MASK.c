
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct scsi_cmnd {int dummy; } ;
struct MPT2SAS_ADAPTER {TYPE_1__* scsi_lookup; } ;
struct TYPE_2__ {struct scsi_cmnd* scmd; } ;



__attribute__((used)) static struct scsi_cmnd *
FUNC_0(struct MPT2SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 return VAR_0->scsi_lookup[VAR_1 - 1].scmd;
}
