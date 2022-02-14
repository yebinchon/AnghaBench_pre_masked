
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ql4_boot_session_info {int dummy; } ;
struct TYPE_2__ {struct ql4_boot_session_info boot_pri_sess; } ;
struct scsi_qla_host {TYPE_1__ boot_tgt; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ql4_boot_session_info*,int,char*) ;

__attribute__((used)) static ssize_t FUNC_1(void *VAR_0, int VAR_1, char *VAR_2)
{
 struct scsi_qla_host *VAR_3 = VAR_0;
 struct ql4_boot_session_info *VAR_4 = &(VAR_3->boot_tgt.boot_pri_sess);

 return FUNC_0(VAR_4, VAR_1, VAR_2);
}
