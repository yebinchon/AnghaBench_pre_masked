
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_sli_ring {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int dummy; } ;
struct hbq_dmabuf {struct lpfc_dmabuf dbuf; } ;


 int VAR_0 ;
 struct hbq_dmabuf* FUNC_0 (struct lpfc_hba*,int) ;
 struct lpfc_dmabuf* FUNC_1 (struct lpfc_hba*,struct lpfc_sli_ring*,int) ;

__attribute__((used)) static struct lpfc_dmabuf *
FUNC_2(struct lpfc_hba *VAR_1,
    struct lpfc_sli_ring *VAR_2,
    uint32_t VAR_3)
{
 struct hbq_dmabuf *VAR_4;

 if (VAR_3 & VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_4)
  return ((void*)0);
 return &VAR_4->dbuf;
}
