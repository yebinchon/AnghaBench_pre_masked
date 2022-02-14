
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct vm_area_struct {unsigned int vm_pgoff; scalar_t__ vm_start; scalar_t__ vm_end; int * vm_private_data; } ;
struct ipath_portdata {int port_port; unsigned int port_subport_cnt; unsigned int port_piocnt; unsigned int port_piobufs; unsigned int port_rcvegr_phys; void* port_rcvhdrq; void* port_rcvhdrtail_kvaddr; scalar_t__ port_rcvhdrqtailaddr_phys; int port_rcvhdrq_size; scalar_t__ port_rcvhdrq_phys; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {unsigned int ipath_uregbase; int ipath_ureg_align; unsigned int ipath_palign; unsigned int ipath_pioavailregs_phys; TYPE_1__* pcidev; scalar_t__ ipath_pioavailregs_dma; int ipath_unit; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,unsigned long long,scalar_t__) ;
 int FUNC_1 (int ,char*,unsigned long long,scalar_t__,scalar_t__,int ,int,int) ;
 int FUNC_2 (struct vm_area_struct*,struct ipath_portdata*,int ,int,void*,char*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned int,struct ipath_portdata*,int) ;
 int FUNC_4 (struct vm_area_struct*,struct ipath_devdata*,struct ipath_portdata*,unsigned int,unsigned int) ;
 int FUNC_5 (struct vm_area_struct*,struct ipath_portdata*) ;
 int FUNC_6 (struct vm_area_struct*,struct ipath_devdata*,unsigned int) ;
 struct ipath_portdata* FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 struct ipath_portdata *VAR_6;
 struct ipath_devdata *VAR_7;
 u64 VAR_8, VAR_9;
 unsigned VAR_10, VAR_11;
 int VAR_12;

 VAR_6 = FUNC_7(VAR_4);
 if (!VAR_6) {
  VAR_12 = -VAR_0;
  goto bail;
 }
 VAR_7 = VAR_6->port_dd;
 VAR_8 = VAR_5->vm_pgoff << VAR_2;





 if (!VAR_8) {
  VAR_12 = -VAR_0;
  goto bail;
 }

 FUNC_1(VAR_1, "pgaddr %llx vm_start=%lx len %lx port %u:%u:%u\n",
     (unsigned long long) VAR_8, VAR_5->vm_start,
     VAR_5->vm_end - VAR_5->vm_start, VAR_7->ipath_unit,
     VAR_6->port_port, FUNC_8(VAR_4));






 VAR_12 = FUNC_3(VAR_5, VAR_8, VAR_6, FUNC_8(VAR_4));
 if (VAR_12) {
  if (VAR_12 > 0)
   VAR_12 = 0;
  goto bail;
 }

 VAR_9 = VAR_7->ipath_uregbase + VAR_7->ipath_ureg_align * VAR_6->port_port;
 if (!VAR_6->port_subport_cnt) {

  VAR_11 = VAR_6->port_piocnt;
  VAR_10 = VAR_6->port_piobufs;
 } else if (!FUNC_8(VAR_4)) {

  VAR_11 = (VAR_6->port_piocnt / VAR_6->port_subport_cnt) +
    (VAR_6->port_piocnt % VAR_6->port_subport_cnt);
  VAR_10 = VAR_6->port_piobufs +
   VAR_7->ipath_palign * (VAR_6->port_piocnt - VAR_11);
 } else {
  unsigned VAR_13 = FUNC_8(VAR_4) - 1;


  VAR_11 = VAR_6->port_piocnt / VAR_6->port_subport_cnt;
  VAR_10 = VAR_6->port_piobufs + VAR_7->ipath_palign * VAR_11 * VAR_13;
 }

 if (VAR_8 == VAR_9)
  VAR_12 = FUNC_6(VAR_5, VAR_7, VAR_9);
 else if (VAR_8 == VAR_10)
  VAR_12 = FUNC_4(VAR_5, VAR_7, VAR_6, VAR_10, VAR_11);
 else if (VAR_8 == VAR_7->ipath_pioavailregs_phys)

  VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_3, 0,
               (void *) VAR_7->ipath_pioavailregs_dma,
         "pioavail registers");
 else if (VAR_8 == VAR_6->port_rcvegr_phys)
  VAR_12 = FUNC_5(VAR_5, VAR_6);
 else if (VAR_8 == (u64) VAR_6->port_rcvhdrq_phys)





  VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_6->port_rcvhdrq_size, 1,
         VAR_6->port_rcvhdrq,
         "rcvhdrq");
 else if (VAR_8 == (u64) VAR_6->port_rcvhdrqtailaddr_phys)

  VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_3, 0,
         VAR_6->port_rcvhdrtail_kvaddr,
         "rcvhdrq tail");
 else
  VAR_12 = -VAR_0;

 VAR_5->vm_private_data = ((void*)0);

 if (VAR_12 < 0)
  FUNC_0(&VAR_7->pcidev->dev,
    "Failure %d on off %llx len %lx\n",
    -VAR_12, (unsigned long long)VAR_8,
    VAR_5->vm_end - VAR_5->vm_start);
bail:
 return VAR_12;
}
