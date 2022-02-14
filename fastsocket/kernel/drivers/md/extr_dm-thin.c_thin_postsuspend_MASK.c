
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int dummy; } ;
struct dm_target {struct thin_c* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct thin_c*,int ) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_1)
{
 struct thin_c *VAR_2 = VAR_1->private;





 FUNC_0(VAR_2, VAR_0);
}
