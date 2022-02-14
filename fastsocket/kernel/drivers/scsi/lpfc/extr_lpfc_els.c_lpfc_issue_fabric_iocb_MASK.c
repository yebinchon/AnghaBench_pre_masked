
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_iocbq {int list; int iocb_flag; int * fabric_iocb_cmpl; int * iocb_cmpl; TYPE_1__* vport; } ;
struct lpfc_hba {int hbalock; int fabric_iocb_list; int fabric_iocb_count; int bit_flags; } ;
struct TYPE_2__ {int port_state; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * VAR_6 ;
 int FUNC_5 (TYPE_1__*,int ,char*,int ,int ,int ) ;
 int FUNC_6 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int
FUNC_10(struct lpfc_hba *VAR_7, struct lpfc_iocbq *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11;

 if (FUNC_3(&VAR_7->fabric_iocb_count) > 1)
  FUNC_0();

 FUNC_7(&VAR_7->hbalock, VAR_9);
 VAR_10 = FUNC_3(&VAR_7->fabric_iocb_count) == 0 &&
  !FUNC_9(VAR_0, &VAR_7->bit_flags);

 if (VAR_10)

  FUNC_2(&VAR_7->fabric_iocb_count);
 FUNC_8(&VAR_7->hbalock, VAR_9);
 if (VAR_10) {
  VAR_8->fabric_iocb_cmpl = VAR_8->iocb_cmpl;
  VAR_8->iocb_cmpl = VAR_6;
  VAR_8->iocb_flag |= VAR_5;

  FUNC_5(VAR_8->vport, VAR_3,
   "Fabric sched2:   ste:x%x",
   VAR_8->vport->port_state, 0, 0);

  VAR_11 = FUNC_6(VAR_7, VAR_4, VAR_8, 0);

  if (VAR_11 == VAR_1) {
   VAR_8->iocb_cmpl = VAR_8->fabric_iocb_cmpl;
   VAR_8->fabric_iocb_cmpl = ((void*)0);
   VAR_8->iocb_flag &= ~VAR_5;
   FUNC_1(&VAR_7->fabric_iocb_count);
  }
 } else {
  FUNC_7(&VAR_7->hbalock, VAR_9);
  FUNC_4(&VAR_8->list, &VAR_7->fabric_iocb_list);
  FUNC_8(&VAR_7->hbalock, VAR_9);
  VAR_11 = VAR_2;
 }
 return VAR_11;
}
