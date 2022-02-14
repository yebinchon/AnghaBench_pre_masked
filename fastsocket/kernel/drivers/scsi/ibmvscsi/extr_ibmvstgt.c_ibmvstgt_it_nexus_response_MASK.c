
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vio_port {int * rport; } ;
struct srp_target {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (char*,struct Scsi_Host*,int) ;
 struct srp_target* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int *) ;
 struct vio_port* FUNC_3 (struct srp_target*) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_0, u64 VAR_1,
          int VAR_2)
{
 struct srp_target *VAR_3 = FUNC_1(VAR_0);
 struct vio_port *VAR_4 = FUNC_3(VAR_3);

 if (VAR_2) {
  FUNC_0("%p %d\n", VAR_0, VAR_2);
  FUNC_2(VAR_4->rport);
  VAR_4->rport = ((void*)0);
 }
 return 0;
}
