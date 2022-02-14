
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_register {scalar_t__ word0; } ;
struct lpfc_queue {int queue_id; TYPE_2__* phba; } ;
struct TYPE_3__ {int EQCQDBregaddr; } ;
struct TYPE_4__ {TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct lpfc_register*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct lpfc_queue *VAR_6)
{
 struct lpfc_register VAR_7;

 VAR_7.word0 = 0;
 FUNC_0(VAR_2, &VAR_7, 1);
 FUNC_0(VAR_5, &VAR_7, VAR_1);
 FUNC_0(VAR_3, &VAR_7,
  (VAR_6->queue_id >> VAR_0));
 FUNC_0(VAR_4, &VAR_7, VAR_6->queue_id);
 FUNC_1(VAR_7.word0, VAR_6->phba->sli4_hba.EQCQDBregaddr);
}
