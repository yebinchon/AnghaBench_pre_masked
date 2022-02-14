
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_hba {int lpfc_drb_pool; int lpfc_hrb_pool; } ;
struct TYPE_4__ {int phys; int virt; } ;
struct TYPE_3__ {int phys; int virt; } ;
struct hbq_dmabuf {TYPE_2__ dbuf; TYPE_1__ hbuf; } ;


 int FUNC_0 (struct hbq_dmabuf*) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(struct lpfc_hba *VAR_0, struct hbq_dmabuf *VAR_1)
{
 FUNC_1(VAR_0->lpfc_hrb_pool, VAR_1->hbuf.virt, VAR_1->hbuf.phys);
 FUNC_1(VAR_0->lpfc_drb_pool, VAR_1->dbuf.virt, VAR_1->dbuf.phys);
 FUNC_0(VAR_1);
 return;
}
