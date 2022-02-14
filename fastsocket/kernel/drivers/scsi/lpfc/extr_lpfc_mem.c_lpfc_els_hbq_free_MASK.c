
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {int lpfc_hbq_pool; } ;
struct TYPE_2__ {int phys; int virt; } ;
struct hbq_dmabuf {TYPE_1__ dbuf; } ;


 int FUNC_0 (struct hbq_dmabuf*) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(struct lpfc_hba *VAR_0, struct hbq_dmabuf *VAR_1)
{
 FUNC_1(VAR_0->lpfc_hbq_pool, VAR_1->dbuf.virt, VAR_1->dbuf.phys);
 FUNC_0(VAR_1);
 return;
}
