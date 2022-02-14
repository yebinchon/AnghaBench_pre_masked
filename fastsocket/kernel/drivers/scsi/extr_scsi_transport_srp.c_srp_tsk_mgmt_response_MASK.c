
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct srp_internal {TYPE_1__* f; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_2__ {int (* tsk_mgmt_response ) (struct Scsi_Host*,int ,int ,int) ;} ;


 int FUNC_0 (struct Scsi_Host*,int ,int ,int) ;
 struct srp_internal* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_0, u64 VAR_1, u64 VAR_2,
     int VAR_3)
{
 struct srp_internal *VAR_4 = FUNC_1(VAR_0->transportt);
 return VAR_4->f->tsk_mgmt_response(VAR_0, VAR_1, VAR_2, VAR_3);
}
