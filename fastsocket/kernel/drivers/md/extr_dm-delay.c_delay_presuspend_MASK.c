
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct delay_c* private; } ;
struct delay_c {int delay_timer; int may_delay; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct delay_c*,int) ;

__attribute__((used)) static void FUNC_4(struct dm_target *VAR_0)
{
 struct delay_c *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_1->may_delay, 0);
 FUNC_1(&VAR_1->delay_timer);
 FUNC_2(FUNC_3(VAR_1, 1));
}
