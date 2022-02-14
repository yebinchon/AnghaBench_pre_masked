
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vm_area_struct {int vm_flags; unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int * vm_ops; } ;
struct qib_devdata {int pcidev; } ;
struct qib_ctxtdata {unsigned int subctxt_cnt; size_t rcvegrbuf_chunks; size_t rcvegrbuf_size; unsigned int rcvhdrq_size; int * subctxt_rcvegrbuf; int * user_event_mask; int * subctxt_rcvhdr_base; int * subctxt_uregbase; struct qib_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_9, u64 VAR_10,
         struct qib_ctxtdata *VAR_11, unsigned VAR_12)
{
 struct qib_devdata *VAR_13 = VAR_11->dd;
 unsigned VAR_14;
 unsigned long VAR_15;
 void *VAR_16;
 size_t VAR_17;
 int VAR_18 = 0;

 VAR_14 = VAR_11->subctxt_cnt;
 VAR_17 = VAR_11->rcvegrbuf_chunks * VAR_11->rcvegrbuf_size;






 if (VAR_10 == FUNC_0(VAR_11->subctxt_uregbase)) {
  VAR_16 = VAR_11->subctxt_uregbase;
  VAR_17 = VAR_3 * VAR_14;
 } else if (VAR_10 == FUNC_0(VAR_11->subctxt_rcvhdr_base)) {
  VAR_16 = VAR_11->subctxt_rcvhdr_base;
  VAR_17 = VAR_11->rcvhdrq_size * VAR_14;
 } else if (VAR_10 == FUNC_0(VAR_11->subctxt_rcvegrbuf)) {
  VAR_16 = VAR_11->subctxt_rcvegrbuf;
  VAR_17 *= VAR_14;
 } else if (VAR_10 == FUNC_0(VAR_11->subctxt_uregbase +
     VAR_3 * VAR_12)) {
  VAR_16 = VAR_11->subctxt_uregbase + VAR_3 * VAR_12;
  VAR_17 = VAR_3;
 } else if (VAR_10 == FUNC_0(VAR_11->subctxt_rcvhdr_base +
     VAR_11->rcvhdrq_size * VAR_12)) {
  VAR_16 = VAR_11->subctxt_rcvhdr_base +
   VAR_11->rcvhdrq_size * VAR_12;
  VAR_17 = VAR_11->rcvhdrq_size;
 } else if (VAR_10 == FUNC_0(&VAR_11->user_event_mask[VAR_12])) {
  VAR_16 = VAR_11->user_event_mask;
  VAR_17 = VAR_3;
 } else if (VAR_10 == FUNC_0(VAR_11->subctxt_rcvegrbuf +
     VAR_17 * VAR_12)) {
  VAR_16 = VAR_11->subctxt_rcvegrbuf + VAR_17 * VAR_12;

  if (VAR_9->vm_flags & VAR_7) {
   FUNC_1(VAR_13->pcidev,
     "Can't map eager buffers as "
     "writable (flags=%lx)\n", VAR_9->vm_flags);
   VAR_18 = -VAR_1;
   goto bail;
  }




  VAR_9->vm_flags &= ~VAR_5;
 } else
  goto bail;
 VAR_15 = VAR_9->vm_end - VAR_9->vm_start;
 if (VAR_15 > VAR_17) {
  VAR_18 = -VAR_0;
  goto bail;
 }

 VAR_9->vm_pgoff = (unsigned long) VAR_16 >> VAR_2;
 VAR_9->vm_ops = &VAR_8;
 VAR_9->vm_flags |= VAR_6 | VAR_4;
 VAR_18 = 1;

bail:
 return VAR_18;
}
