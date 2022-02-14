
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct fc_internal {TYPE_1__* f; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_2__ {int (* it_nexus_response ) (struct Scsi_Host*,int ,int) ;} ;


 int FUNC_0 (struct Scsi_Host*,int ,int) ;
 struct fc_internal* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_0, u64 VAR_1, int VAR_2)
{
 struct fc_internal *VAR_3 = FUNC_1(VAR_0->transportt);
 return VAR_3->f->it_nexus_response(VAR_0, VAR_1, VAR_2);
}
