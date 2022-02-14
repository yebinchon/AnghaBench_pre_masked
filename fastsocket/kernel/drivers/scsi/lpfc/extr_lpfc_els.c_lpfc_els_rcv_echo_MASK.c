
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_iocbq {scalar_t__ context2; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;


 int FUNC_0 (struct lpfc_vport*,int *,struct lpfc_iocbq*,struct lpfc_nodelist*) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_vport *VAR_0, struct lpfc_iocbq *VAR_1,
    struct lpfc_nodelist *VAR_2)
{
 uint8_t *VAR_3;

 VAR_3 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_1->context2)->virt);


 VAR_3 += sizeof(uint32_t);

 FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
 return 0;
}
