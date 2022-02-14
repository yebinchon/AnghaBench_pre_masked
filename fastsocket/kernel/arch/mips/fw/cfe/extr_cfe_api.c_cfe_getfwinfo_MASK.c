
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xiocb_fwinfo {int dummy; } ;
struct TYPE_5__ {int fwi_reserved3; int fwi_reserved2; int fwi_reserved1; int fwi_bootarea_size; int fwi_bootarea_pa; int fwi_bootarea_va; int fwi_boardid; int fwi_flags; int fwi_totalmem; int fwi_version; } ;
struct TYPE_6__ {TYPE_1__ xiocb_fwinfo; } ;
struct cfe_xiocb {scalar_t__ xiocb_status; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; scalar_t__ xiocb_handle; int xiocb_fcode; } ;
struct TYPE_7__ {int fwi_reserved3; int fwi_reserved2; int fwi_reserved1; int fwi_bootarea_size; int fwi_bootarea_pa; int fwi_bootarea_va; int fwi_boardid; int fwi_flags; int fwi_totalmem; int fwi_version; } ;
typedef TYPE_3__ cfe_fwinfo_t ;


 int VAR_0 ;
 int FUNC_0 (struct cfe_xiocb*) ;

int FUNC_1(cfe_fwinfo_t * VAR_1)
{
 struct cfe_xiocb VAR_2;

 VAR_2.xiocb_fcode = VAR_0;
 VAR_2.xiocb_status = 0;
 VAR_2.xiocb_handle = 0;
 VAR_2.xiocb_flags = 0;
 VAR_2.xiocb_psize = sizeof(struct xiocb_fwinfo);

 FUNC_0(&VAR_2);

 if (VAR_2.xiocb_status < 0)
  return VAR_2.xiocb_status;

 VAR_1->fwi_version = VAR_2.plist.xiocb_fwinfo.fwi_version;
 VAR_1->fwi_totalmem = VAR_2.plist.xiocb_fwinfo.fwi_totalmem;
 VAR_1->fwi_flags = VAR_2.plist.xiocb_fwinfo.fwi_flags;
 VAR_1->fwi_boardid = VAR_2.plist.xiocb_fwinfo.fwi_boardid;
 VAR_1->fwi_bootarea_va = VAR_2.plist.xiocb_fwinfo.fwi_bootarea_va;
 VAR_1->fwi_bootarea_pa = VAR_2.plist.xiocb_fwinfo.fwi_bootarea_pa;
 VAR_1->fwi_bootarea_size =
     VAR_2.plist.xiocb_fwinfo.fwi_bootarea_size;






 return 0;
}
