
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int adapter_t ;
struct TYPE_8__ {TYPE_2__* device; } ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;
typedef TYPE_3__ Scsi_Cmnd ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_2(Scsi_Cmnd *VAR_1)
{
 adapter_t *VAR_2;
 int VAR_3;

 VAR_2 = (adapter_t *)VAR_1->device->host->hostdata;

 VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_0);





 FUNC_0(VAR_2);

 return VAR_3;
}
