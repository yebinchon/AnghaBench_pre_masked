
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int phase; int this_residual; int buffers_residual; int * ptr; TYPE_3__* buffer; } ;
struct scsi_cmnd {int result; TYPE_1__ SCp; } ;
struct TYPE_13__ {unsigned short base; int rd; int dp; int mode; scalar_t__ jstart; scalar_t__ failed; } ;
typedef TYPE_2__ imm_struct ;
struct TYPE_14__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 unsigned char FUNC_7 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (unsigned short) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 TYPE_3__* FUNC_13 (struct scsi_cmnd*) ;
 int * FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (unsigned short,int) ;

__attribute__((used)) static int FUNC_17(imm_struct *VAR_10, struct scsi_cmnd *VAR_11)
{
 unsigned short VAR_12 = VAR_10->base;
 unsigned char VAR_13 = 0, VAR_14 = 0;
 int VAR_15, VAR_16;




 if (VAR_10->failed)
  return 0;

 switch (VAR_11->SCp.phase) {
 case 0:
  if (FUNC_15(VAR_9, VAR_10->jstart + VAR_5)) {




   FUNC_2(VAR_10, VAR_1);
   return 0;
  }
  return 1;

 case 1:
  FUNC_1(VAR_10, VAR_0);
  VAR_11->SCp.phase++;


 case 2:
  if (!FUNC_5(VAR_10, FUNC_10(VAR_11))) {
   FUNC_2(VAR_10, VAR_3);
   return 0;
  }
  VAR_11->SCp.phase++;


 case 3:
  FUNC_16(VAR_12, 0x0c);
  if (!(FUNC_9(VAR_12) & 0x80))
   return 1;

  if (!FUNC_6(VAR_11))
   return 0;
  VAR_11->SCp.phase++;


 case 4:
  if (FUNC_11(VAR_11)) {
   VAR_11->SCp.buffer = FUNC_13(VAR_11);
   VAR_11->SCp.this_residual = VAR_11->SCp.buffer->length;
   VAR_11->SCp.ptr = FUNC_14(VAR_11->SCp.buffer);
  } else {
   VAR_11->SCp.buffer = ((void*)0);
   VAR_11->SCp.this_residual = 0;
   VAR_11->SCp.ptr = ((void*)0);
  }
  VAR_11->SCp.buffers_residual = FUNC_12(VAR_11) - 1;
  VAR_11->SCp.phase++;
  if (VAR_11->SCp.this_residual & 0x01)
   VAR_11->SCp.this_residual++;

 case 5:

  FUNC_16(VAR_12, 0x0c);
  if (!(FUNC_9(VAR_12) & 0x80))
   return 1;


  VAR_16 = (FUNC_9(VAR_12) & 0xb8);
  VAR_10->rd = (VAR_16 & 0x10) ? 1 : 0;
  VAR_10->dp = (VAR_16 & 0x20) ? 0 : 1;

  if ((VAR_10->dp) && (VAR_10->rd))
   if (FUNC_4(VAR_10))
    return 0;
  VAR_11->SCp.phase++;


 case 6:

  FUNC_16(VAR_12, 0x0c);
  if (!(FUNC_9(VAR_12) & 0x80))
   return 1;

  if (VAR_10->dp) {
   VAR_15 = FUNC_0(VAR_11);
   if (VAR_15 == -1)
    return 0;
   if (VAR_15 == 0)
    return 1;
  }
  VAR_11->SCp.phase++;


 case 7:
  if ((VAR_10->dp) && (VAR_10->rd)) {
   if ((VAR_10->mode == VAR_6) || (VAR_10->mode == VAR_7)) {
    FUNC_16(VAR_12, 0x4);
    FUNC_16(VAR_12, 0xc);
    FUNC_16(VAR_12, 0xe);
    FUNC_16(VAR_12, 0x4);
   }
  }
  VAR_11->SCp.phase++;


 case 8:

  if (FUNC_7(VAR_10) != (unsigned char) 0xb8) {
   FUNC_2(VAR_10, VAR_2);
   return 0;
  }
  if (FUNC_4(VAR_10))
   return 0;
  if (FUNC_3(VAR_10, &VAR_13, 1)) {

   if (FUNC_7(VAR_10) == (unsigned char) 0xb8)
    FUNC_3(VAR_10, &VAR_14, 1);
   VAR_11->result = (VAR_4 << 16) + (VAR_13 & VAR_8);
  }
  if ((VAR_10->mode == VAR_6) || (VAR_10->mode == VAR_7)) {
   FUNC_16(VAR_12, 0x4);
   FUNC_16(VAR_12, 0xc);
   FUNC_16(VAR_12, 0xe);
   FUNC_16(VAR_12, 0x4);
  }
  return 0;
  break;

 default:
  FUNC_8("imm: Invalid scsi phase\n");
 }
 return 0;
}
