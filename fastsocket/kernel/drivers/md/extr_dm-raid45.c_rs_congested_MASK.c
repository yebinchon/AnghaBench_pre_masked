
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct TYPE_6__ {unsigned int raid_devs; } ;
struct raid_set {scalar_t__ stats; TYPE_2__* dev; TYPE_3__ set; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int bdev; } ;


 scalar_t__ FUNC_0 (struct raid_set*) ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 struct request_queue* FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (struct raid_set*) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned VAR_5;
 struct raid_set *VAR_6 = VAR_2;

 if (FUNC_5(VAR_6) || FUNC_1(VAR_6) || FUNC_0(VAR_6))
  VAR_4 = 1;
 else for (VAR_4 = 0, VAR_5 = VAR_6->set.raid_devs; !VAR_4 && VAR_5--; ) {

  struct request_queue *VAR_7 = FUNC_3(VAR_6->dev[VAR_5].dev->bdev);

  VAR_4 |= FUNC_4(&VAR_7->backing_dev_info, VAR_3);
 }


 FUNC_2(VAR_6->stats + (VAR_4 ? VAR_0 : VAR_1));
 return VAR_4;
}
