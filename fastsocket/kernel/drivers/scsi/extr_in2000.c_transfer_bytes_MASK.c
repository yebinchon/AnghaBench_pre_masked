
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct IN2000_hostdata {int* sync_xfer; scalar_t__ level2; unsigned short io_base; int fifo; void* state; } ;
struct TYPE_11__ {int length; } ;
struct TYPE_9__ {int this_residual; scalar_t__ phase; int have_data_in; scalar_t__ ptr; TYPE_6__* buffer; scalar_t__ buffers_residual; } ;
struct TYPE_10__ {TYPE_3__ SCp; TYPE_2__* device; } ;
struct TYPE_8__ {size_t id; TYPE_1__* host; } ;
struct TYPE_7__ {scalar_t__ hostdata; } ;
typedef TYPE_4__ Scsi_Cmnd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned short) ;
 int FUNC_4 (struct IN2000_hostdata*,int ,int) ;
 int FUNC_5 (struct IN2000_hostdata*,int ) ;
 int FUNC_6 (struct IN2000_hostdata*,int) ;

__attribute__((used)) static void FUNC_7(Scsi_Cmnd * VAR_17, int VAR_18)
{
 struct IN2000_hostdata *VAR_19;
 unsigned short *VAR_20;
 unsigned short VAR_21;
 int VAR_22;

 VAR_19 = (struct IN2000_hostdata *) VAR_17->device->host->hostdata;
 if (!VAR_17->SCp.this_residual && VAR_17->SCp.buffers_residual) {
  ++VAR_17->SCp.buffer;
  --VAR_17->SCp.buffers_residual;
  VAR_17->SCp.this_residual = VAR_17->SCp.buffer->length;
  VAR_17->SCp.ptr = FUNC_1(VAR_17->SCp.buffer);
 }



 FUNC_4(VAR_19, VAR_16, VAR_19->sync_xfer[VAR_17->device->id]);
 FUNC_6(VAR_19, VAR_17->SCp.this_residual);
 FUNC_4(VAR_19, VAR_15, VAR_2 | VAR_1 | VAR_0);
 FUNC_2(0, VAR_8);





 if (VAR_18) {
  FUNC_2(0, VAR_7);
  if ((VAR_19->level2 >= VAR_10) || (VAR_19->level2 == VAR_9 && VAR_17->SCp.phase == 0)) {
   FUNC_4(VAR_19, VAR_14, 0x45);
   FUNC_5(VAR_19, VAR_12);
   VAR_19->state = VAR_11;
  } else
   FUNC_5(VAR_19, VAR_13);
  VAR_19->fifo = VAR_3;
  VAR_17->SCp.have_data_in = 0;
  return;
 }






 if ((VAR_19->level2 >= VAR_10) || (VAR_19->level2 == VAR_9 && VAR_17->SCp.phase == 0)) {
  FUNC_4(VAR_19, VAR_14, 0x45);
  FUNC_5(VAR_19, VAR_12);
  VAR_19->state = VAR_11;
 } else
  FUNC_5(VAR_19, VAR_13);
 VAR_19->fifo = VAR_4;
 VAR_20 = (unsigned short *) VAR_17->SCp.ptr;

 if ((VAR_22 = VAR_17->SCp.this_residual) > VAR_5)
  VAR_22 = VAR_5;
 VAR_17->SCp.have_data_in = VAR_22;
 VAR_22 >>= 1;
 VAR_21 = VAR_19->io_base + VAR_6;





 while (VAR_22--)
  FUNC_3(*VAR_20++, VAR_6);



}
