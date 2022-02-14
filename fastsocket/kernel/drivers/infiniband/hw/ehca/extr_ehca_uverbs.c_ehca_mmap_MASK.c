
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vm_area_struct {int vm_pgoff; } ;
struct ib_uobject {struct ib_ucontext* context; } ;
struct ib_ucontext {int dummy; } ;
struct TYPE_8__ {int qp_num; int device; struct ib_uobject* uobject; } ;
struct TYPE_7__ {struct ib_uobject* uobject; } ;
struct ehca_qp {TYPE_4__ ib_qp; TYPE_3__ ib_srq; } ;
struct TYPE_6__ {int device; TYPE_1__* uobject; } ;
struct ehca_cq {int cq_number; TYPE_2__ ib_cq; } ;
struct TYPE_5__ {struct ib_ucontext* context; } ;


 int VAR_0 ;
 int FUNC_0 (struct ehca_qp*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct vm_area_struct*,struct ehca_cq*,int) ;
 int FUNC_4 (struct vm_area_struct*,struct ehca_qp*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;

int FUNC_9(struct ib_ucontext *VAR_5, struct vm_area_struct *VAR_6)
{
 u64 VAR_7 = VAR_6->vm_pgoff;
 u32 VAR_8 = VAR_7 & 0x1FFFFFF;
 u32 VAR_9 = (VAR_7 >> 27) & 0x1;
 u32 VAR_10 = (VAR_7 >> 25) & 0x3;
 u32 VAR_11;
 struct ehca_cq *VAR_12;
 struct ehca_qp *VAR_13;
 struct ib_uobject *VAR_14;

 switch (VAR_9) {
 case 0:
  FUNC_6(&VAR_2);
  VAR_12 = FUNC_5(&VAR_1, VAR_8);
  FUNC_7(&VAR_2);


  if (!VAR_12)
   return -VAR_0;

  if (!VAR_12->ib_cq.uobject || VAR_12->ib_cq.uobject->context != VAR_5)
   return -VAR_0;

  VAR_11 = FUNC_3(VAR_6, VAR_12, VAR_10);
  if (FUNC_8(VAR_11)) {
   FUNC_1(VAR_12->ib_cq.device,
     "ehca_mmap_cq() failed rc=%i cq_num=%x",
     VAR_11, VAR_12->cq_number);
   return VAR_11;
  }
  break;

 case 1:
  FUNC_6(&VAR_4);
  VAR_13 = FUNC_5(&VAR_3, VAR_8);
  FUNC_7(&VAR_4);


  if (!VAR_13)
   return -VAR_0;

  VAR_14 = FUNC_0(VAR_13) ? VAR_13->ib_srq.uobject : VAR_13->ib_qp.uobject;
  if (!VAR_14 || VAR_14->context != VAR_5)
   return -VAR_0;

  VAR_11 = FUNC_4(VAR_6, VAR_13, VAR_10);
  if (FUNC_8(VAR_11)) {
   FUNC_1(VAR_13->ib_qp.device,
     "ehca_mmap_qp() failed rc=%i qp_num=%x",
     VAR_11, VAR_13->ib_qp.qp_num);
   return VAR_11;
  }
  break;

 default:
  FUNC_2("bad queue type %x", VAR_9);
  return -VAR_0;
 }

 return 0;
}
