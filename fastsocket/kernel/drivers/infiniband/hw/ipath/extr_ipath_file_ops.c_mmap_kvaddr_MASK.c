
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vm_area_struct {int vm_flags; unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int * vm_ops; } ;
struct ipath_portdata {unsigned int port_subport_cnt; size_t port_rcvegrbuf_chunks; size_t port_rcvegrbuf_size; size_t port_rcvhdrq_size; void* subport_rcvegrbuf; void* subport_rcvhdr_base; void* subport_uregbase; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,char*,unsigned long,size_t) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_10, u64 VAR_11,
         struct ipath_portdata *VAR_12, unsigned VAR_13)
{
 unsigned long VAR_14;
 struct ipath_devdata *VAR_15;
 void *VAR_16;
 size_t VAR_17;
 int VAR_18 = 0;


 if (!VAR_12->port_subport_cnt)
  goto bail;

 VAR_15 = VAR_12->port_dd;
 VAR_17 = VAR_12->port_rcvegrbuf_chunks * VAR_12->port_rcvegrbuf_size;






 if (VAR_11 == FUNC_0(VAR_12->subport_uregbase)) {
  VAR_16 = VAR_12->subport_uregbase;
  VAR_17 = VAR_4 * VAR_12->port_subport_cnt;
 } else if (VAR_11 == FUNC_0(VAR_12->subport_rcvhdr_base)) {
  VAR_16 = VAR_12->subport_rcvhdr_base;
  VAR_17 = VAR_12->port_rcvhdrq_size * VAR_12->port_subport_cnt;
 } else if (VAR_11 == FUNC_0(VAR_12->subport_rcvegrbuf)) {
  VAR_16 = VAR_12->subport_rcvegrbuf;
  VAR_17 *= VAR_12->port_subport_cnt;
        } else if (VAR_11 == FUNC_0(VAR_12->subport_uregbase +
                                        VAR_4 * VAR_13)) {
                VAR_16 = VAR_12->subport_uregbase + VAR_4 * VAR_13;
                VAR_17 = VAR_4;
        } else if (VAR_11 == FUNC_0(VAR_12->subport_rcvhdr_base +
                                VAR_12->port_rcvhdrq_size * VAR_13)) {
                VAR_16 = VAR_12->subport_rcvhdr_base +
                        VAR_12->port_rcvhdrq_size * VAR_13;
                VAR_17 = VAR_12->port_rcvhdrq_size;
        } else if (VAR_11 == FUNC_0(VAR_12->subport_rcvegrbuf +
                               VAR_17 * VAR_13)) {
                VAR_16 = VAR_12->subport_rcvegrbuf + VAR_17 * VAR_13;

                if (VAR_10->vm_flags & VAR_8) {
                        FUNC_1(&VAR_15->pcidev->dev,
                                 "Can't map eager buffers as "
                                 "writable (flags=%lx)\n", VAR_10->vm_flags);
                        VAR_18 = -VAR_1;
                        goto bail;
                }




                VAR_10->vm_flags &= ~VAR_6;
 } else {
  goto bail;
 }
 VAR_14 = VAR_10->vm_end - VAR_10->vm_start;
 if (VAR_14 > VAR_17) {
  FUNC_2(VAR_2, "FAIL: reqlen %lx > %zx\n", VAR_14, VAR_17);
  VAR_18 = -VAR_0;
  goto bail;
 }

 VAR_10->vm_pgoff = (unsigned long) VAR_16 >> VAR_3;
 VAR_10->vm_ops = &VAR_9;
 VAR_10->vm_flags |= VAR_7 | VAR_5;
 VAR_18 = 1;

bail:
 return VAR_18;
}
