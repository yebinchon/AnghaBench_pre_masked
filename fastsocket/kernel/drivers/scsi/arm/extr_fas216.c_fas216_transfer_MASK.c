
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int fasdmatype_t ;
typedef int fasdmadir_t ;
struct TYPE_22__ {int this_residual; int phase; int ptr; } ;
struct TYPE_19__ {scalar_t__ phase; TYPE_7__ SCp; int async_stp; } ;
struct TYPE_18__ {int (* setup ) (int ,TYPE_7__*,int ,int) ;int transfer_type; int (* pseudo ) (int ,TYPE_7__*,int ,int ) ;} ;
struct TYPE_21__ {TYPE_5__* SCpnt; TYPE_4__ scsi; int host; TYPE_3__ dma; TYPE_1__* device; } ;
struct TYPE_20__ {int transfersize; TYPE_2__* device; TYPE_7__ SCp; } ;
struct TYPE_17__ {size_t id; } ;
struct TYPE_16__ {scalar_t__ sof; } ;
typedef TYPE_6__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (TYPE_6__*,int,char*,...) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;




 int FUNC_5 (TYPE_7__*,char*,char*) ;
 int FUNC_6 (int ,TYPE_7__*,int ,int) ;
 int FUNC_7 (int ,TYPE_7__*,int ,int ) ;

__attribute__((used)) static void FUNC_8(FAS216_Info *VAR_9)
{
 fasdmadir_t VAR_10;
 fasdmatype_t VAR_11;

 FUNC_1(VAR_9, VAR_4,
     "starttransfer: buffer %p length 0x%06x reqlen 0x%06x",
     VAR_9->scsi.SCp.ptr, VAR_9->scsi.SCp.this_residual,
     VAR_9->scsi.SCp.phase);

 if (!VAR_9->scsi.SCp.ptr) {
  FUNC_1(VAR_9, VAR_5, "null buffer passed to "
      "fas216_starttransfer");
  FUNC_5(&VAR_9->scsi.SCp, "SCp: ", "\n");
  FUNC_5(&VAR_9->SCpnt->SCp, "Cmnd SCp: ", "\n");
  return;
 }






 if (VAR_9->device[VAR_9->SCpnt->device->id].sof)
  VAR_11 = 129;
 else
  VAR_11 = 131;

 if (VAR_9->scsi.phase == VAR_6)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_2;

 if (VAR_9->dma.setup)
  VAR_11 = VAR_9->dma.setup(VAR_9->host, &VAR_9->scsi.SCp,
       VAR_10, VAR_11);
 VAR_9->dma.transfer_type = VAR_11;

 if (VAR_11 == 129)
  FUNC_3(VAR_9, VAR_9->scsi.SCp.phase);
 else
  FUNC_3(VAR_9, VAR_9->scsi.SCp.this_residual);

 switch (VAR_11) {
 case 131:
  FUNC_1(VAR_9, VAR_4, "PIO transfer");
  FUNC_4(VAR_9, VAR_7, 0);
  FUNC_4(VAR_9, VAR_8, VAR_9->scsi.async_stp);
  FUNC_0(VAR_9, VAR_0);
  FUNC_2(VAR_9, VAR_10);
  break;

 case 130:
  FUNC_1(VAR_9, VAR_4, "pseudo transfer");
  FUNC_0(VAR_9, VAR_0 | VAR_1);
  VAR_9->dma.pseudo(VAR_9->host, &VAR_9->scsi.SCp,
     VAR_10, VAR_9->SCpnt->transfersize);
  break;

 case 128:
  FUNC_1(VAR_9, VAR_4, "block dma transfer");
  FUNC_0(VAR_9, VAR_0 | VAR_1);
  break;

 case 129:
  FUNC_1(VAR_9, VAR_4, "total dma transfer");
  FUNC_0(VAR_9, VAR_0 | VAR_1);
  break;

 default:
  FUNC_1(VAR_9, VAR_4 | VAR_5,
      "invalid FAS216 DMA type");
  break;
 }
}
