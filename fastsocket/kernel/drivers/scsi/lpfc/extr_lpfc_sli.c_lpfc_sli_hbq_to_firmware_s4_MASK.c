
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lpfc_rqe {void* address_hi; void* address_lo; } ;
struct TYPE_6__ {int dat_rq; int hdr_rq; } ;
struct lpfc_hba {TYPE_4__* hbqs; TYPE_2__ sli4_hba; } ;
struct TYPE_7__ {int list; int phys; } ;
struct TYPE_5__ {int phys; } ;
struct hbq_dmabuf {int tag; TYPE_3__ dbuf; TYPE_1__ hbuf; } ;
struct TYPE_8__ {int hbq_buffer_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,struct lpfc_rqe*,struct lpfc_rqe*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_0, uint32_t VAR_1,
       struct hbq_dmabuf *VAR_2)
{
 int VAR_3;
 struct lpfc_rqe VAR_4;
 struct lpfc_rqe VAR_5;

 VAR_4.address_lo = FUNC_3(VAR_2->hbuf.phys);
 VAR_4.address_hi = FUNC_2(VAR_2->hbuf.phys);
 VAR_5.address_lo = FUNC_3(VAR_2->dbuf.phys);
 VAR_5.address_hi = FUNC_2(VAR_2->dbuf.phys);
 VAR_3 = FUNC_1(VAR_0->sli4_hba.hdr_rq, VAR_0->sli4_hba.dat_rq,
         &VAR_4, &VAR_5);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_2->tag = VAR_3;
 FUNC_0(&VAR_2->dbuf.list, &VAR_0->hbqs[VAR_1].hbq_buffer_list);
 return 0;
}
