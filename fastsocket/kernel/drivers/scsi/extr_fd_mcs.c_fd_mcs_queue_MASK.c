
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_16__ {scalar_t__ length; } ;
struct TYPE_14__ {int phase; scalar_t__ sent_command; scalar_t__ have_data_in; scalar_t__ Message; scalar_t__ Status; scalar_t__ buffers_residual; TYPE_5__* buffer; scalar_t__ this_residual; int * ptr; } ;
struct TYPE_15__ {void (* scsi_done ) (TYPE_3__*) ;TYPE_2__ SCp; scalar_t__ cmnd; int target; TYPE_1__* device; } ;
struct TYPE_13__ {struct Scsi_Host* host; } ;
typedef TYPE_3__ Scsi_Cmnd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,unsigned char,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_5__* FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(Scsi_Cmnd * VAR_9, void (*VAR_10) (Scsi_Cmnd *))
{
 struct Scsi_Host *VAR_11 = VAR_9->device->host;

 if (VAR_8) {
  FUNC_2("fd_mcs: fd_mcs_queue() NOT REENTRANT!\n");
 }






 FUNC_0(VAR_11);

 VAR_9->scsi_done = VAR_10;
 VAR_6 = VAR_9;



 if (FUNC_4(VAR_6)) {
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


 FUNC_1(0x00, VAR_0);
 FUNC_1(0x00, VAR_2);
 FUNC_1(VAR_5, VAR_3);
 VAR_8 = 1;
 FUNC_1(0x20, VAR_0);
 FUNC_1(0x14 | VAR_1, VAR_4);

 return 0;
}
