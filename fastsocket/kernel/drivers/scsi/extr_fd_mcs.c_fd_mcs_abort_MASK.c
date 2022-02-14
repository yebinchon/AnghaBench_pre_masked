
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct Scsi_Host {int host_lock; } ;
struct TYPE_7__ {int phase; } ;
struct TYPE_10__ {int result; TYPE_1__ SCp; } ;
struct TYPE_9__ {TYPE_2__* device; } ;
struct TYPE_8__ {struct Scsi_Host* host; } ;
typedef TYPE_3__ Scsi_Cmnd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_2 (struct Scsi_Host*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(Scsi_Cmnd * VAR_6)
{
 struct Scsi_Host *VAR_7 = VAR_6->device->host;

 unsigned long VAR_8;




 FUNC_4(VAR_7->host_lock, VAR_8);
 if (!VAR_5) {



  FUNC_5(VAR_7->host_lock, VAR_8);
  return VAR_1;
 } else
  FUNC_3("\n");





 FUNC_0(VAR_7);

 VAR_4->SCp.phase |= VAR_3;

 VAR_4->result = VAR_0 << 16;


 FUNC_2(VAR_7, VAR_0 << 16);

 FUNC_5(VAR_7->host_lock, VAR_8);
 return VAR_2;
}
