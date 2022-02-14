
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {scalar_t__* hostdata; } ;
struct TYPE_2__ {scalar_t__ detail; } ;
typedef TYPE_1__ adpt_hba ;



__attribute__((used)) static const char *FUNC_0(struct Scsi_Host *VAR_0)
{
 adpt_hba* VAR_1;

 VAR_1 = (adpt_hba *) VAR_0->hostdata[0];
 return (char *) (VAR_1->detail);
}
