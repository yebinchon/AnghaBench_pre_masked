
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int reqsen ;
struct TYPE_6__ {int scsi_cmd; } ;
typedef TYPE_1__ ips_scb_t ;
typedef int ips_ha_t ;
struct TYPE_7__ {int ResponseCode; int AdditionalLength; void* AdditionalSenseCodeQual; void* AdditionalSenseCode; } ;
typedef TYPE_2__ IPS_SCSI_REQSEN ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_3(ips_ha_t * VAR_3, ips_scb_t * VAR_4)
{
 IPS_SCSI_REQSEN VAR_5;

 FUNC_0("ips_reqsen", 1);

 FUNC_2(&VAR_5, 0, sizeof (IPS_SCSI_REQSEN));

 VAR_5.ResponseCode =
     VAR_2 | VAR_0;
 VAR_5.AdditionalLength = 10;
 VAR_5.AdditionalSenseCode = VAR_1;
 VAR_5.AdditionalSenseCodeQual = VAR_1;

 FUNC_1(VAR_4->scsi_cmd, &VAR_5, sizeof (VAR_5));

 return (1);
}
