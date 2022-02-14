
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {int next_state; size_t target; int * cdb; scalar_t__ cdblen; int ident; int status; } ;
struct initio_host {scalar_t__ addr; struct scsi_ctrl_blk* active; int * targets; int * active_tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct initio_host * VAR_4, struct scsi_ctrl_blk * VAR_5)
{
 int VAR_6;

 VAR_5->status |= VAR_0;
 VAR_5->next_state = 0x2;

 FUNC_0(VAR_5->ident, VAR_4->addr + VAR_3);
 for (VAR_6 = 0; VAR_6 < (int) VAR_5->cdblen; VAR_6++)
  FUNC_0(VAR_5->cdb[VAR_6], VAR_4->addr + VAR_3);
 VAR_4->active_tc = &VAR_4->targets[VAR_5->target];
 VAR_4->active = VAR_5;
 FUNC_0(VAR_1, VAR_4->addr + VAR_2);
}
