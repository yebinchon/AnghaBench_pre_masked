
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct Scsi_Host* host; } ;
typedef TYPE_2__ Scsi_Cmnd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(Scsi_Cmnd * VAR_6) {
 struct Scsi_Host *VAR_7 = VAR_6->device->host;
 unsigned long VAR_8;
 FUNC_4(VAR_7->host_lock, VAR_8);

 FUNC_2(1, VAR_1);
 FUNC_0(2);
 FUNC_2(0, VAR_1);
 FUNC_0(115);
 FUNC_2(0, VAR_2);
 FUNC_2(VAR_0, VAR_4);

 FUNC_5(VAR_7->host_lock, VAR_8);




  return VAR_3;
}
