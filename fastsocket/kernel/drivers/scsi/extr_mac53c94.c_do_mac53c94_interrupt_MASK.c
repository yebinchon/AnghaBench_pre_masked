
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsc_state {TYPE_2__* current_req; } ;
struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 unsigned long VAR_3;
 struct Scsi_Host *VAR_4 = ((struct fsc_state *) VAR_2)->current_req->device->host;

 FUNC_1(VAR_4->host_lock, VAR_3);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2(VAR_4->host_lock, VAR_3);
 return VAR_0;
}
