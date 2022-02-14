
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct ehca_cq {int cq_number; TYPE_1__ ib_cq; int mm_count_queue; int ipz_queue; int mm_count_galpa; int galpas; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (struct vm_area_struct*,int *,int *) ;
 int FUNC_3 (struct vm_area_struct*,int *,int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct vm_area_struct *VAR_1, struct ehca_cq *VAR_2,
   u32 VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 0:
  FUNC_0(VAR_2->ib_cq.device, "cq_num=%x fw", VAR_2->cq_number);
  VAR_4 = FUNC_2(VAR_1, &VAR_2->galpas, &VAR_2->mm_count_galpa);
  if (FUNC_4(VAR_4)) {
   FUNC_1(VAR_2->ib_cq.device,
     "ehca_mmap_fw() failed rc=%i cq_num=%x",
     VAR_4, VAR_2->cq_number);
   return VAR_4;
  }
  break;

 case 1:
  FUNC_0(VAR_2->ib_cq.device, "cq_num=%x queue", VAR_2->cq_number);
  VAR_4 = FUNC_3(VAR_1, &VAR_2->ipz_queue, &VAR_2->mm_count_queue);
  if (FUNC_4(VAR_4)) {
   FUNC_1(VAR_2->ib_cq.device,
     "ehca_mmap_queue() failed rc=%i cq_num=%x",
     VAR_4, VAR_2->cq_number);
   return VAR_4;
  }
  break;

 default:
  FUNC_1(VAR_2->ib_cq.device, "bad resource type=%x cq_num=%x",
    VAR_3, VAR_2->cq_number);
  return -VAR_0;
 }

 return 0;
}
