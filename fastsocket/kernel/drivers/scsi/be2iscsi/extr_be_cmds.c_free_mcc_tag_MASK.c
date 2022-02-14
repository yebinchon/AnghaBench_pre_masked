
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_ctrl_info {unsigned int* mcc_tag; size_t mcc_free_index; int mbox_lock; int mcc_tag_available; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct be_ctrl_info *VAR_1, unsigned int VAR_2)
{
 FUNC_0(&VAR_1->mbox_lock);
 VAR_2 = VAR_2 & 0x000000FF;
 VAR_1->mcc_tag[VAR_1->mcc_free_index] = VAR_2;
 if (VAR_1->mcc_free_index == (VAR_0 - 1))
  VAR_1->mcc_free_index = 0;
 else
  VAR_1->mcc_free_index++;
 VAR_1->mcc_tag_available++;
 FUNC_1(&VAR_1->mbox_lock);
}
