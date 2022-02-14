
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; } ;
struct lpfc_nodelist {TYPE_1__ kref; int nlp_usg_map; int vport; struct lpfc_hba* phba; int nlp_flag; int nlp_DID; } ;
struct lpfc_hba {int ndlp_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,char*,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,char*,void*,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

struct lpfc_nodelist *
FUNC_8(struct lpfc_nodelist *VAR_3)
{
 struct lpfc_hba *VAR_4;
 unsigned long VAR_5;

 if (VAR_3) {
  FUNC_4(VAR_3->vport, VAR_2,
   "node get:        did:x%x flg:x%x refcnt:x%x",
   VAR_3->nlp_DID, VAR_3->nlp_flag,
   FUNC_2(&VAR_3->kref.refcount));




  VAR_4 = VAR_3->phba;
  FUNC_6(&VAR_4->ndlp_lock, VAR_5);
  if (!FUNC_1(VAR_3) || FUNC_0(VAR_3)) {
   FUNC_7(&VAR_4->ndlp_lock, VAR_5);
   FUNC_5(VAR_3->vport, VAR_0, VAR_1,
    "0276 lpfc_nlp_get: ndlp:x%p "
    "usgmap:x%x refcnt:%d\n",
    (void *)VAR_3, VAR_3->nlp_usg_map,
    FUNC_2(&VAR_3->kref.refcount));
   return ((void*)0);
  } else
   FUNC_3(&VAR_3->kref);
  FUNC_7(&VAR_4->ndlp_lock, VAR_5);
 }
 return VAR_3;
}
