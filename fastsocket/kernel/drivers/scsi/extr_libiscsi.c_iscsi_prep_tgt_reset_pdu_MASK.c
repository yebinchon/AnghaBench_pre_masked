
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct iscsi_tm {int opcode; int flags; int rtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iscsi_tm*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_6, struct iscsi_tm *VAR_7)
{
 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->opcode = VAR_3 | VAR_2;
 VAR_7->flags = VAR_4 & VAR_1;
 VAR_7->flags |= VAR_0;
 VAR_7->rtt = VAR_5;
}
