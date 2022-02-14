
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int load_flag; scalar_t__ num_disc_nodes; scalar_t__ fc_ns_retry; int port_state; int fc_rscn_id_cnt; int fc_flag; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; scalar_t__ nlp_prev_state; int nlp_type; } ;
struct lpfc_hba {int nlp_mem_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,int ) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 scalar_t__ FUNC_7 (struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_8 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_9 (struct lpfc_vport*) ;
 struct lpfc_nodelist* FUNC_10 (int ,int ) ;

int
FUNC_11(struct lpfc_vport *VAR_10)
{
 struct lpfc_nodelist *VAR_11;
 struct lpfc_hba *VAR_12 = VAR_10->phba;


 if (VAR_10->load_flag & VAR_0) {
  FUNC_1(VAR_10);
  return 0;
 }


 FUNC_9(VAR_10);


 FUNC_8(VAR_10, VAR_2, VAR_3,
    "0215 RSCN processed Data: x%x x%x x%x x%x\n",
    VAR_10->fc_flag, 0, VAR_10->fc_rscn_id_cnt,
    VAR_10->port_state);


 VAR_10->fc_ns_retry = 0;
 VAR_10->num_disc_nodes = 0;

 VAR_11 = FUNC_3(VAR_10, VAR_8);
 if (VAR_11 && FUNC_0(VAR_11)
     && VAR_11->nlp_state == VAR_6) {

  if (FUNC_7(VAR_10, VAR_9, 0, 0) == 0)


   return 1;
 } else {


  VAR_11 = FUNC_3(VAR_10, VAR_8);
  if (VAR_11 && FUNC_0(VAR_11))


   return 1;

  if (VAR_11) {
   VAR_11 = FUNC_2(VAR_10, VAR_11,
      VAR_5);
   if (!VAR_11) {
    FUNC_1(VAR_10);
    return 0;
   }
   VAR_11->nlp_prev_state = VAR_7;
  } else {
   VAR_11 = FUNC_10(VAR_12->nlp_mem_pool, VAR_1);
   if (!VAR_11) {
    FUNC_1(VAR_10);
    return 0;
   }
   FUNC_5(VAR_10, VAR_11, VAR_8);
   VAR_11->nlp_prev_state = VAR_11->nlp_state;
   FUNC_6(VAR_10, VAR_11, VAR_5);
  }
  VAR_11->nlp_type |= VAR_4;
  FUNC_4(VAR_10, VAR_8, 0);



  return 1;
 }

 FUNC_1(VAR_10);
 return 0;
}
