
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mspro_block_data {int q_lock; int queue; } ;
struct memstick_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mspro_block_data* FUNC_1 (struct memstick_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct memstick_dev *VAR_0)
{
 struct mspro_block_data *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->q_lock, VAR_2);
 FUNC_0(VAR_1->queue);
 FUNC_3(&VAR_1->q_lock, VAR_2);
}
