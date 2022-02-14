
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {int qp_num; int device; } ;
struct ehca_qp {TYPE_1__ ib_qp; int mm_count_squeue; int ipz_squeue; int mm_count_rqueue; int ipz_rqueue; int mm_count_galpa; int galpas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (struct vm_area_struct*,int *,int *) ;
 int FUNC_3 (struct vm_area_struct*,int *,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_2, struct ehca_qp *VAR_3,
   u32 VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 0:
  FUNC_0(VAR_3->ib_qp.device, "qp_num=%x fw", VAR_3->ib_qp.qp_num);
  VAR_5 = FUNC_2(VAR_2, &VAR_3->galpas, &VAR_3->mm_count_galpa);
  if (FUNC_4(VAR_5)) {
   FUNC_1(VAR_3->ib_qp.device,
     "remap_pfn_range() failed ret=%i qp_num=%x",
     VAR_5, VAR_3->ib_qp.qp_num);
   return -VAR_1;
  }
  break;

 case 1:
  FUNC_0(VAR_3->ib_qp.device, "qp_num=%x rq", VAR_3->ib_qp.qp_num);
  VAR_5 = FUNC_3(VAR_2, &VAR_3->ipz_rqueue,
          &VAR_3->mm_count_rqueue);
  if (FUNC_4(VAR_5)) {
   FUNC_1(VAR_3->ib_qp.device,
     "ehca_mmap_queue(rq) failed rc=%i qp_num=%x",
     VAR_5, VAR_3->ib_qp.qp_num);
   return VAR_5;
  }
  break;

 case 2:
  FUNC_0(VAR_3->ib_qp.device, "qp_num=%x sq", VAR_3->ib_qp.qp_num);
  VAR_5 = FUNC_3(VAR_2, &VAR_3->ipz_squeue,
          &VAR_3->mm_count_squeue);
  if (FUNC_4(VAR_5)) {
   FUNC_1(VAR_3->ib_qp.device,
     "ehca_mmap_queue(sq) failed rc=%i qp_num=%x",
     VAR_5, VAR_3->ib_qp.qp_num);
   return VAR_5;
  }
  break;

 default:
  FUNC_1(VAR_3->ib_qp.device, "bad resource type=%x qp=num=%x",
    VAR_4, VAR_3->ib_qp.qp_num);
  return -VAR_0;
 }

 return 0;
}
