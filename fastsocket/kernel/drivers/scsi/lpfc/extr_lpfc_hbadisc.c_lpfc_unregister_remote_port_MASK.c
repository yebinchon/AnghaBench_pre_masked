
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_nodelist {int nlp_DID; int vport; int nlp_type; int nlp_flag; struct fc_rport* rport; } ;
struct fc_rport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int ,struct fc_rport*) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_nodelist *VAR_3)
{
 struct fc_rport *VAR_4 = VAR_3->rport;

 FUNC_1(VAR_3->vport, VAR_2,
  "rport delete:    did:x%x flg:x%x type x%x",
  VAR_3->nlp_DID, VAR_3->nlp_flag, VAR_3->nlp_type);

 FUNC_2(VAR_3->vport, VAR_0, VAR_1,
    "3184 rport unregister x%06x, rport %p\n",
    VAR_3->nlp_DID, VAR_4);

 FUNC_0(VAR_4);

 return;
}
