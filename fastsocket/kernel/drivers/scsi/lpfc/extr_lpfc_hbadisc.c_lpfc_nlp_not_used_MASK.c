
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; } ;
struct lpfc_nodelist {TYPE_1__ kref; int nlp_flag; int nlp_DID; int vport; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct lpfc_nodelist*) ;

int
FUNC_3(struct lpfc_nodelist *VAR_1)
{
 FUNC_1(VAR_1->vport, VAR_0,
  "node not used:   did:x%x flg:x%x refcnt:x%x",
  VAR_1->nlp_DID, VAR_1->nlp_flag,
  FUNC_0(&VAR_1->kref.refcount));
 if (FUNC_0(&VAR_1->kref.refcount) == 1)
  if (FUNC_2(VAR_1))
   return 1;
 return 0;
}
