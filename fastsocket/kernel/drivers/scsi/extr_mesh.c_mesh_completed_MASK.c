
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct mesh_state {int dummy; } ;


 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(struct mesh_state *VAR_0, struct scsi_cmnd *VAR_1)
{
 (*VAR_1->scsi_done)(VAR_1);
}
