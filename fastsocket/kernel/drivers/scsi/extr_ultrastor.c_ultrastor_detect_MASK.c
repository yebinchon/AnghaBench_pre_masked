
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {char* proc_name; } ;


 scalar_t__ FUNC_0 (struct scsi_host_template*) ;
 scalar_t__ FUNC_1 (struct scsi_host_template*) ;

__attribute__((used)) static int FUNC_2(struct scsi_host_template * VAR_0)
{
 VAR_0->proc_name = "ultrastor";
 return FUNC_0(VAR_0) || FUNC_1(VAR_0);
}
