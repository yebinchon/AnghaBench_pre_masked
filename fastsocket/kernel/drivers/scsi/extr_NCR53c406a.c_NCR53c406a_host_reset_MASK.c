
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* device; } ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {int host_lock; } ;
typedef TYPE_3__ Scsi_Cmnd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(Scsi_Cmnd * VAR_7)
{
 FUNC_0(FUNC_3("NCR53c406a_reset called\n"));

 FUNC_5(VAR_7->device->host->host_lock);

 FUNC_2(VAR_0, VAR_3);
 FUNC_2(VAR_1, VAR_2);
 FUNC_2(VAR_4, VAR_2);
 FUNC_2(VAR_5, VAR_2);
 FUNC_1();

 FUNC_4(2);

 FUNC_6(VAR_7->device->host->host_lock);

 return VAR_6;
}
