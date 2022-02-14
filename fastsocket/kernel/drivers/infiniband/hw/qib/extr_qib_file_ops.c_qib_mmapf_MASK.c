
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct vm_area_struct {int vm_flags; unsigned int vm_pgoff; scalar_t__ vm_start; scalar_t__ vm_end; int * vm_private_data; } ;
struct qib_devdata {unsigned int uregbase; int ureg_align; unsigned int palign; unsigned int pioavailregs_phys; int pcidev; scalar_t__ pioavailregs_dma; } ;
struct qib_ctxtdata {int ctxt; unsigned int subctxt_cnt; unsigned int piocnt; unsigned int piobufs; unsigned int rcvegr_phys; void* rcvhdrq; void* rcvhdrtail_kvaddr; scalar_t__ rcvhdrqtailaddr_phys; int rcvhdrq_size; scalar_t__ rcvhdrq_phys; struct qib_devdata* dd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qib_ctxtdata* FUNC_0 (struct file*) ;
 int FUNC_1 (struct vm_area_struct*,unsigned int,struct qib_ctxtdata*,int) ;
 int FUNC_2 (struct vm_area_struct*,struct qib_devdata*,struct qib_ctxtdata*,unsigned int,unsigned int) ;
 int FUNC_3 (struct vm_area_struct*,struct qib_ctxtdata*) ;
 int FUNC_4 (struct vm_area_struct*,struct qib_devdata*,unsigned int) ;
 int FUNC_5 (int ,char*,int,unsigned long long,scalar_t__) ;
 int FUNC_6 (struct vm_area_struct*,struct qib_ctxtdata*,int ,void*,int,char*) ;
 int FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 struct qib_ctxtdata *VAR_6;
 struct qib_devdata *VAR_7;
 u64 VAR_8, VAR_9;
 unsigned VAR_10, VAR_11;
 int VAR_12, VAR_13 = 1;

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6 || !(VAR_5->vm_flags & VAR_3)) {
  VAR_12 = -VAR_0;
  goto bail;
 }
 VAR_7 = VAR_6->dd;
 VAR_8 = VAR_5->vm_pgoff << VAR_1;





 if (!VAR_8) {
  VAR_12 = -VAR_0;
  goto bail;
 }






 VAR_12 = FUNC_1(VAR_5, VAR_8, VAR_6, FUNC_7(VAR_4));
 if (VAR_12) {
  if (VAR_12 > 0)
   VAR_12 = 0;
  goto bail;
 }

 VAR_9 = VAR_7->uregbase + VAR_7->ureg_align * VAR_6->ctxt;
 if (!VAR_6->subctxt_cnt) {

  VAR_11 = VAR_6->piocnt;
  VAR_10 = VAR_6->piobufs;
 } else if (!FUNC_7(VAR_4)) {

  VAR_11 = (VAR_6->piocnt / VAR_6->subctxt_cnt) +
    (VAR_6->piocnt % VAR_6->subctxt_cnt);
  VAR_10 = VAR_6->piobufs +
   VAR_7->palign * (VAR_6->piocnt - VAR_11);
 } else {
  unsigned VAR_14 = FUNC_7(VAR_4) - 1;


  VAR_11 = VAR_6->piocnt / VAR_6->subctxt_cnt;
  VAR_10 = VAR_6->piobufs + VAR_7->palign * VAR_11 * VAR_14;
 }

 if (VAR_8 == VAR_9)
  VAR_12 = FUNC_4(VAR_5, VAR_7, VAR_9);
 else if (VAR_8 == VAR_10)
  VAR_12 = FUNC_2(VAR_5, VAR_7, VAR_6, VAR_10, VAR_11);
 else if (VAR_8 == VAR_7->pioavailregs_phys)

  VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_2,
       (void *) VAR_7->pioavailregs_dma, 0,
       "pioavail registers");
 else if (VAR_8 == VAR_6->rcvegr_phys)
  VAR_12 = FUNC_3(VAR_5, VAR_6);
 else if (VAR_8 == (u64) VAR_6->rcvhdrq_phys)





  VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_6->rcvhdrq_size,
       VAR_6->rcvhdrq, 1, "rcvhdrq");
 else if (VAR_8 == (u64) VAR_6->rcvhdrqtailaddr_phys)

  VAR_12 = FUNC_6(VAR_5, VAR_6, VAR_2,
       VAR_6->rcvhdrtail_kvaddr, 0,
       "rcvhdrq tail");
 else
  VAR_13 = 0;
 if (!VAR_13)
  VAR_12 = -VAR_0;

 VAR_5->vm_private_data = ((void*)0);

 if (VAR_12 < 0)
  FUNC_5(VAR_7->pcidev,
    "mmap Failure %d: off %llx len %lx\n",
    -VAR_12, (unsigned long long)VAR_8,
    VAR_5->vm_end - VAR_5->vm_start);
bail:
 return VAR_12;
}
