
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct pci_dev {int dev; } ;
struct ocrdma_pbe {void* pa_hi; void* pa_lo; } ;
struct ocrdma_mqe {int dummy; } ;
struct TYPE_7__ {int pa; int * va; } ;
struct TYPE_8__ {int size; int pa; int num_ah; int ahid; TYPE_3__ pbl; int * va; } ;
struct TYPE_5__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_4__ av_tbl; TYPE_1__ nic_info; } ;
struct ocrdma_create_ah_tbl_rsp {int ahid; } ;
struct ocrdma_create_ah_tbl {int ah_conf; TYPE_2__* tbl_addr; } ;
struct ocrdma_av {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {void* hi; void* lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int *,int,int*,int ) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (struct ocrdma_create_ah_tbl*) ;
 int FUNC_3 (int *,int ,int) ;
 struct ocrdma_create_ah_tbl* FUNC_4 (int ,int) ;
 int FUNC_5 (struct ocrdma_dev*,struct ocrdma_mqe*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ocrdma_dev *VAR_13)
{
 int VAR_14 ;
 int VAR_15 = 0;
 int VAR_16;
 struct ocrdma_create_ah_tbl *VAR_17;
 struct ocrdma_create_ah_tbl_rsp *VAR_18;
 struct pci_dev *VAR_19 = VAR_13->nic_info.pdev;
 dma_addr_t VAR_20;
 struct ocrdma_pbe *VAR_21;

 VAR_17 = FUNC_4(VAR_2, sizeof(*VAR_17));
 if (!VAR_17)
  return VAR_15;

 VAR_16 = VAR_9;
 VAR_13->av_tbl.size = sizeof(struct ocrdma_av) * VAR_16;


 VAR_17->ah_conf = (VAR_1 <<
    VAR_6) &
    VAR_5;


 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  if (VAR_12 == (VAR_11 << VAR_14))
   break;
 }
 VAR_17->ah_conf |= (VAR_14 << VAR_8) &
    VAR_7;


 VAR_17->ah_conf |= (sizeof(struct ocrdma_av) <<
    VAR_4) &
    VAR_3;

 VAR_13->av_tbl.pbl.va = FUNC_0(&VAR_19->dev, VAR_12,
      &VAR_13->av_tbl.pbl.pa,
      VAR_0);
 if (VAR_13->av_tbl.pbl.va == ((void*)0))
  goto mem_err;

 VAR_13->av_tbl.va = FUNC_0(&VAR_19->dev, VAR_13->av_tbl.size,
         &VAR_20, VAR_0);
 if (VAR_13->av_tbl.va == ((void*)0))
  goto mem_err_ah;
 VAR_13->av_tbl.pa = VAR_20;
 VAR_13->av_tbl.num_ah = VAR_16;
 FUNC_3(VAR_13->av_tbl.va, 0, VAR_13->av_tbl.size);

 VAR_21 = (struct ocrdma_pbe *)VAR_13->av_tbl.pbl.va;
 for (VAR_14 = 0; VAR_14 < VAR_13->av_tbl.size / VAR_11; VAR_14++) {
  VAR_21[VAR_14].pa_lo = (u32) (VAR_20 & 0xffffffff);
  VAR_21[VAR_14].pa_hi = (u32) FUNC_6(VAR_20);
  VAR_20 += VAR_12;
 }
 VAR_17->tbl_addr[0].lo = (u32)(VAR_13->av_tbl.pbl.pa & 0xFFFFFFFF);
 VAR_17->tbl_addr[0].hi = (u32)FUNC_6(VAR_13->av_tbl.pbl.pa);
 VAR_15 = FUNC_5(VAR_13, (struct ocrdma_mqe *)VAR_17);
 if (VAR_15)
  goto mbx_err;
 VAR_18 = (struct ocrdma_create_ah_tbl_rsp *)VAR_17;
 VAR_13->av_tbl.ahid = VAR_18->ahid & 0xFFFF;
 FUNC_2(VAR_17);
 return 0;

mbx_err:
 FUNC_1(&VAR_19->dev, VAR_13->av_tbl.size, VAR_13->av_tbl.va,
     VAR_13->av_tbl.pa);
 VAR_13->av_tbl.va = ((void*)0);
mem_err_ah:
 FUNC_1(&VAR_19->dev, VAR_12, VAR_13->av_tbl.pbl.va,
     VAR_13->av_tbl.pbl.pa);
 VAR_13->av_tbl.pbl.va = ((void*)0);
 VAR_13->av_tbl.size = 0;
mem_err:
 FUNC_2(VAR_17);
 return VAR_15;
}
