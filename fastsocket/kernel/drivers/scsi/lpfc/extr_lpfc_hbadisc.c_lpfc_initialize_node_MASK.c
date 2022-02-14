
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int phba; } ;
struct TYPE_6__ {unsigned long data; int function; } ;
struct TYPE_5__ {int evt_listp; } ;
struct TYPE_4__ {int evt_listp; } ;
struct lpfc_nodelist {int cmd_qdepth; int cmd_pending; int kref; int nlp_sid; int phba; struct lpfc_vport* vport; int nlp_DID; TYPE_3__ nlp_delayfunc; TYPE_2__ dev_loss_evt; TYPE_1__ els_retry_evt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_5(struct lpfc_vport *VAR_3, struct lpfc_nodelist *VAR_4,
 uint32_t VAR_5)
{
 FUNC_0(&VAR_4->els_retry_evt.evt_listp);
 FUNC_0(&VAR_4->dev_loss_evt.evt_listp);
 FUNC_3(&VAR_4->nlp_delayfunc);
 VAR_4->nlp_delayfunc.function = VAR_2;
 VAR_4->nlp_delayfunc.data = (unsigned long)VAR_4;
 VAR_4->nlp_DID = VAR_5;
 VAR_4->vport = VAR_3;
 VAR_4->phba = VAR_3->phba;
 VAR_4->nlp_sid = VAR_1;
 FUNC_4(&VAR_4->kref);
 FUNC_1(VAR_4);
 FUNC_2(&VAR_4->cmd_pending, 0);
 VAR_4->cmd_qdepth = VAR_0;
}
