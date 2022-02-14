
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qeth_card {unsigned long thread_start_mask; int thread_mask_lock; scalar_t__ thread_running_mask; scalar_t__ thread_allowed_mask; } ;


 int FUNC_0 (int ,int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_1(&VAR_1->thread_mask_lock, VAR_3);
 FUNC_0(VAR_0, 4, "  %02x%02x%02x",
   (u8) VAR_1->thread_start_mask,
   (u8) VAR_1->thread_allowed_mask,
   (u8) VAR_1->thread_running_mask);
 VAR_4 = (VAR_1->thread_start_mask & VAR_2);
 FUNC_2(&VAR_1->thread_mask_lock, VAR_3);
 return VAR_4;
}
