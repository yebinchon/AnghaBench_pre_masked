
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct delay_c* private; } ;
struct delay_c {int delayed_pool; scalar_t__ dev_write; scalar_t__ dev_read; } ;


 int FUNC_0 (struct dm_target*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct delay_c*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dm_target *VAR_1)
{
 struct delay_c *VAR_2 = VAR_1->private;

 FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_2->dev_read);

 if (VAR_2->dev_write)
  FUNC_0(VAR_1, VAR_2->dev_write);

 FUNC_3(VAR_2->delayed_pool);
 FUNC_2(VAR_2);
}
