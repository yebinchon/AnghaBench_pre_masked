
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_delay_info {unsigned long expires; int list; struct bio* bio; struct delay_c* context; } ;
struct delay_c {int delayed_bios; int reads; int writes; int delayed_pool; int may_delay; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 struct dm_delay_info* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct delay_c*,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct delay_c *VAR_5, int VAR_6, struct bio *VAR_7)
{
 struct dm_delay_info *VAR_8;
 unsigned long VAR_9 = 0;

 if (!VAR_6 || !FUNC_0(&VAR_5->may_delay))
  return 1;

 VAR_8 = FUNC_3(VAR_5->delayed_pool, VAR_0);

 VAR_8->context = VAR_5;
 VAR_8->bio = VAR_7;
 VAR_8->expires = VAR_9 = VAR_4 + (VAR_6 * VAR_1 / 1000);

 FUNC_4(&VAR_3);

 if (FUNC_1(VAR_7) == VAR_2)
  VAR_5->writes++;
 else
  VAR_5->reads++;

 FUNC_2(&VAR_8->list, &VAR_5->delayed_bios);

 FUNC_5(&VAR_3);

 FUNC_6(VAR_5, VAR_9);

 return 0;
}
