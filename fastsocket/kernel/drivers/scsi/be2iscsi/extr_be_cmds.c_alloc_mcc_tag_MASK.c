
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* mcc_tag; size_t mcc_alloc_index; scalar_t__ mcc_tag_available; scalar_t__* mcc_numtag; } ;
struct beiscsi_hba {TYPE_1__ ctrl; } ;


 int VAR_0 ;

unsigned int FUNC_0(struct beiscsi_hba *VAR_1)
{
 unsigned int VAR_2 = 0;

 if (VAR_1->ctrl.mcc_tag_available) {
  VAR_2 = VAR_1->ctrl.mcc_tag[VAR_1->ctrl.mcc_alloc_index];
  VAR_1->ctrl.mcc_tag[VAR_1->ctrl.mcc_alloc_index] = 0;
  VAR_1->ctrl.mcc_numtag[VAR_2] = 0;
 }
 if (VAR_2) {
  VAR_1->ctrl.mcc_tag_available--;
  if (VAR_1->ctrl.mcc_alloc_index == (VAR_0 - 1))
   VAR_1->ctrl.mcc_alloc_index = 0;
  else
   VAR_1->ctrl.mcc_alloc_index++;
 }
 return VAR_2;
}
