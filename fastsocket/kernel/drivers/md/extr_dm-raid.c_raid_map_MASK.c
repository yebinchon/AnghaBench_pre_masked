
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union map_info {int dummy; } map_info ;
struct mddev {TYPE_1__* pers; } ;
struct raid_set {struct mddev md; } ;
struct dm_target {struct raid_set* private; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int (* make_request ) (struct mddev*,struct bio*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mddev*,struct bio*) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_1, struct bio *VAR_2, union map_info *VAR_3)
{
 struct raid_set *VAR_4 = VAR_1->private;
 struct mddev *VAR_5 = &VAR_4->md;

 VAR_5->pers->make_request(VAR_5, VAR_2);

 return VAR_0;
}
