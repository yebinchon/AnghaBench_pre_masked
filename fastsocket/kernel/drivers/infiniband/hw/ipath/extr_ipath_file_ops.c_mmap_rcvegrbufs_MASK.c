
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {size_t vm_end; unsigned long vm_start; int vm_flags; int vm_page_prot; } ;
struct ipath_portdata {unsigned long port_rcvegrbuf_size; unsigned long port_rcvegrbuf_chunks; int * port_rcvegrbuf; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vm_area_struct *VAR_5,
      struct ipath_portdata *VAR_6)
{
 struct ipath_devdata *VAR_7 = VAR_6->port_dd;
 unsigned long VAR_8, VAR_9;
 size_t VAR_10, VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_9 = VAR_6->port_rcvegrbuf_size;
 VAR_10 = VAR_6->port_rcvegrbuf_chunks * VAR_9;
 if ((VAR_5->vm_end - VAR_5->vm_start) > VAR_10) {
  FUNC_0(&VAR_7->pcidev->dev, "FAIL on egr bufs: "
    "reqlen %lx > actual %lx\n",
    VAR_5->vm_end - VAR_5->vm_start,
    (unsigned long) VAR_10);
  VAR_13 = -VAR_0;
  goto bail;
 }

 if (VAR_5->vm_flags & VAR_4) {
  FUNC_0(&VAR_7->pcidev->dev, "Can't map eager buffers as "
    "writable (flags=%lx)\n", VAR_5->vm_flags);
  VAR_13 = -VAR_1;
  goto bail;
 }

 VAR_5->vm_flags &= ~VAR_3;

 VAR_8 = VAR_5->vm_start;

 for (VAR_11 = 0; VAR_11 < VAR_6->port_rcvegrbuf_chunks; VAR_11++, VAR_8 += VAR_9) {
  VAR_12 = FUNC_2(VAR_6->port_rcvegrbuf[VAR_11]) >> VAR_2;
  VAR_13 = FUNC_1(VAR_5, VAR_8, VAR_12, VAR_9,
          VAR_5->vm_page_prot);
  if (VAR_13 < 0)
   goto bail;
 }
 VAR_13 = 0;

bail:
 return VAR_13;
}
