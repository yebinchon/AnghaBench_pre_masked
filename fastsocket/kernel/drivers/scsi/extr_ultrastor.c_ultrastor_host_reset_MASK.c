
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_9__ {int mscp_free; scalar_t__ mscp_busy; scalar_t__ aborted; TYPE_2__* mscp; scalar_t__ icm_address; scalar_t__ ogm_address; scalar_t__ slot; int doorbell_address; } ;
struct TYPE_8__ {int result; } ;
struct TYPE_7__ {TYPE_3__* SCint; int (* done ) (TYPE_3__*) ;} ;
struct TYPE_6__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd * VAR_5)
{
    unsigned long VAR_6;
    int VAR_7;
    struct Scsi_Host *VAR_8 = VAR_5->device->host;





    if(VAR_4.slot)
     return VAR_1;

    FUNC_4(VAR_8->host_lock, VAR_6);


    FUNC_2(0xc0, FUNC_0(VAR_4.doorbell_address));
    if (VAR_4.slot)
      {
 FUNC_2(0, VAR_4.ogm_address - 1);
 FUNC_2(0, VAR_4.icm_address - 1);
      }
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
      {
 if (! (VAR_4.mscp_free & (1 << VAR_7)) &&
     VAR_4.mscp[VAR_7].done && VAR_4.mscp[VAR_7].SCint)
   {
     VAR_4.mscp[VAR_7].SCint->result = VAR_0 << 16;
     VAR_4.mscp[VAR_7].done(VAR_4.mscp[VAR_7].SCint);
     VAR_4.mscp[VAR_7].done = ((void*)0);
   }
 VAR_4.mscp[VAR_7].SCint = ((void*)0);
      }
    FUNC_1((unsigned char *)VAR_4.aborted, 0, sizeof VAR_4.aborted);



    VAR_4.mscp_free = ~0;


    FUNC_5(VAR_8->host_lock, VAR_6);
    return VAR_2;

}
