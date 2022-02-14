
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct raid_set {TYPE_1__* ti; } ;
struct mapped_device {int dummy; } ;
struct backing_dev_info {struct raid_set* congested_data; int congested_fn; } ;
struct TYPE_6__ {TYPE_2__* queue; } ;
struct TYPE_5__ {struct backing_dev_info backing_dev_info; } ;
struct TYPE_4__ {int table; } ;


 TYPE_3__* FUNC_0 (struct mapped_device*) ;
 int FUNC_1 (struct mapped_device*) ;
 struct mapped_device* FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct raid_set *VAR_1)
{
 struct mapped_device *VAR_2 = FUNC_2(VAR_1->ti->table);
 struct backing_dev_info *VAR_3 = &FUNC_0(VAR_2)->queue->backing_dev_info;


 VAR_3->congested_fn = VAR_0;
 VAR_3->congested_data = VAR_1;
 FUNC_1(VAR_2);
}
