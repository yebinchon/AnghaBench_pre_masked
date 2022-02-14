
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipv4_options; int ipv6_options; } ;
struct scsi_qla_host {TYPE_1__ ip_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*) ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_2)
{
 if (VAR_2->ip_config.ipv4_options & VAR_0)
  FUNC_0(VAR_2);

 if (VAR_2->ip_config.ipv6_options & VAR_1)
  FUNC_1(VAR_2);
}
