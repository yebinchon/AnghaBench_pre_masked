
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct memstick_dev* queuedata; } ;
struct request {int dummy; } ;
struct mspro_block_data {int has_request; scalar_t__ eject; } ;
struct memstick_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 struct request* FUNC_1 (struct request_queue*) ;
 struct mspro_block_data* FUNC_2 (struct memstick_dev*) ;
 scalar_t__ FUNC_3 (struct memstick_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_1)
{
 struct memstick_dev *VAR_2 = VAR_1->queuedata;
 struct mspro_block_data *VAR_3 = FUNC_2(VAR_2);
 struct request *VAR_4 = ((void*)0);

 if (VAR_3->has_request)
  return;

 if (VAR_3->eject) {
  while ((VAR_4 = FUNC_1(VAR_1)) != ((void*)0))
   FUNC_0(VAR_4, -VAR_0);

  return;
 }

 VAR_3->has_request = 1;
 if (FUNC_3(VAR_2, 0))
  VAR_3->has_request = 0;
}
