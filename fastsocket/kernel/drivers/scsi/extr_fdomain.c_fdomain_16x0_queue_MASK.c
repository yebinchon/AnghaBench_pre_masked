
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phase; scalar_t__ sent_command; scalar_t__ have_data_in; scalar_t__ Message; scalar_t__ Status; scalar_t__ buffers_residual; TYPE_2__* buffer; scalar_t__ this_residual; int * ptr; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__ SCp; scalar_t__ cmnd; int target; } ;
struct TYPE_5__ {scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct scsi_cmnd* VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (char*,int ,unsigned char,int ,int ) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 TYPE_2__* FUNC_6 (struct scsi_cmnd*) ;
 int * FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_10,
  void (*VAR_11)(struct scsi_cmnd *))
{
   if (VAR_8) {
      FUNC_2( "scsi: <fdomain> fdomain_16x0_queue() NOT REENTRANT!\n" );
   }
   FUNC_0();

   VAR_6 = VAR_10;
   VAR_6->scsi_done = VAR_11;



   if (FUNC_5(VAR_6)) {
    VAR_6->SCp.buffer = FUNC_6(VAR_6);
    VAR_6->SCp.ptr = FUNC_7(VAR_6->SCp.buffer);
    VAR_6->SCp.this_residual = VAR_6->SCp.buffer->length;
    VAR_6->SCp.buffers_residual = FUNC_5(VAR_6) - 1;
   } else {
    VAR_6->SCp.ptr = ((void*)0);
    VAR_6->SCp.this_residual = 0;
    VAR_6->SCp.buffer = ((void*)0);
    VAR_6->SCp.buffers_residual = 0;
   }

   VAR_6->SCp.Status = 0;
   VAR_6->SCp.Message = 0;
   VAR_6->SCp.have_data_in = 0;
   VAR_6->SCp.sent_command = 0;
   VAR_6->SCp.phase = VAR_7;


   FUNC_1(0x00, VAR_9 + VAR_0);
   FUNC_1(0x00, VAR_9 + VAR_2);
   FUNC_1(VAR_5, VAR_9 + VAR_3);
   ++VAR_8;
   FUNC_1(0x20, VAR_9 + VAR_0);
   FUNC_1(0x14 | VAR_1, VAR_9 + VAR_4);

   return 0;
}
