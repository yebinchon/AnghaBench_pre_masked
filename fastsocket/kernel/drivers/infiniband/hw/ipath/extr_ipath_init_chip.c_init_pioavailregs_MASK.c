
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_pioavregs; char* ipath_freezemsg; int ipath_freezelen; int * ipath_statusp; int _ipath_status; scalar_t__ ipath_pioavailregs_dma; int ipath_pioavailregs_phys; TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct ipath_devdata*,char*) ;

__attribute__((used)) static int FUNC_2(struct ipath_devdata *VAR_4)
{
 int VAR_5;

 VAR_4->ipath_pioavailregs_dma = FUNC_0(
  &VAR_4->pcidev->dev, VAR_3, &VAR_4->ipath_pioavailregs_phys,
  VAR_1);
 if (!VAR_4->ipath_pioavailregs_dma) {
  FUNC_1(VAR_4, "failed to allocate PIOavail reg area "
         "in memory\n");
  VAR_5 = -VAR_0;
  goto done;
 }





 VAR_4->ipath_statusp = (u64 *)
  ((char *)VAR_4->ipath_pioavailregs_dma +
   ((2 * VAR_2 +
     VAR_4->ipath_pioavregs * sizeof(u64)) & ~VAR_2));

 *VAR_4->ipath_statusp = VAR_4->_ipath_status;




 VAR_4->ipath_freezemsg = (char *)&VAR_4->ipath_statusp[1];

 VAR_4->ipath_freezelen = VAR_2 - sizeof(VAR_4->ipath_statusp[0]);

 VAR_5 = 0;

done:
 return VAR_5;
}
