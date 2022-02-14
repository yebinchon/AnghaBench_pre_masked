
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; int * host_scribble; int result; } ;
struct bfad_itnim_s {int dummy; } ;
struct bfad_itnim_data_s {struct bfad_itnim_s* itnim; } ;
struct bfad_ioim_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ queue_depth; struct bfad_itnim_data_s* hostdata; int * host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bfad_itnim_s*,TYPE_1__*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

void
FUNC_4(void *VAR_3, struct bfad_ioim_s *VAR_4)
{
 struct scsi_cmnd *VAR_5 = (struct scsi_cmnd *)VAR_4;
 struct bfad_itnim_data_s *VAR_6;
 struct bfad_itnim_s *VAR_7;

 VAR_5->result = FUNC_0(VAR_0, VAR_1);


 if (VAR_5->device->host != ((void*)0))
  FUNC_2(VAR_5);

 VAR_5->host_scribble = ((void*)0);


 if (VAR_2 > VAR_5->device->queue_depth) {
  VAR_6 = VAR_5->device->hostdata;
  if (VAR_6) {
   VAR_7 = VAR_6->itnim;
   if (VAR_7)
    FUNC_1(VAR_7, VAR_5->device);
  }
 }

 VAR_5->scsi_done(VAR_5);
}
