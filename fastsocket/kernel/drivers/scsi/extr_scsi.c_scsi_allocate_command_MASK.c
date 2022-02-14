
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_cmd_pool {int dummy; } ;
struct scsi_cmnd {int dummy; } ;
typedef int gfp_t ;


 struct scsi_host_cmd_pool* FUNC_0 (int ) ;
 struct scsi_cmnd* FUNC_1 (struct scsi_host_cmd_pool*,int ) ;

struct scsi_cmnd *FUNC_2(gfp_t VAR_0)
{
 struct scsi_host_cmd_pool *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 return FUNC_1(VAR_1, VAR_0);
}
