
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_c {TYPE_1__* stripe; } ;
struct dm_target {int table; } ;
struct TYPE_2__ {unsigned long long physical_start; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dm_target*,char*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned long long*,char*) ;

__attribute__((used)) static int FUNC_3(struct dm_target *VAR_2, struct stripe_c *VAR_3,
        unsigned int VAR_4, char **VAR_5)
{
 unsigned long long VAR_6;
 char VAR_7;

 if (FUNC_2(VAR_5[1], "%llu%c", &VAR_6, &VAR_7) != 1)
  return -VAR_0;

 if (FUNC_0(VAR_2, VAR_5[0], FUNC_1(VAR_2->table),
     &VAR_3->stripe[VAR_4].dev))
  return -VAR_1;

 VAR_3->stripe[VAR_4].physical_start = VAR_6;

 return 0;
}
