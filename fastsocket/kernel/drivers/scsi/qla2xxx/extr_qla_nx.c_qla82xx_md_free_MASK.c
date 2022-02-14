
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {int md_template_size; int md_dump_size; int * md_dump; int * md_tmplt_hdr; int md_tmplt_hdr_dma; TYPE_1__* pdev; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int,char*,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void
FUNC_3(scsi_qla_host_t *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;


 if (VAR_2->md_tmplt_hdr) {
  FUNC_1(VAR_0, VAR_1, 0xb048,
      "Free MiniDump template: %p, size (%d KB)\n",
      VAR_2->md_tmplt_hdr, VAR_2->md_template_size / 1024);
  FUNC_0(&VAR_2->pdev->dev, VAR_2->md_template_size,
      VAR_2->md_tmplt_hdr, VAR_2->md_tmplt_hdr_dma);
  VAR_2->md_tmplt_hdr = ((void*)0);
 }


 if (VAR_2->md_dump) {
  FUNC_1(VAR_0, VAR_1, 0xb049,
      "Free MiniDump memory: %p, size (%d KB)\n",
      VAR_2->md_dump, VAR_2->md_dump_size / 1024);
  FUNC_2(VAR_2->md_dump);
  VAR_2->md_dump_size = 0;
  VAR_2->md_dump = ((void*)0);
 }
}
