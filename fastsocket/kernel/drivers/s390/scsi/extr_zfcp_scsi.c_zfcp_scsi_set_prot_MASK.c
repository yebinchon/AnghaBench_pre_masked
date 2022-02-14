
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int adapter_features; TYPE_1__* qdio; int status; struct Scsi_Host* scsi_host; } ;
struct Scsi_Host {int sg_tablesize; int max_sectors; } ;
struct TYPE_2__ {int max_sbale_per_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct Scsi_Host*,int ) ;
 int FUNC_2 (struct Scsi_Host*,unsigned int) ;

void FUNC_3(struct zfcp_adapter *VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned int VAR_9;
 struct Scsi_Host *VAR_10 = VAR_7->scsi_host;

 VAR_9 = FUNC_0(&VAR_7->status) &
     VAR_5;

 if (VAR_6 &&
     VAR_7->adapter_features & VAR_0)
  VAR_8 |= VAR_2;
 FUNC_2(VAR_10, VAR_8);
}
