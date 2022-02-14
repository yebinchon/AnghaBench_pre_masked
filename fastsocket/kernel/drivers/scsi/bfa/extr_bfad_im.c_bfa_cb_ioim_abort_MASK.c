
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int * host_scribble; int result; TYPE_1__* device; } ;
struct bfad_s {int dummy; } ;
struct bfad_ioim_s {int dummy; } ;
struct TYPE_2__ {int * host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;

void
FUNC_3(void *VAR_1, struct bfad_ioim_s *VAR_2)
{
 struct scsi_cmnd *VAR_3 = (struct scsi_cmnd *)VAR_2;
 struct bfad_s *VAR_4 = VAR_1;

 VAR_3->result = FUNC_0(VAR_0, 0);


 if (VAR_3->device->host != ((void*)0))
  FUNC_2(VAR_3);

 FUNC_1(VAR_4, VAR_3->result);
 VAR_3->host_scribble = ((void*)0);
}
