
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_portname; int nlp_nodename; } ;
struct lpfc_name {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct lpfc_name*,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_vport *VAR_1, struct lpfc_nodelist *VAR_2,
   struct lpfc_name *VAR_3, struct lpfc_name *VAR_4)
{

 if (!(VAR_2->nlp_flag & VAR_0))
  return 0;




 if (FUNC_0(VAR_3, &VAR_2->nlp_nodename, sizeof (struct lpfc_name)))
  return 0;

 if (FUNC_0(VAR_4, &VAR_2->nlp_portname, sizeof (struct lpfc_name)))
  return 0;


 return 1;
}
