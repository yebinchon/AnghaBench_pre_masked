
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct dma_address {int addr_hi; int addr_lo; } ;
struct TYPE_5__ {int bmbx_size; int aphys; struct dma_address dma_address; int avirt; struct lpfc_dmabuf* dmabuf; } ;
struct TYPE_6__ {TYPE_2__ bmbx; } ;
struct lpfc_hba {TYPE_3__ sli4_hba; TYPE_1__* pcidev; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct lpfc_bmbx_create {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_5)
{
 uint32_t VAR_6;
 struct lpfc_dmabuf *VAR_7;
 struct dma_address *VAR_8;
 uint32_t VAR_9;
 uint64_t VAR_10;

 VAR_7 = FUNC_4(sizeof(struct lpfc_dmabuf), VAR_1);
 if (!VAR_7)
  return -VAR_0;





 VAR_6 = sizeof(struct lpfc_bmbx_create) + (VAR_2 - 1);
 VAR_7->virt = FUNC_2(&VAR_5->pcidev->dev,
       VAR_6,
       &VAR_7->phys,
       VAR_1);
 if (!VAR_7->virt) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }
 FUNC_5(VAR_7->virt, 0, VAR_6);
 VAR_5->sli4_hba.bmbx.dmabuf = VAR_7;
 VAR_5->sli4_hba.bmbx.bmbx_size = VAR_6;

 VAR_5->sli4_hba.bmbx.avirt = FUNC_1(VAR_7->virt,
           VAR_2);
 VAR_5->sli4_hba.bmbx.aphys = FUNC_0(VAR_7->phys,
           VAR_2);
 VAR_8 = &VAR_5->sli4_hba.bmbx.dma_address;
 VAR_10 = (uint64_t)VAR_5->sli4_hba.bmbx.aphys;
 VAR_9 = (uint32_t) ((VAR_10 >> 34) & 0x3fffffff);
 VAR_8->addr_hi = (uint32_t) ((VAR_9 << 2) |
        VAR_3);

 VAR_9 = (uint32_t) ((VAR_5->sli4_hba.bmbx.aphys >> 4) & 0x3fffffff);
 VAR_8->addr_lo = (uint32_t) ((VAR_9 << 2) |
        VAR_4);
 return 0;
}
