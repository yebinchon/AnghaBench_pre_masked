
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tm {int opcode; int flags; int refcmdsn; int rtt; int lun; } ;
struct iscsi_task {int cmdsn; int hdr_itt; int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iscsi_tm*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct iscsi_task *VAR_5,
          struct iscsi_tm *VAR_6)
{
 FUNC_0(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->opcode = VAR_3 | VAR_2;
 VAR_6->flags = VAR_4 & VAR_1;
 VAR_6->flags |= VAR_0;
 VAR_6->lun = VAR_5->lun;
 VAR_6->rtt = VAR_5->hdr_itt;
 VAR_6->refcmdsn = VAR_5->cmdsn;
}
