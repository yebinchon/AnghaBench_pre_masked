
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int * hostdata; } ;
struct mptfc_rport_info {int * starget; } ;
struct fc_rport {scalar_t__ dd_data; } ;


 int FUNC_0 (int *) ;
 struct fc_rport* FUNC_1 (struct scsi_target*) ;

__attribute__((used)) static void
FUNC_2(struct scsi_target *VAR_0)
{
 struct fc_rport *VAR_1;
 struct mptfc_rport_info *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  VAR_2 = *((struct mptfc_rport_info **)VAR_1->dd_data);
  if (VAR_2)
   VAR_2->starget = ((void*)0);
 }
 if (VAR_0->hostdata)
  FUNC_0(VAR_0->hostdata);
 VAR_0->hostdata = ((void*)0);
}
