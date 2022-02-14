
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {TYPE_1__* phba; } ;
struct TYPE_2__ {int (* lpfc_new_scsi_buf ) (struct lpfc_vport*,int) ;} ;


 int FUNC_0 (struct lpfc_vport*,int) ;

__attribute__((used)) static inline int
FUNC_1(struct lpfc_vport *VAR_0, int VAR_1)
{
 return VAR_0->phba->lpfc_new_scsi_buf(VAR_0, VAR_1);
}
