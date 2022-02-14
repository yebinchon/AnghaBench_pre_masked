
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int result; scalar_t__ host_scribble; TYPE_1__* device; } ;
struct mscp {void (* done ) (struct scsi_cmnd*) ;struct scsi_cmnd* SCint; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {int slot; int icm_address; int ogm_address; struct mscp* mscp; int doorbell_address; int * aborted; } ;
struct TYPE_4__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct mscp*) ;
 int FUNC_6 (TYPE_2__*,unsigned int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 unsigned char FUNC_16 (int,int *) ;

__attribute__((used)) static int FUNC_17(struct scsi_cmnd *VAR_5)
{





    unsigned int VAR_6;
    unsigned char VAR_7;
    unsigned long VAR_8;
    void (*VAR_9)(struct scsi_cmnd *);
    struct Scsi_Host *VAR_10 = VAR_5->device->host;

    if(VAR_4.slot)
      return VAR_1;


    if(!VAR_5->host_scribble)
      return VAR_1;

    VAR_6 = ((struct mscp *)VAR_5->host_scribble) - VAR_4.mscp;
    if (VAR_6 >= VAR_3)
 FUNC_9("Ux4F aborting invalid MSCP");
    VAR_7 = FUNC_16(VAR_0, &VAR_4.aborted[VAR_6]);



    if (VAR_7 == 0xff)
 return VAR_2;



    if (VAR_4.slot && FUNC_2(VAR_4.ogm_address - 1) == 0)
      {
 unsigned long VAR_11;

 FUNC_11(VAR_10->host_lock, VAR_11);
 FUNC_8(FUNC_5(&VAR_4.mscp[VAR_6]), VAR_4.ogm_address);
 FUNC_14(8);
 FUNC_7(0x80, VAR_4.ogm_address - 1);
 FUNC_7(0x2, FUNC_0(VAR_4.doorbell_address));




 FUNC_12(VAR_10->host_lock, VAR_11);

 return VAR_2;
      }
    if (VAR_4.mscp[VAR_6].SCint == ((void*)0))
 return VAR_1;

    if (VAR_4.mscp[VAR_6].SCint != VAR_5) FUNC_9("Bad abort");
    VAR_4.mscp[VAR_6].SCint = ((void*)0);
    VAR_9 = VAR_4.mscp[VAR_6].done;
    VAR_4.mscp[VAR_6].done = ((void*)0);
    VAR_5->result = VAR_0 << 16;


    VAR_9(VAR_5);


    return VAR_2;
}
