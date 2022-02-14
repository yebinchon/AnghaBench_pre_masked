
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; scalar_t__ lsRjtRsvd0; } ;
struct TYPE_5__ {int lsRjtError; TYPE_1__ b; } ;
struct ls_rjt {TYPE_2__ un; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; } ;
struct lpfc_iocbq {scalar_t__ context2; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_6__ {scalar_t__ index; int maxsize; } ;
typedef int RPL_RSP ;
typedef TYPE_3__ RPL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_2 (struct lpfc_vport*,int,struct lpfc_iocbq*,struct lpfc_nodelist*) ;

__attribute__((used)) static int
FUNC_3(struct lpfc_vport *VAR_4, struct lpfc_iocbq *VAR_5,
   struct lpfc_nodelist *VAR_6)
{
 struct lpfc_dmabuf *VAR_7;
 uint32_t *VAR_8;
 uint32_t VAR_9;
 uint16_t VAR_10;
 RPL *VAR_11;
 struct ls_rjt VAR_12;

 if ((VAR_6->nlp_state != VAR_3) &&
     (VAR_6->nlp_state != VAR_2)) {

  VAR_12.un.b.lsRjtRsvd0 = 0;
  VAR_12.un.b.lsRjtRsnCode = VAR_1;
  VAR_12.un.b.lsRjtRsnCodeExp = VAR_0;
  VAR_12.un.b.vendorUnique = 0;
  FUNC_1(VAR_4, VAR_12.un.lsRjtError, VAR_5, VAR_6,
   ((void*)0));

  return 0;
 }

 VAR_7 = (struct lpfc_dmabuf *) VAR_5->context2;
 VAR_8 = (uint32_t *) VAR_7->virt;
 VAR_11 = (RPL *) (VAR_8 + 1);
 VAR_9 = FUNC_0(VAR_11->maxsize);


 if ((VAR_11->index == 0) &&
     ((VAR_9 == 0) ||
      ((VAR_9 * sizeof(uint32_t)) >= sizeof(RPL_RSP)))) {
  VAR_10 = sizeof(uint32_t) + sizeof(RPL_RSP);
 } else {
  VAR_10 = sizeof(uint32_t) + VAR_9 * sizeof(uint32_t);
 }
 FUNC_2(VAR_4, VAR_10, VAR_5, VAR_6);

 return 0;
}
