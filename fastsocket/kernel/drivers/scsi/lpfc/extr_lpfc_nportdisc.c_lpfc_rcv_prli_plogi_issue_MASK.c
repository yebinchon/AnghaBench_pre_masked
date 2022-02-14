
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_4__ {int lsRjtError; TYPE_1__ b; } ;
struct ls_rjt {TYPE_2__ un; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_state; } ;
struct lpfc_iocbq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_1 (struct ls_rjt*,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct lpfc_vport *VAR_2, struct lpfc_nodelist *VAR_3,
     void *VAR_4, uint32_t VAR_5)
{
 struct lpfc_iocbq *VAR_6 = (struct lpfc_iocbq *) VAR_4;
 struct ls_rjt VAR_7;

 FUNC_1(&VAR_7, 0, sizeof (struct ls_rjt));
 VAR_7.un.b.lsRjtRsnCode = VAR_1;
 VAR_7.un.b.lsRjtRsnCodeExp = VAR_0;
 FUNC_0(VAR_2, VAR_7.un.lsRjtError, VAR_6, VAR_3, ((void*)0));
 return VAR_3->nlp_state;
}
