
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wd33c93_regs ;
typedef int uchar ;
struct TYPE_7__ {unsigned long this_residual; unsigned long ptr; scalar_t__ phase; TYPE_4__* buffer; scalar_t__ buffers_residual; } ;
struct scsi_cmnd {TYPE_3__ SCp; TYPE_2__* device; } ;
struct WD33C93_hostdata {int* sync_xfer; int dma_mode; scalar_t__ level2; int dma; int state; int dma_cnt; int pio_cnt; scalar_t__ (* dma_setup ) (struct scsi_cmnd*,int) ;scalar_t__ no_dma; } ;
struct TYPE_8__ {unsigned long length; } ;
struct TYPE_6__ {size_t id; TYPE_1__* host; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_0 (int const) ;
 unsigned long FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*,int) ;
 int FUNC_3 (int const,int *,unsigned long,int,struct WD33C93_hostdata*) ;
 int FUNC_4 (int const,int ,int) ;
 int FUNC_5 (int const,int ) ;
 int FUNC_6 (int const,unsigned long) ;

__attribute__((used)) static void
FUNC_7(const wd33c93_regs VAR_11, struct scsi_cmnd *VAR_12,
  int VAR_13)
{
 struct WD33C93_hostdata *VAR_14;
 unsigned long VAR_15;

 VAR_14 = (struct WD33C93_hostdata *) VAR_12->device->host->hostdata;
 if (!VAR_12->SCp.this_residual && VAR_12->SCp.buffers_residual) {
  ++VAR_12->SCp.buffer;
  --VAR_12->SCp.buffers_residual;
  VAR_12->SCp.this_residual = VAR_12->SCp.buffer->length;
  VAR_12->SCp.ptr = FUNC_1(VAR_12->SCp.buffer);
 }
 if (!VAR_12->SCp.this_residual)
  return;

 FUNC_4(VAR_11, VAR_10,
        VAR_14->sync_xfer[VAR_12->device->id]);





 if (VAR_14->no_dma || VAR_14->dma_setup(VAR_12, VAR_13)) {



  FUNC_3(VAR_11, (uchar *) VAR_12->SCp.ptr,
        VAR_12->SCp.this_residual, VAR_13, VAR_14);
  VAR_15 = VAR_12->SCp.this_residual;
  VAR_12->SCp.this_residual = FUNC_0(VAR_11);
  VAR_12->SCp.ptr += (VAR_15 - VAR_12->SCp.this_residual);
 }
 else {



  FUNC_4(VAR_11, VAR_9, VAR_1 | VAR_0 | VAR_14->dma_mode);
  FUNC_6(VAR_11, VAR_12->SCp.this_residual);

  if ((VAR_14->level2 >= VAR_4) ||
      (VAR_14->level2 == VAR_3 && VAR_12->SCp.phase == 0)) {
   FUNC_4(VAR_11, VAR_8, 0x45);
   FUNC_5(VAR_11, VAR_6);
   VAR_14->state = VAR_5;
  } else
   FUNC_5(VAR_11, VAR_7);

  VAR_14->dma = VAR_2;
 }
}
