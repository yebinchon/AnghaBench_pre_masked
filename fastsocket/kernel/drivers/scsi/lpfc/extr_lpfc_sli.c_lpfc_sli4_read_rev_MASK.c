
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_13__ {int word1; scalar_t__ avail_vpd_len; int vpd_paddr_low; int vpd_paddr_high; } ;
struct TYPE_10__ {TYPE_8__ read_rev; } ;
struct lpfc_mqe {TYPE_2__ un; } ;
struct lpfc_hba {TYPE_3__* pcidev; } ;
struct lpfc_dmabuf {int phys; int virt; } ;
struct TYPE_9__ {struct lpfc_mqe mqe; } ;
struct TYPE_12__ {TYPE_1__ u; } ;
struct TYPE_11__ {int dev; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_8__*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int *,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct lpfc_hba*,TYPE_4__*) ;
 int FUNC_6 (struct lpfc_hba*,TYPE_4__*,int ) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7,
      uint8_t *VAR_8, uint32_t *VAR_9)
{
 int VAR_10 = 0;
 uint32_t VAR_11;
 struct lpfc_dmabuf *VAR_12;
 struct lpfc_mqe *VAR_13;

 VAR_12 = FUNC_4(sizeof(struct lpfc_dmabuf), VAR_2);
 if (!VAR_12)
  return -VAR_1;





 VAR_11 = *VAR_9;
 VAR_12->virt = FUNC_1(&VAR_6->pcidev->dev,
       VAR_11,
       &VAR_12->phys,
       VAR_2);
 if (!VAR_12->virt) {
  FUNC_3(VAR_12);
  return -VAR_1;
 }
 FUNC_8(VAR_12->virt, 0, VAR_11);






 FUNC_5(VAR_6, VAR_7);
 VAR_13 = &VAR_7->u.mqe;
 VAR_13->un.read_rev.vpd_paddr_high = FUNC_9(VAR_12->phys);
 VAR_13->un.read_rev.vpd_paddr_low = FUNC_10(VAR_12->phys);
 VAR_13->un.read_rev.word1 &= 0x0000FFFF;
 FUNC_0(VAR_5, &VAR_13->un.read_rev, 1);
 FUNC_0(VAR_4, &VAR_13->un.read_rev, VAR_11);

 VAR_10 = FUNC_6(VAR_6, VAR_7, VAR_3);
 if (VAR_10) {
  FUNC_2(&VAR_6->pcidev->dev, VAR_11,
      VAR_12->virt, VAR_12->phys);
  FUNC_3(VAR_12);
  return -VAR_0;
 }






 if (VAR_13->un.read_rev.avail_vpd_len < *VAR_9)
  *VAR_9 = VAR_13->un.read_rev.avail_vpd_len;

 FUNC_7(VAR_8, VAR_12->virt, *VAR_9);

 FUNC_2(&VAR_6->pcidev->dev, VAR_11,
     VAR_12->virt, VAR_12->phys);
 FUNC_3(VAR_12);
 return 0;
}
