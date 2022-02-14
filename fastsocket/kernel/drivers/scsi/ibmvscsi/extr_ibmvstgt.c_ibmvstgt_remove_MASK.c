
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_port {int dummy; } ;
struct vio_dev {int dev; } ;
struct srp_target {struct vio_port* ldata; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct srp_target*) ;
 struct srp_target* FUNC_1 (int *) ;
 int FUNC_2 (struct vio_port*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (struct srp_target*) ;

__attribute__((used)) static int FUNC_8(struct vio_dev *VAR_0)
{
 struct srp_target *VAR_1 = FUNC_1(&VAR_0->dev);
 struct Scsi_Host *VAR_2 = VAR_1->shost;
 struct vio_port *VAR_3 = VAR_1->ldata;

 FUNC_0(VAR_1);
 FUNC_6(VAR_2);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_7(VAR_1);
 FUNC_2(VAR_3);
 FUNC_3(VAR_2);
 return 0;
}
