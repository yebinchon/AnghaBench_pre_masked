
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {int underflow; int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; int * host_scribble; int sense_buffer; } ;
struct bfad_s {int dummy; } ;
struct bfad_itnim_s {int dummy; } ;
struct bfad_itnim_data_s {struct bfad_itnim_s* itnim; } ;
struct bfad_ioim_s {int dummy; } ;
typedef int s32 ;
typedef enum bfi_ioim_status { ____Placeholder_bfi_ioim_status } bfi_ioim_status ;
struct TYPE_3__ {scalar_t__ queue_depth; struct bfad_itnim_data_s* hostdata; int * host; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bfad_s*,int) ;
 int FUNC_2 (struct bfad_itnim_s*,TYPE_1__*) ;
 int FUNC_3 (struct bfad_itnim_s*,TYPE_1__*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,int) ;
 int FUNC_8 (struct scsi_cmnd*) ;

void
FUNC_9(void *VAR_6, struct bfad_ioim_s *VAR_7,
   enum bfi_ioim_status VAR_8, u8 VAR_9,
   int VAR_10, u8 *VAR_11, s32 VAR_12)
{
 struct scsi_cmnd *VAR_13 = (struct scsi_cmnd *)VAR_7;
 struct bfad_s *VAR_14 = VAR_6;
 struct bfad_itnim_data_s *VAR_15;
 struct bfad_itnim_s *VAR_16;
 u8 VAR_17 = VAR_1;

 switch (VAR_8) {
 case 130:
  FUNC_1(VAR_14, VAR_9);
  FUNC_7(VAR_13, 0);

  if (VAR_10 > 0) {
   FUNC_1(VAR_14, VAR_10);
   if (VAR_10 > VAR_4)
    VAR_10 = VAR_4;
   FUNC_4(VAR_13->sense_buffer, VAR_11, VAR_10);
  }

  if (VAR_12 > 0) {
   FUNC_1(VAR_14, VAR_12);
   FUNC_7(VAR_13, VAR_12);
   if (!VAR_10 && (VAR_9 == VAR_2) &&
    (FUNC_5(VAR_13) - VAR_12) <
     VAR_13->underflow) {
    FUNC_1(VAR_14, 0);
    VAR_17 = VAR_0;
   }
  }
  VAR_13->result = FUNC_0(VAR_17, VAR_9);

  break;

 case 131:
 case 128:
 case 129:
 default:
  VAR_17 = VAR_0;
  VAR_13->result = FUNC_0(VAR_17, 0);
 }


 if (VAR_13->device->host != ((void*)0))
  FUNC_6(VAR_13);

 VAR_13->host_scribble = ((void*)0);
 FUNC_1(VAR_14, VAR_13->result);

 VAR_15 = VAR_13->device->hostdata;
 if (VAR_15) {
  VAR_16 = VAR_15->itnim;
  if (!VAR_13->result && VAR_16 &&
    (VAR_5 > VAR_13->device->queue_depth)) {

   FUNC_3(VAR_16, VAR_13->device);
  } else if (VAR_13->result == VAR_3 && VAR_16) {

   FUNC_2(VAR_16, VAR_13->device);
  }
 }

 VAR_13->scsi_done(VAR_13);
}
