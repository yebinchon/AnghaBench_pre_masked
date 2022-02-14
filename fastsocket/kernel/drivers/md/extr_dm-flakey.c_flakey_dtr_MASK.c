
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flakey_c {int dev; } ;
struct dm_target {struct flakey_c* private; } ;


 int FUNC_0 (struct dm_target*,int ) ;
 int FUNC_1 (struct flakey_c*) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0)
{
 struct flakey_c *VAR_1 = VAR_0->private;

 FUNC_0(VAR_0, VAR_1->dev);
 FUNC_1(VAR_1);
}
