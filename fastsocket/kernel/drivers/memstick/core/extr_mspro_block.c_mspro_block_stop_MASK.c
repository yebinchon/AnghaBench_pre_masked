
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mspro_block_data {int q_lock; int queue; int has_request; } ;
struct memstick_dev {int mrq_complete; } ;


 int FUNC_0 (int ) ;
 struct mspro_block_data* FUNC_1 (struct memstick_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct memstick_dev *VAR_0)
{
 struct mspro_block_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;
 unsigned long VAR_3;

 while (1) {
  FUNC_2(&VAR_1->q_lock, VAR_3);
  if (!VAR_1->has_request) {
   FUNC_0(VAR_1->queue);
   VAR_2 = 1;
  }
  FUNC_3(&VAR_1->q_lock, VAR_3);

  if (VAR_2)
   break;

  FUNC_4(&VAR_0->mrq_complete);
 }
}
