
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_2__ {int refcount; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_rpi; TYPE_1__ kref; int nlp_usg_map; } ;
struct lpfc_hba {scalar_t__ sli_rev; int ndlp_lock; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ FUNC_1 (struct lpfc_nodelist*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int) ;
 int FUNC_6 (struct lpfc_vport*,int ,int ,char*,void*,int ,int ) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

struct lpfc_nodelist *
FUNC_11(struct lpfc_vport *VAR_5, struct lpfc_nodelist *VAR_6,
   int VAR_7)
{
 struct lpfc_hba *VAR_8 = VAR_5->phba;
 uint32_t VAR_9;
 unsigned long VAR_10;

 if (!VAR_6)
  return ((void*)0);

 FUNC_9(&VAR_8->ndlp_lock, VAR_10);

 if (FUNC_0(VAR_6)) {
  FUNC_10(&VAR_8->ndlp_lock, VAR_10);
  FUNC_6(VAR_5, VAR_0, VAR_1,
    "0277 lpfc_enable_node: ndlp:x%p "
    "usgmap:x%x refcnt:%d\n",
    (void *)VAR_6, VAR_6->nlp_usg_map,
    FUNC_2(&VAR_6->kref.refcount));
  return ((void*)0);
 }

 if (FUNC_1(VAR_6)) {
  FUNC_10(&VAR_8->ndlp_lock, VAR_10);
  FUNC_6(VAR_5, VAR_0, VAR_1,
    "0278 lpfc_enable_node: ndlp:x%p "
    "usgmap:x%x refcnt:%d\n",
    (void *)VAR_6, VAR_6->nlp_usg_map,
    FUNC_2(&VAR_6->kref.refcount));
  return ((void*)0);
 }


 VAR_9 = VAR_6->nlp_DID;


 FUNC_8((((char *)VAR_6) + sizeof (struct list_head)), 0,
  sizeof (struct lpfc_nodelist) - sizeof (struct list_head));
 FUNC_4(VAR_5, VAR_6, VAR_9);

 FUNC_10(&VAR_8->ndlp_lock, VAR_10);
 if (VAR_5->phba->sli_rev == VAR_3)
  VAR_6->nlp_rpi = FUNC_7(VAR_5->phba);


 if (VAR_7 != VAR_4)
  FUNC_5(VAR_5, VAR_6, VAR_7);

 FUNC_3(VAR_5, VAR_2,
  "node enable:       did:x%x",
  VAR_6->nlp_DID, 0, 0);
 return VAR_6;
}
