
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int vendorUnique; int lsRjtRsnCodeExp; int lsRjtRsnCode; int lsRjtRsvd0; } ;
struct TYPE_10__ {int lsRjtError; TYPE_3__ b; } ;
struct ls_rjt {TYPE_4__ un; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_7__ {int remoteID; } ;
struct TYPE_8__ {TYPE_1__ elsreq64; } ;
struct TYPE_12__ {TYPE_2__ un; } ;
struct lpfc_iocbq {scalar_t__ context2; TYPE_6__ iocb; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_11__ {int Format; } ;
typedef TYPE_5__ RNID ;
typedef TYPE_6__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_1 (struct lpfc_vport*,int,struct lpfc_iocbq*,struct lpfc_nodelist*) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_2, struct lpfc_iocbq *VAR_3,
    struct lpfc_nodelist *VAR_4)
{
 struct lpfc_dmabuf *VAR_5;
 uint32_t *VAR_6;
 IOCB_t *VAR_7;
 RNID *VAR_8;
 struct ls_rjt VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_7 = &VAR_3->iocb;
 VAR_11 = VAR_7->un.elsreq64.remoteID;
 VAR_5 = (struct lpfc_dmabuf *) VAR_3->context2;
 VAR_6 = (uint32_t *) VAR_5->virt;

 VAR_10 = *VAR_6++;
 VAR_8 = (RNID *) VAR_6;



 switch (VAR_8->Format) {
 case 0:
 case 128:

  FUNC_1(VAR_2, VAR_8->Format, VAR_3, VAR_4);
  break;
 default:

  VAR_9.un.b.lsRjtRsvd0 = 0;
  VAR_9.un.b.lsRjtRsnCode = VAR_1;
  VAR_9.un.b.lsRjtRsnCodeExp = VAR_0;
  VAR_9.un.b.vendorUnique = 0;
  FUNC_0(VAR_2, VAR_9.un.lsRjtError, VAR_3, VAR_4,
   ((void*)0));
 }
 return 0;
}
