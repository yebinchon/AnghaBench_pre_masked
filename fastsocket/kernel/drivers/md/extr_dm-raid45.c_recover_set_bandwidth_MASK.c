
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int bandwidth; int bandwidth_work; } ;
struct raid_set {TYPE_1__ recover; } ;



__attribute__((used)) static void
FUNC_0(struct raid_set *VAR_0, unsigned VAR_1)
{
 VAR_0->recover.bandwidth = VAR_1;
 VAR_0->recover.bandwidth_work = 100 / VAR_1;
}
