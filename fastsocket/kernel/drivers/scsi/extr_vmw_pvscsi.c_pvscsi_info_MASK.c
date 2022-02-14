
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvscsi_adapter {int rev; int req_pages; int cmp_pages; int msg_pages; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int cmd_per_lun; } ;


 TYPE_1__ VAR_0 ;
 struct pvscsi_adapter* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (char*,char*,int,int,int,int,int) ;

__attribute__((used)) static const char *FUNC_2(struct Scsi_Host *VAR_1)
{
 struct pvscsi_adapter *VAR_2 = FUNC_0(VAR_1);
 static char VAR_3[256];

 FUNC_1(VAR_3, "VMware PVSCSI storage adapter rev %d, req/cmp/msg rings: "
  "%u/%u/%u pages, cmd_per_lun=%u", VAR_2->rev,
  VAR_2->req_pages, VAR_2->cmp_pages, VAR_2->msg_pages,
  VAR_0.cmd_per_lun);

 return VAR_3;
}
