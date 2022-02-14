
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_vport_identifiers {int dummy; } ;
struct fc_vport {int dummy; } ;
struct Scsi_Host {int shost_gendev; } ;


 int FUNC_0 (struct Scsi_Host*,int,int *,struct fc_vport_identifiers*,struct fc_vport**) ;

struct fc_vport *
FUNC_1(struct Scsi_Host *VAR_0, int VAR_1,
 struct fc_vport_identifiers *VAR_2)
{
 int VAR_3;
 struct fc_vport *VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_0->shost_gendev,
   VAR_2, &VAR_4);
 return VAR_3 ? ((void*)0) : VAR_4;
}
