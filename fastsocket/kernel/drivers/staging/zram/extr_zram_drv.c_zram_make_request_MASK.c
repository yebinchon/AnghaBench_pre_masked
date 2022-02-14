
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int invalid_io; } ;
struct zram {int init_lock; TYPE_1__ stats; int init_done; } ;
struct request_queue {struct zram* queuedata; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct zram*,struct bio*,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct zram*,struct bio*) ;
 scalar_t__ FUNC_7 (struct zram*) ;
 int FUNC_8 (struct zram*,int *) ;

__attribute__((used)) static int FUNC_9(struct request_queue *VAR_0, struct bio *VAR_1)
{
 struct zram *VAR_2 = VAR_0->queuedata;

 if (FUNC_4(!VAR_2->init_done) && FUNC_7(VAR_2))
  goto error;

 FUNC_3(&VAR_2->init_lock);
 if (FUNC_4(!VAR_2->init_done))
  goto error_unlock;

 if (!FUNC_6(VAR_2, VAR_1)) {
  FUNC_8(VAR_2, &VAR_2->stats.invalid_io);
  goto error_unlock;
 }

 FUNC_0(VAR_2, VAR_1, FUNC_1(VAR_1));
 FUNC_5(&VAR_2->init_lock);

 return 0;

error_unlock:
 FUNC_5(&VAR_2->init_lock);
error:
 FUNC_2(VAR_1);
 return 0;
}
