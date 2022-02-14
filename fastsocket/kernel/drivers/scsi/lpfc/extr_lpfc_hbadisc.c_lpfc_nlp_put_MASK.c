
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
 scalar_t__ FUNC_1 (struct lpfc_nodelist*) ;
 scalar_t__ FUNC_2 (struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_nodelist*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,int ,char*,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int ,char*,void*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

int
FUNC_11(struct lpfc_nodelist *VAR_4)
{
 struct lpfc_hba *VAR_5;
 unsigned long VAR_6;

 if (!VAR_4)
  return 1;

 FUNC_7(VAR_4->vport, VAR_2,
 "node put:        did:x%x flg:x%x refcnt:x%x",
  VAR_4->nlp_DID, VAR_4->nlp_flag,
  FUNC_5(&VAR_4->kref.refcount));
 VAR_5 = VAR_4->phba;
 FUNC_9(&VAR_5->ndlp_lock, VAR_6);




 if (FUNC_0(VAR_4)) {
  FUNC_10(&VAR_5->ndlp_lock, VAR_6);
  FUNC_8(VAR_4->vport, VAR_0, VAR_1,
    "0274 lpfc_nlp_put: ndlp:x%p "
    "usgmap:x%x refcnt:%d\n",
    (void *)VAR_4, VAR_4->nlp_usg_map,
    FUNC_5(&VAR_4->kref.refcount));
  return 1;
 }




 if (FUNC_2(VAR_4)) {
  FUNC_10(&VAR_5->ndlp_lock, VAR_6);
  FUNC_8(VAR_4->vport, VAR_0, VAR_1,
    "0275 lpfc_nlp_put: ndlp:x%p "
    "usgmap:x%x refcnt:%d\n",
    (void *)VAR_4, VAR_4->nlp_usg_map,
    FUNC_5(&VAR_4->kref.refcount));
  return 1;
 }





 if (FUNC_5(&VAR_4->kref.refcount) == 1) {

  FUNC_4(VAR_4);

  if (FUNC_1(VAR_4))
   FUNC_3(VAR_4);
 }
 FUNC_10(&VAR_5->ndlp_lock, VAR_6);






 return FUNC_6(&VAR_4->kref, VAR_3);
}
