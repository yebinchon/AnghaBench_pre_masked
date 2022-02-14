
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_c {unsigned int stripes; TYPE_1__* stripe; } ;
struct dm_target {scalar_t__ private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct dm_target*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct stripe_c*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_1)
{
 unsigned int VAR_2;
 struct stripe_c *VAR_3 = (struct stripe_c *) VAR_1->private;

 for (VAR_2 = 0; VAR_2 < VAR_3->stripes; VAR_2++)
  FUNC_0(VAR_1, VAR_3->stripe[VAR_2].dev);

 FUNC_1(VAR_0);
 FUNC_2(VAR_3);
}
