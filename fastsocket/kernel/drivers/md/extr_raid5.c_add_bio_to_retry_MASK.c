
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {TYPE_1__* mddev; int device_lock; struct bio* retry_read_aligned_list; } ;
struct bio {struct bio* bi_next; } ;
struct TYPE_2__ {int thread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0,struct r5conf *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->device_lock, VAR_2);

 VAR_0->bi_next = VAR_1->retry_read_aligned_list;
 VAR_1->retry_read_aligned_list = VAR_0;

 FUNC_2(&VAR_1->device_lock, VAR_2);
 FUNC_0(VAR_1->mddev->thread);
}
