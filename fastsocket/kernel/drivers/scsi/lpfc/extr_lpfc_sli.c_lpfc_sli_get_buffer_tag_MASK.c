
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_hba {int buffer_tag_count; int hbalock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

uint32_t
FUNC_2(struct lpfc_hba *VAR_1)
{
 FUNC_0(&VAR_1->hbalock);
 VAR_1->buffer_tag_count++;




 VAR_1->buffer_tag_count |= VAR_0;
 FUNC_1(&VAR_1->hbalock);
 return VAR_1->buffer_tag_count;
}
