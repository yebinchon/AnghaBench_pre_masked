
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct scsi_target {TYPE_1__ dev; } ;
struct ibmvfc_target {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 struct ibmvfc_target* FUNC_0 (struct scsi_target*) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static struct ibmvfc_target *FUNC_4(struct scsi_target *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0->dev.parent);
 struct ibmvfc_target *VAR_2;
 unsigned long VAR_3;

 FUNC_2(VAR_1->host_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(VAR_1->host_lock, VAR_3);
 return VAR_2;
}
